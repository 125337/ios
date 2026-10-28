@interface WCFinderTLRegardfulAuthorCellViewModel : NSObject <WCFinderContactExt, WCFinderLiveExt>
{
    BOOL _hadRead; // +0x8
    BOOL _hadShowLive; // +0x9
    BOOL _needDelete; // +0xa
    WCFinderContact * _contact; // +0x10
    MMFinderLiveContentVM * _liveContentVM; // +0x18
    NSString * _lastFeedID; // +0x20
    NSString * _lastNonceID; // +0x28
    unsigned long long _lastestUnreadTime; // +0x30
    unsigned long long _localLastestUpdateTime; // +0x38
    NSString * _lastReadLiveFeedID; // +0x40
}
+ (id)regardfulAuthorCellViewModelWithOfterReadItem:(id)arg1;
- (void)setContact:(id)arg1;
- (BOOL)unreadNewFeed;
- (BOOL)showRedDotView;
- (BOOL)showShowLiveRedDotView;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (void)updateContactUnreadTime;
- (void)updateContactLastestLiveID;
- (void)onFinderContactLivingStatusHasChange:(id)arg1;
- (void)updateDeleteStatus;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (id)contact;
- (id)liveContentVM;
- (void)setLiveContentVM:(id)arg1;
- (BOOL)hadRead;
- (void)setHadRead:(BOOL)arg1;
- (BOOL)hadShowLive;
- (void)setHadShowLive:(BOOL)arg1;
- (BOOL)needDelete;
- (void)setNeedDelete:(BOOL)arg1;
- (id)lastFeedID;
- (void)setLastFeedID:(id)arg1;
- (id)lastNonceID;
- (void)setLastNonceID:(id)arg1;
- (unsigned long long)lastestUnreadTime;
- (void)setLastestUnreadTime:(unsigned long long)arg1;
- (unsigned long long)localLastestUpdateTime;
- (void)setLocalLastestUpdateTime:(unsigned long long)arg1;
- (id)lastReadLiveFeedID;
- (void)setLastReadLiveFeedID:(id)arg1;
- (void).cxx_destruct;
@end
