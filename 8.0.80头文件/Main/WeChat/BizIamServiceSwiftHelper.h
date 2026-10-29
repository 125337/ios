@interface BizIamServiceSwiftHelper : MMUserService <IStrangerContactMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _pendingProfileOpenRequests; // +0x8
    unsigned long long _nextProfileOpenRequestToken; // +0x10
}
+ (id)getNavigatonControllerFromWeAppHostController:(id)arg1;
- (void)getProfileOutboxAppMsgIds:(int)arg1 completion:(id /* block */)arg2;
- (void)setProfileOutboxAppMsgIds:(id)arg1 serviceProxyType:(int)arg2;
- (void)getProfileOutboxMessages:(int)arg1 completion:(id /* block */)arg2;
- (void)startPollingOutboxMessagesWithServiceProxyType:(int)arg1;
- (void)stopPollingOutboxMessagesWithServiceProxyType:(int)arg1;
- (void)subscribeOutboxMessagesUpdatedEvent:(id)arg1 serviceProxyType:(int)arg2 completion:(id /* block */)arg3;
- (void)unsubscribeOutboxMessagesUpdatedEvent:(id)arg1 serviceProxyType:(int)arg2;
- (void)subscribeProfileMessagesUpdatedNotifyEvent:(id)arg1 serviceProxyType:(int)arg2 completion:(id /* block */)arg3;
- (void)unsubscribeProfileMessagesUpdatedNotifyEvent:(id)arg1 serviceProxyType:(int)arg2;
- (void)setProfileUpdateTime:(unsigned int)arg1 serviceProxyType:(int)arg2;
- (void)deleteProfileOutboxAppmsgId:(unsigned int)arg1 serviceProxyType:(int)arg2;
- (void)deleteAppmsgWithAppmsgId:(unsigned int)arg1 index:(unsigned int)arg2 serviceProxyType:(int)arg3 completion:(id /* block */)arg4;
- (void)getTempUrlWithAppmsgId:(unsigned int)arg1 index:(unsigned int)arg2 serviceProxyType:(int)arg3 completion:(id /* block */)arg4;
- (void)resumeEditingWithAppmsgId:(unsigned int)arg1 index:(unsigned int)arg2 serviceProxyType:(int)arg3 itemShowType:(unsigned int)arg4;
- (void)resumeEditingWithViewModel:(id)arg1 serviceProxyType:(int)arg2;
- (void)getMiniAppVersionTypeAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)openPublishMiniAppWithPage:(id)arg1 sceneNote:(id)arg2 serviceProxyType:(int)arg3;
- (void)notifyProfileUpdated:(id)arg1 serviceProxyType:(int)arg2;
- (void)openProfileFromWeAppWithUsername:(id)arg1 hostController:(id)arg2;
- (void)openProfileFromWeAppWithUsername:(id)arg1 enterItemShowType:(long long)arg2 hostController:(id)arg3;
- (void)enqueueProfileOpenRequestWithUsername:(id)arg1 hostController:(id)arg2 profileEnterInfo:(id)arg3 shouldDismissWeAppContainer:(BOOL)arg4;
- (void)openProfileWithUsername:(id)arg1 hostController:(id)arg2;
- (void)openProfileWithUsername:(id)arg1 profileScene:(unsigned int)arg2 hostController:(id)arg3;
- (void)openProfileWithContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (void)openProfileWithContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 profileEnterInfo:(id)arg4;
- (void)getProfileCacheDataWithUsername:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)fetchProfileDataWithUsername:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 offset:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchProfileJustReadPageLimitWithUsername:(id)arg1 inBrandManagerMode:(BOOL)arg2 appMsgId:(unsigned int)arg3 itemIndex:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)cleanPageDataForUrl:(id)arg1;
- (id)copyWeAppTempFilePathWithAppID:(id)arg1 filePath:(id)arg2 fileType:(id)arg3;
- (id)getAllDynamicCardInfo:(int)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)openProfileWithContactUpdated:(id)arg1 contact:(id)arg2 hostController:(id)arg3 shouldDismissWeAppContainer:(BOOL)arg4 pendingProfileEnterInfo:(id)arg5;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (id)pendingProfileOpenRequests;
- (void)setPendingProfileOpenRequests:(id)arg1;
- (unsigned long long)nextProfileOpenRequestToken;
- (void)setNextProfileOpenRequestToken:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
