@interface BizIamServiceSwiftHelper : MMUserService <IStrangerContactMgrExt, MMServiceProtocol>
{
    BOOL _isFromWeApp; // +0x8
    MMUIViewController * _hostController; // +0x10
}
+ (id)getNavigatonControllerFromWeAppHostController:(id)arg1;
- (void)getProfileOutboxAppMsgIds:(id /* block */)arg1;
- (void)setProfileOutboxAppMsgIds:(id)arg1;
- (void)notifyProfileUpdated:(id)arg1;
- (void)openProfileFromWeAppWithUsername:(id)arg1 hostController:(id)arg2;
- (void)openProfileWithUsername:(id)arg1 hostController:(id)arg2;
- (void)openProfileWithContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (void)getProfileCacheDataWithUsername:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)fetchProfileDataWithUsername:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 offset:(id)arg4 completion:(id /* block */)arg5;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (id)hostController;
- (void)setHostController:(id)arg1;
- (BOOL)isFromWeApp;
- (void)setIsFromWeApp:(BOOL)arg1;
- (void).cxx_destruct;
@end
