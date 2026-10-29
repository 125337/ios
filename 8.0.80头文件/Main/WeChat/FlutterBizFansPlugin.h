@interface FlutterBizFansPlugin : NSObject <BrandFansContactProfileControllerDelegate, MMFlutterPlugin, BizFansListApi>
{
    MMFlutterViewController * _currentViewController; // +0x8
    long long _serviceType; // +0x10
    CContactVerifyLogic * _m_oLogic; // +0x18
}
- (id)initWithServiceType:(long long)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)openBizFansHalfScreenProfileUserInfo:(id)arg1 enterScene:(id)arg2 error:(id *)arg3;
- (void)openBizFansBlackListUIBiz:(id)arg1 error:(id *)arg2;
- (void)setBizFansBlockUserInfo:(id)arg1 biz:(id)arg2 block:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)clickBlockContactInController:(id)arg1;
- (void)clickUnblockContactInController:(id)arg1;
- (void)clickViewDetailInController:(id)arg1;
- (void)clickViewProfileInController:(id)arg1;
- (void)goToWXProfileInController:(id)arg1;
- (void)clickSendMessageInController:(id)arg1;
- (void)confirmBlockUser:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3;
- (void)addContactUsername:(id)arg1 scene:(long long)arg2 error:(id *)arg3;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (long long)serviceType;
- (void)setServiceType:(long long)arg1;
- (id)m_oLogic;
- (void)setM_oLogic:(id)arg1;
- (void).cxx_destruct;
@end
