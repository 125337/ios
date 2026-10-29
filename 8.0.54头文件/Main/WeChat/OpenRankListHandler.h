@interface OpenRankListHandler : MMObject <WCShareAuthViewControllerDelegate, IPreEnterWechatLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
    NSURL * _url; // +0x10
    MMUINavigationController * _navigationController; // +0x18
}
- (void)startHandle:(id)arg1;
- (void)startAuth;
- (void)cancelOpenRankList;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)openRankList;
- (void)onPreEnterWechatDone;
- (void)doAuth;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)removeAuthViewController;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (void).cxx_destruct;
@end

