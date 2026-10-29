@interface WCPayOverseaMainWalletIdKeyReport : NSObject
+ (void)reportEnterOverseaMainWallet;
+ (void)reportPayFunctionListReturnOK;
+ (void)reportPayFunctionListReturnError;
+ (void)reportIBGGetWalletReturnOK;
+ (void)reportIBGGetWalletReturnError;
+ (void)reportClickPayFunctionItem;
+ (void)reportClickPayFunctionItemWithOutUrl;
+ (void)reportClickGrayItem;
+ (void)reportClickGrayItemWithOutUrl;
+ (void)reportClickOperation;
+ (void)reportClickActionSheetItem;
+ (void)reportClickActionSheetItemWithOutUrl;
+ (void)reportClickSwitchWallet;
@end

