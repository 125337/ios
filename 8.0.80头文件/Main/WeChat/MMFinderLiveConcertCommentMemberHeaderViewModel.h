@interface MMFinderLiveConcertCommentMemberHeaderViewModel : NSObject <MMFinderLiveCommentNotifyExt>
{
    MMFinderLiveTaskId * _finderTaskId; // +0x8
    NSMutableOrderedSet * _headerUrlSet; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onNewNotifyCommentUpdate:(id)arg1;
- (id)headerUrlSet;
- (id)filterJoinLiveCommentItems:(id)arg1;
- (id)getNextHeadImageUrl;
- (unsigned long long)getHeadImgCount;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (void)setHeaderUrlSet:(id)arg1;
- (void).cxx_destruct;
@end
