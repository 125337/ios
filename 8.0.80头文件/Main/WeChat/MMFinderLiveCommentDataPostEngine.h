@interface MMFinderLiveCommentDataPostEngine : MMLiveCommentDataPostEngine <WCFinderLiveExt>
+ (int)convertAppMsgTypeFromPostTask:(unsigned long long)arg1 boxId:(id)arg2;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyPostLiveMessageWithPostTask:(id)arg1;
- (void)onPostFinderLiveMessage:(id)arg1 taskId:(id)arg2 statusFlag:(unsigned int)arg3 userInfo:(id)arg4 failToastInfo:(id)arg5;
@end
