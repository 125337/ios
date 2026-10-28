@interface WCFinderLikeListViewModel : NSObject <WCFinderDataItemExt>
{
    BOOL _continueFlag; // +0x8
    BOOL _isForbidFetchMore; // +0x9
    id <WCFinderLikeListViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _dataItems; // +0x18
    unsigned long long _refreshTime; // +0x20
    NSMutableSet * _tidContainSet; // +0x28
    NSData * _lastBuff; // +0x30
}
- (id)init;
- (id)initWithFinderDataItem:(id)arg1 lastBuffer:(id)arg2;
- (void)getLocalFinderDataItem;
- (id)transformDataItems:(id)arg1;
- (void)forbidFetchMore;
- (void)fetchMoreLikeList;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (unsigned long long)refreshTime;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)isForbidFetchMore;
- (void)setIsForbidFetchMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
