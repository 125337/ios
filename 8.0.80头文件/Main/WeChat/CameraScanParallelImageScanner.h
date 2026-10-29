@interface CameraScanParallelImageScanner : NSObject
{
    BOOL _parallelImageScanRunning; // +0x8
    BOOL _parallelImageScanGotResult; // +0x9
    BOOL _hasCallbackResult; // +0xa
    int _scanCodeType; // +0xc
    id <CameraScanParallelImageScannerDelegate> _delegate; // +0x10
    unsigned long long _parallelImageScanLastTriggerTime; // +0x18
    NSObject<OS_dispatch_queue> * _parallelImageScanQueue; // +0x20
    long long _parallelImageScanTimeout; // +0x28
    long long _parallelImageScanInterval; // +0x30
}
- (id)initWithScanCodeType:(int)arg1;
- (void)resetStatus;
- (void)cancel;
- (void)tryTriggerWithGrayData:(char *)arg1 width:(int)arg2 height:(int)arg3 imageBuffer:(__CVBuffer *)arg4 cropRect:(CGRect)arg5 bufferWidth:(int)arg6 bufferHeight:(int)arg7 totalCostTime:(unsigned int)arg8 view2SampleBufferScaleRatio:(float)arg9 viewCropRect:(CGRect)arg10;
- (void)doParallelImageScanWithGrayData:(id)arg1 width:(int)arg2 height:(int)arg3 originalImage:(id)arg4 cropRect:(CGRect)arg5 bufferWidth:(int)arg6 bufferHeight:(int)arg7 view2SampleBufferScaleRatio:(float)arg8 viewCropRect:(CGRect)arg9;
- (id)executeScanWithGrayData:(id)arg1 width:(int)arg2 height:(int)arg3 originalImage:(id)arg4 cropRect:(CGRect)arg5 bufferWidth:(int)arg6 bufferHeight:(int)arg7 view2SampleBufferScaleRatio:(float)arg8 viewCropRect:(CGRect)arg9;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)parallelImageScanRunning;
- (void)setParallelImageScanRunning:(BOOL)arg1;
- (BOOL)parallelImageScanGotResult;
- (void)setParallelImageScanGotResult:(BOOL)arg1;
- (unsigned long long)parallelImageScanLastTriggerTime;
- (void)setParallelImageScanLastTriggerTime:(unsigned long long)arg1;
- (id)parallelImageScanQueue;
- (void)setParallelImageScanQueue:(id)arg1;
- (BOOL)hasCallbackResult;
- (void)setHasCallbackResult:(BOOL)arg1;
- (long long)parallelImageScanTimeout;
- (void)setParallelImageScanTimeout:(long long)arg1;
- (long long)parallelImageScanInterval;
- (void)setParallelImageScanInterval:(long long)arg1;
- (int)scanCodeType;
- (void)setScanCodeType:(int)arg1;
- (void).cxx_destruct;
@end
