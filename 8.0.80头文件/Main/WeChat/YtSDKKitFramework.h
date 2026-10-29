@interface YtSDKKitFramework : NSObject
{
    NSMutableArray * eventQueue; // +0x8
    NSLock * queueLock; // +0x10
    int _compareImageType; // +0x18
    int _networkTimeoutMs; // +0x1c
    UIImage * _compareImage; // +0x20
    UIView * _shapeView; // +0x28
    NSString * _modelRootPath; // +0x30
    CGRect _previewRect; // +0x38
    CGRect _detectRect; // +0x58
}
+ (id)sharedInstance;
+ (void)clearInstance;
+ (void)YTRequestWithUrl:(id)arg1 withContent:(id)arg2 withHeader:(id)arg3 withResponseBlock:(id /* block */)arg4;
- (id)getVersion;
- (int)initWithSDKSetting:(id)arg1 withPipelineWorkMode:(long long)arg2 withPipelineStateNameArray:(id)arg3 withCamera:(id)arg4 withEventHandleBlock:(id /* block */)arg5 withNetworkRequestBlock:(id /* block */)arg6;
- (int)deInit;
- (void)updateSDKSetting:(id)arg1;
- (void)reset;
- (int)updateWithFrameData:(void *)arg1 depthPixelBuffer:(id)arg2 withDataType:(unsigned long long)arg3;
- (void)doPause;
- (void)doResume;
- (void)setShapeView:(id)arg1;
- (id)getShapeView;
- (void)fireEvent:(unsigned long long)arg1 withContent:(id)arg2;
- (Mat)getCvRgb:(opaqueCMSampleBuffer *)arg1;
- (Mat)getCvBgra:(opaqueCMSampleBuffer *)arg1;
- (Mat)getCvRgbFromCGImageRef:(CGImage *)arg1;
- (id)createStateByName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)update:(Mat *)arg1 andDepthBuffer:(id)arg2;
- (id)compareImage;
- (void)setCompareImage:(id)arg1;
- (int)compareImageType;
- (void)setCompareImageType:(int)arg1;
- (id)shapeView;
- (CGRect)previewRect;
- (void)setPreviewRect:(CGRect)arg1;
- (CGRect)detectRect;
- (void)setDetectRect:(CGRect)arg1;
- (id)modelRootPath;
- (void)setModelRootPath:(id)arg1;
- (int)networkTimeoutMs;
- (void)setNetworkTimeoutMs:(int)arg1;
- (void).cxx_destruct;
@end
