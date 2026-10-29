@interface WCFinderMemberShipPreviewListViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _isFetchingData; // +0x9
    id <WCFinderMemberShipPreviewListViewModelDelegate> _delegate; // +0x10
    unsigned long long _state; // +0x18
    NSMutableArray * _contentVMS; // +0x20
    unsigned long long _feedPageType; // +0x28
    NSString * _finderUsername; // +0x30
    NSData * _lastBuffer; // +0x38
    NSMutableSet * _tidContainSet; // +0x40
    unsigned long long _collectionTopicId; // +0x48
}
- (id)initWithFinderUsername:(id)arg1 feedPageType:(unsigned long long)arg2 lastBuffer:(id)arg3 collectionTopicId:(unsigned long long)arg4;
- (void)updateState;
- (void)getLocalFirstPageData;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)requestCollectionInfoDataWithPullType:(unsigned long long)arg1 lastBuff:(id)arg2 isFirstPage:(BOOL)arg3;
- (void)requestFeedDataWithPullType:(unsigned long long)arg1 lastBuff:(id)arg2 isFirstPage:(BOOL)arg3;
- (void)onGetDataArray:(id)arg1 pullFromTop:(BOOL)arg2 lastBuff:(id)arg3 continueFlag:(BOOL)arg4;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewControllerPageId;
- (id)feedViewControllerViewId;
- (id)contentVMS;
- (id)tidContainSet;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void)setContentVMS:(id)arg1;
- (unsigned long long)feedPageType;
- (void)setFeedPageType:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (void)setTidContainSet:(id)arg1;
- (unsigned long long)collectionTopicId;
- (void)setCollectionTopicId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
