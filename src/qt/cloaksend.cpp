#include <QtCore>
#include "cloaksend.h"
#include "bitcoinrpc.h"
#include "wallet.h"
#include "walletdb.h"
#include "bitcoinrpc.h"
#include "init.h"
#include "base58.h"

cloaksend::cloaksend(QObject *parent) :
    QObject(parent)
{
}

QString cloaksend::getCloakedAddress()
{
    if (!pwalletMain->IsLocked())
        pwalletMain->TopUpKeyPool();

    // Generate a new key that is added to wallet
    CPubKey newKey;
    if (!pwalletMain->GetKeyFromPool(newKey, false))
        throw JSONRPCError(RPC_WALLET_KEYPOOL_RAN_OUT, "Error: Keypool ran out, please call keypoolrefill first");
    CKeyID keyID = newKey.GetID();

    std::string address = CBitcoinAddress(keyID).ToString();
	QString qAddress = QString::fromStdString(address);
	return qAddress;
}
