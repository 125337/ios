@interface MMFinderLiveLikeDataMgr : MMLiveLikeDataMgr <WCFinderLiveExt>
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyLikeWithPostTask:(id)arg1;
- (void)updatelikeCount:(unsigned long long)arg1 taskId:(id)arg2;
- (void)cancelPostingTask;
- (id)finderLiveTaskForTaskId:(id)arg1;
- (void)onPostFinderLiveLike:(id)arg1 taskId:(id)arg2 postResult:(id)arg3;
- (void)onGetHighlightCheerUserWithFinderContacts:(id)arg1;
@end

