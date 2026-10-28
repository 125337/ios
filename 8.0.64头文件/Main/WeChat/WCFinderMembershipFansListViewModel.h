@interface WCFinderMembershipFansListViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _isFetchingData; // +0x9
    NSMutableArray * _fansArray; // +0x10
    id <WCFinderMembershipFansListViewModelDelegate> _delegate; // +0x18
    NSString * _finderUsername; // +0x20
    NSData * _lastBuffer; // +0x28
    NSMutableSet * _tidContainSet; // +0x30
}
- (id)initWithFinderUsername:(id)arg1;
- (void)fetchLocalData;
- (void)fetchMoreData;
- (id)fansArray;
- (void)setFansArray:(id)arg1;
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
