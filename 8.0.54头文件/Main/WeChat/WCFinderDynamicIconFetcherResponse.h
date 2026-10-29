@interface WCFinderDynamicIconFetcherResponse : NSObject
{
    BOOL _filled; // +0x8
    UIImage * _cacheImage; // +0x10
    NSMutableArray * _updateBlocks; // +0x18
}
+ (id)responseWithImage:(id)arg1;
- (void)cancel;
- (id)updateBlocks;
- (void)notify:(id)arg1;
- (void)addUpdateBlock:(id /* block */)arg1;
- (id)cacheImage;
- (void)setCacheImage:(id)arg1;
- (BOOL)filled;
- (void)setFilled:(BOOL)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (void).cxx_destruct;
@end

