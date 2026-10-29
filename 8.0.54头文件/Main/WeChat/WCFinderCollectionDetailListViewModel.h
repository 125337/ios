@interface WCFinderCollectionDetailListViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _dataFetching; // +0x9
    unsigned int _businessType; // +0xc
    NSString * _finderUsername; // +0x10
    id <WCFinderCollectionDetailListViewModelDelegate> _delegate; // +0x18
    NSMutableArray * _collectionInfoList; // +0x20
    NSMutableSet * _collectionIDSet; // +0x28
    NSData * _lastBuffer; // +0x30
    WCFinderGetCollectionListCGI * _cgi; // +0x38
}
- (id)initWithUsername:(id)arg1 lastBuffer:(id)arg2;
- (id)initWithUsername:(id)arg1 lastBuffer:(id)arg2 businessType:(unsigned int)arg3;
- (void)_setupState;
- (id)collectionInfoItems;
- (void)fetchData;
- (void)appendCollectionInfos:(id)arg1;
- (id)idWithCollection:(id)arg1;
- (void)startLoading;
- (void)endLoading;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionInfoList;
- (void)setCollectionInfoList:(id)arg1;
- (id)collectionIDSet;
- (void)setCollectionIDSet:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)dataFetching;
- (void)setDataFetching:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

