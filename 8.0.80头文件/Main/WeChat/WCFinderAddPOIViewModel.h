@interface WCFinderAddPOIViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    id <WCFinderAddPOIViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _poiInfoList; // +0x18
    NSString * _finderUsername; // +0x20
    NSData * _lastBuffer; // +0x28
}
- (id)initWithFinderUsername:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)fetchDataWithLastBuffer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)poiInfoList;
- (void)setPoiInfoList:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
