@interface MJVideoFrameExtractor : NSObject
{
    BOOL _isCanceled; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)extractVideoFrameWithPHLocalIdentifier:(id)arg1 timestamps:(id)arg2 videoFrameHandler:(id /* block */)arg3;
- (void)extractVideoFrameWithAVAsset:(id)arg1 phLocalIdentifier:(id)arg2 timestamps:(id)arg3 videoFrameHandler:(id /* block */)arg4;
- (void)cancel;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
@end
