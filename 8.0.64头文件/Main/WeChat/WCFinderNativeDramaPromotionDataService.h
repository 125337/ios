@interface WCFinderNativeDramaPromotionDataService : NSObject
{
    BOOL _isFetching; // +0x8
    NSMutableArray * _lruIDs; // +0x10
    NSMutableDictionary * _dataItemCache; // +0x18
    NSMutableDictionary * _cgiCache; // +0x20
    NSMutableDictionary * _succeededBlocks; // +0x28
    NSMutableDictionary * _failedBlocks; // +0x30
}
- (id)init;
- (id)getPromotionForIdentifier:(id)arg1;
- (void)getPromotionForIdentifier:(id)arg1 scene:(int)arg2 nativeDramaContext:(id)arg3 succeeded:(id /* block */)arg4 failed:(id /* block */)arg5;
- (void)_enqueuedIdentifier:(id)arg1;
- (void)_enqueuedIdentifier:(id)arg1 succeeded:(id /* block */)arg2 failed:(id /* block */)arg3;
- (void)_successWithIdentifier:(id)arg1 dataItem:(id)arg2;
- (void)_failWithIdentifier:(id)arg1 errorType:(int)arg2 errorMsg:(id)arg3;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)lruIDs;
- (void)setLruIDs:(id)arg1;
- (id)dataItemCache;
- (void)setDataItemCache:(id)arg1;
- (id)cgiCache;
- (void)setCgiCache:(id)arg1;
- (id)succeededBlocks;
- (void)setSucceededBlocks:(id)arg1;
- (id)failedBlocks;
- (void)setFailedBlocks:(id)arg1;
- (void).cxx_destruct;
@end
