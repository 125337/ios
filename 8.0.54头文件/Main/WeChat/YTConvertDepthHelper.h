@interface YTConvertDepthHelper : NSObject
{
    int depthFrameCount; // +0x8
    float angleBufferThr; // +0xc
    long long depthIntervalTime; // +0x10
    long long currnetTime; // +0x18
    float depthOffset; // +0x20
    int selectCount; // +0x24
    DepthFrameData * depthFrameData; // +0x28
    NSMutableArray * _depthFrameDatas; // +0x30
}
+ (id)sharedInstance;
+ (void)clearInstance;
- (void)startCollectDepthImg;
- (id)stopCollectDepthImg;
- (void)setChecksums:(id)arg1;
- (id)getDepthDatas;
- (void)updateFrame:(Mat)arg1 andDepthBuffer:(id)arg2 andCaptureTime:(long long)arg3;
- (void)checkDepth:(int)arg1 withPitch:(float)arg2 withYaw:(float)arg3 withRoll:(float)arg4 withFaceRect:(CGRect)arg5 withFivePoints:(id)arg6;
- (id)makeDepthFrameData:(int)arg1 withPitch:(float)arg2 withYaw:(float)arg3 withRoll:(float)arg4 withFaceRect:(CGRect)arg5 withFivePoints:(id)arg6;
- (id)convertPixelBuffer:(__CVBuffer *)arg1 rect:(CGRect)arg2;
- (void)setNetFetchControlConfig:(int)arg1 withIntervalTime:(long long)arg2 withOffset:(float)arg3;
- (void)deinit;
- (id)depthFrameDatas;
- (void)setDepthFrameDatas:(id)arg1;
- (void).cxx_destruct;
@end

