@interface MMLiveStatisticsPosterViewController : MMLiveRoundButtonsPosterViewController <MMLivePosterReporting>
{
    unsigned int _liveCreationUnixEpochTime; // +0x70
    MMLiveStatistics * _stats; // +0x78
    WCFinderContact * _anchorContact; // +0x80
    NSString * _liveDescription; // +0x88
    NSString * _finderUsername; // +0x90
    unsigned long long _liveId; // +0x98
    WCFinderDataItem * _dataItem; // +0xa0
}
- (id)initWithStatistics:(id)arg1 forLiveTask:(id)arg2;
- (id)backdropColor;
- (BOOL)enableFavoriting;
- (id)reporter;
- (id)createPosterViews;
- (void)onSaveImageButtonExposed;
- (void)onShareButtonExposed;
- (void)onSaveImageButtonInvoked;
- (void)onSharedSuccessfullyToChatWithUsernames:(id)arg1;
- (void)onSharedSuccessfullyToMoments;
- (id)stats;
- (void)setStats:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (unsigned int)liveCreationUnixEpochTime;
- (void)setLiveCreationUnixEpochTime:(unsigned int)arg1;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
