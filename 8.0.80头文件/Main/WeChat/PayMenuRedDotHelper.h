@interface PayMenuRedDotHelper : NSObject
+ (void)handleMsg:(id)arg1;
+ (void)updateInfo:(id)arg1 withItem:(id)arg2;
+ (id)getNewRedDotInfo;
+ (id)getRedDotItemWithRedDotId:(id)arg1;
+ (BOOL)showRedDotAtName:(id)arg1;
+ (id)wordingAtName:(id)arg1;
+ (void)clearPayMenuRedDotForName:(id)arg1;
+ (BOOL)showRedDotAtPayWallet;
+ (BOOL)showRedDotAtPay;
+ (BOOL)showRedDotAtMe;
+ (id)wordingAtWallet;
+ (void)clearRedDotAtPayWallet;
+ (void)clearRedDotAtWallet;
+ (void)clearRedDotAtWalletWithReport:(BOOL)arg1;
+ (void)clearRedDotAtMe;
@end
