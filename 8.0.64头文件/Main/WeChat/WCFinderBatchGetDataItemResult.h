@interface WCFinderBatchGetDataItemResult : NSObject
{
    BOOL _hasFound; // +0x8
    FinderBatchLoadObjectRequestID * _request; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
}
- (id)request;
- (void)setRequest:(id)arg1;
- (BOOL)hasFound;
- (void)setHasFound:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
