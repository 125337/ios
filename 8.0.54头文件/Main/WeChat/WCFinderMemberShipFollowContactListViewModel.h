@interface WCFinderMemberShipFollowContactListViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _isFetchingData; // +0x9
    NSMutableArray * _followArray; // +0x10
    id <WCFinderMemberShipFollowContactListViewModelDelegate> _delegate; // +0x18
    NSString * _finderUsername; // +0x20
    NSData * _lastBuffer; // +0x28
    NSMutableSet * _tidContainSet; // +0x30
}
- (id)initWithFinderUsername:(id)arg1;
- (void)fetchLocalData;
- (void)fetchFirstPageData;
- (void)fetchMoreData;
- (void)requestDataWithLastBuffer:(id)arg1;
- (id)followArray;
- (void)setFollowArray:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (void).cxx_destruct;
@end

