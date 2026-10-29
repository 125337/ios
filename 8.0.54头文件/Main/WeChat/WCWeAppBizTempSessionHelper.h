@interface WCWeAppBizTempSessionHelper : NSObject <PBMessageObserverDelegate>
{
    id <WCWeAppBizTempSessionHelperDelegate> _delegate; // +0x8
    WCWeAppBizTempSessionInfo * _bizInfo; // +0x10
    WAPermissionHandler * _permissionHandler; // +0x18
}
- (void)dealloc;
- (void)jumpToWeAppBizTempSessionWithInfo:(id)arg1;
- (void)enterContact;
- (void)enterSessionWithBizInfo:(id)arg1;
- (void)requestWithBusinessID:(id)arg1;
- (void)onGetSubBusinessInfoResponse:(id)arg1;
- (void)enterBizTempSessionWithInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)enterBizTempSessionWithInfo:(id)arg1 contact:(id)arg2 callback:(id /* block */)arg3;
- (void)startLoadingView;
- (void)stopLoadingView;
- (void)didJumpToTempSession:(id)arg1;
- (void)endWithSuccess:(id)arg1;
- (void)endWithError:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (id)permissionHandler;
- (void)setPermissionHandler:(id)arg1;
- (void).cxx_destruct;
@end

