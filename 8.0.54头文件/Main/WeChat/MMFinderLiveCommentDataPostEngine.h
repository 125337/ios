@interface MMFinderLiveCommentDataPostEngine : MMLiveCommentDataPostEngine <WCFinderLiveExt>
+ (int)convertAppMsgTypeFromPostTask:(unsigned long long)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyPostLiveMessageWithPostTask:(id)arg1;
- (void)onPostFinderLiveMessage:(id)arg1 taskId:(id)arg2 attendLottery:(BOOL)arg3 statusFlag:(unsigned int)arg4 userInfo:(id)arg5;
@end

