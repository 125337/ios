@interface WCFinderNativeDramaPromotionDataProvider : NSObject
{
    int _scene; // +0x8
    int _sourceCommentScene; // +0xc
    NSMutableArray * _lruIDs; // +0x10
    NSMutableDictionary * _cache; // +0x18
    NSMutableDictionary * _cgiCache; // +0x20
    NSMutableDictionary * _succeededBlocks; // +0x28
    NSMutableDictionary * _failedBlocks; // +0x30
}
- (id)initWithScene:(int)arg1;
- (id)promotionForIdentifier:(id)arg1;
- (void)getPromotionForIdentifier:(id)arg1 nativeDramaContext:(id)arg2 nativeDramaSessionInfo:(id)arg3 succeeded:(id /* block */)arg4 failed:(id /* block */)arg5;
- (void)_enqueuedIdentifier:(id)arg1;
- (void)_enqueuedIdentifier:(id)arg1 succeeded:(id /* block */)arg2 failed:(id /* block */)arg3;
- (void)_successWithIdentifier:(id)arg1 dataItem:(id)arg2;
- (void)_failWithIdentifier:(id)arg1 errorType:(int)arg2 errorMsg:(id)arg3;
- (id)_contentVMWithDataItem:(id)arg1;
- (BOOL)isFetching;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)lruIDs;
- (void)setLruIDs:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)cgiCache;
- (void)setCgiCache:(id)arg1;
- (id)succeededBlocks;
- (void)setSucceededBlocks:(id)arg1;
- (id)failedBlocks;
- (void)setFailedBlocks:(id)arg1;
- (void).cxx_destruct;
@end
