@interface WCFinderBrandStreamProfileViewModel : NSObject <WCFinderUserPageFetchExt>
{
    BOOL _isHalfScreen; // +0x8
    BOOL _hasFetchData; // +0x9
    BOOL _isRequestingData; // +0xa
    BOOL _continueFlag; // +0xb
    id <WCFinderBrandStreamProfileViewModelDelegate> _delegate; // +0x10
    NSString * _bizUsername; // +0x18
    unsigned long long _state; // +0x20
    FinderJustWatchControl * _justWatchControl; // +0x28
    NSString * _showJustWatchTid; // +0x30
    NSString * _showPostTimeFeedTid; // +0x38
    long long _justWatchBannerStatus; // +0x40
    long long _justWatchFeedIndex; // +0x48
    WCFinderCGIProfile * _cgiProfile; // +0x50
    WCFinderCoverLoadCostTime * _coverCost; // +0x58
    NSDictionary * _jumpInfoDict; // +0x60
    NSMutableArray * _dataArray; // +0x68
    NSMutableSet * _containedTidSet; // +0x70
    unsigned long long _pullType; // +0x78
    NSData * _lastBuffer; // +0x80
    FinderBizInfo_BizInfo * _bizInfo; // +0x88
    NSMutableArray * _pendingFetchJustWatchFeedBlocks; // +0x90
    NSString * _pendingCheckJustWatchTid; // +0x98
}
- (id)initWithBizUsername:(id)arg1 brandFinderJumpInfo:(id)arg2;
- (void)fetchLocalDataItems;
- (void)_updateShowPostTimeTid;
- (BOOL)isFromFinder;
- (int)fromFinderScene;
- (id)finderUsername;
- (id)finderContact;
- (id)fromTid;
- (id)dataList;
- (unsigned long long)numberOfItem;
- (id)contentVMAtIndexPath:(id)arg1;
- (id)contentVMForTid:(id)arg1;
- (id)indexPathForTid:(id)arg1;
- (void)requestDataFromTop;
- (void)requestNextData;
- (void)fetchJustWatchFeed:(id /* block */)arg1;
- (void)_continueFetchJustWatchFeed:(id)arg1 limit:(long long)arg2 complete:(id /* block */)arg3;
- (void)addRequestNextPageBlocks:(id /* block */)arg1;
- (void)invokeJustWatchWaitBlocks:(BOOL)arg1;
- (void)checkJustWatchAfterLoadFeeds:(BOOL)arg1;
- (id)createFinderBrandProfileViewModel:(id)arg1;
- (void)requestDataWithPullType:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (void)updateState;
- (id)tranformDataItemArray:(id)arg1;
- (void)addContainedTid:(id)arg1;
- (id)filterDataArray:(id)arg1;
- (void)onFinderUserPageFetchSuccess:(id)arg1;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (id)dataArray;
- (id)containedTidSet;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)justWatchControl;
- (void)setJustWatchControl:(id)arg1;
- (id)showJustWatchTid;
- (void)setShowJustWatchTid:(id)arg1;
- (id)showPostTimeFeedTid;
- (void)setShowPostTimeFeedTid:(id)arg1;
- (long long)justWatchBannerStatus;
- (void)setJustWatchBannerStatus:(long long)arg1;
- (long long)justWatchFeedIndex;
- (void)setJustWatchFeedIndex:(long long)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (id)cgiProfile;
- (void)setCgiProfile:(id)arg1;
- (id)coverCost;
- (void)setCoverCost:(id)arg1;
- (id)jumpInfoDict;
- (void)setJumpInfoDict:(id)arg1;
- (void)setDataArray:(id)arg1;
- (void)setContainedTidSet:(id)arg1;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (BOOL)isRequestingData;
- (void)setIsRequestingData:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (id)pendingFetchJustWatchFeedBlocks;
- (void)setPendingFetchJustWatchFeedBlocks:(id)arg1;
- (id)pendingCheckJustWatchTid;
- (void)setPendingCheckJustWatchTid:(id)arg1;
- (void).cxx_destruct;
@end
