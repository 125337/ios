@interface PushLoginURLMgr : MMUserService <IMsgExt, GetA8KeyLogicDelegate, MMKernelExt, MMServiceProtocol>
{
    GetA8KeyLogic * _getA8KeyLogic; // +0x8
}
+ (BOOL)shouldShowOneClickLogin;
+ (void)clearOneClickLoginInfo;
- (id)init;
- (void)dealloc;
- (id)getGetA8KeyLogic;
- (void)loginFormOtherApp:(id)arg1 bundleID:(id)arg2;
- (void)loginByBlueToothWithURL:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onGetA8KeyOneClickLoginWithURL:(id)arg1 extraInfo:(id)arg2;
- (void)onManulLogOut;
- (void).cxx_destruct;
@end

