@interface CameraScanMixDetector : NSObject <PBMessageObserverDelegate>
{
    BOOL _enableFaceDetect; // +0x8
    id <CameraScanMixDetectorProtocol> _delegate; // +0x10
    NSMutableDictionary * _goodsCache; // +0x18
    NSRecursiveLock * _cacheLock; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)uploadGoodOrText:(id)arg1;
- (void)cancelGoodOrText:(id)arg1;
- (void)callDelegate:(id)arg1 errCode:(unsigned int)arg2;
- (void)uploadGoodOrTextRemote:(id)arg1;
- (CGRect)normalizeRect:(id)arg1;
- (void)handleImageUploadResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)hasFace:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)goodsCache;
- (void)setGoodsCache:(id)arg1;
- (id)cacheLock;
- (void)setCacheLock:(id)arg1;
- (BOOL)enableFaceDetect;
- (void)setEnableFaceDetect:(BOOL)arg1;
- (void).cxx_destruct;
@end
