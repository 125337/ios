@interface MMFinderLiveImageOcrOp : NSObject
{
    BOOL _isInImageOCR; // +0x8
    NSArray * _images; // +0x10
    NSMutableArray * _ocrResults; // +0x18
    double _timeout; // +0x20
    id /* block */ _handler; // +0x28
}
+ (id)imageToFeatureBuf:(id)arg1 filePath:(id)arg2;
- (id)initWithImage:(id)arg1 timeout:(double)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (void)callbackOcrResult;
- (void)releaseOcrXNetCache;
- (BOOL)isInImageOCR;
- (void)setIsInImageOCR:(BOOL)arg1;
- (id)images;
- (void)setImages:(id)arg1;
- (id)ocrResults;
- (void)setOcrResults:(id)arg1;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
