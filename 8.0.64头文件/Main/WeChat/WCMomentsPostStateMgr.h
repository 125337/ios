@interface WCMomentsPostStateMgr : NSObject
{
    NSMutableSet * _postTipsViewSet; // +0x8
}
- (id)postTipsViewSet;
- (long long)postTipsViewTypeWithDataItem:(id)arg1;
- (void)updatePostTipsViewStateWithPostedItem:(id)arg1 localItem:(id)arg2;
- (void)addToPostTipsViewSet:(id)arg1;
- (void)removeFromPostTipsViewSet:(id)arg1;
- (void)setPostTipsViewSet:(id)arg1;
- (void).cxx_destruct;
@end
