@interface MJVideoFrameTextDetector : NSObject
{
    BOOL _textFound; // +0x8
    BOOL _isCanceled; // +0x9
    MJOCRProcessor * _ocrProcessor; // +0x10
    MJVideoFrameExtractor * _videoFrameExtractor; // +0x18
}
+ (id)getClipSegmentPHLocalIdentifier:(id)arg1;
+ (id)calcTimestampsFromTimeRange:(struct)arg1 videoFrameSampleRate:(double)arg2;
- (id)init;
- (void)dealloc;
- (void)detectTextWithClipSegment:(id)arg1 timeRange:(struct)arg2 completionHandler:(id /* block */)arg3;
- (void)detectTextWithPHLocalIdentifier:(id)arg1 timestamps:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (id)ocrProcessor;
- (id)videoFrameExtractor;
- (BOOL)textFound;
- (void)setTextFound:(BOOL)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (void).cxx_destruct;
@end

