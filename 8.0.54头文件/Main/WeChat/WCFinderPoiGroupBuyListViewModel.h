@interface WCFinderPoiGroupBuyListViewModel : NSObject
{
    BOOL _hasFetchData; // +0x8
    BOOL _isRequesting; // +0x9
    BOOL _continueFlag; // +0xa
    id <WCFinderPoiGroupBuyListViewModelDelegate> _delegate; // +0x10
    WCFinderPoiGroupBuyListOpenParams * _openParams; // +0x18
    NSString * _title; // +0x20
    NSMutableArray * _groupBuyArray; // +0x28
    NSString * _lastBuffer; // +0x30
}
- (id)initWithOpenParams:(id)arg1;
- (void)requestDataFromTop;
- (void)requestNextData;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (BOOL)hasMoreData;
- (id)groupBuyArray;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)openParams;
- (void)setOpenParams:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setGroupBuyArray:(id)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

