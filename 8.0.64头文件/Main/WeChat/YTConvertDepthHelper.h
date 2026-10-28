@interface YTConvertDepthHelper : NSObject
{
    int depthFrameCount; // +0x8
    float angleBufferThr; // +0xc
    long long depthIntervalTime; // +0x10
    long long lastCompareTime; // +0x18
    float depthOffset; // +0x20
    DepthFrameData * depthFrameData; // +0x28
    float ep_thr; // +0x30
    float np_thr; // +0x34
    float mp_thr; // +0x38
    CGRect previousFaceRect; // +0x40
    char * cvMatGray; // +0x60
    float min_face_thr; // +0x68
    float max_face_thr; // +0x6c
    NSMutableArray * _depthFrameDatas; // +0x70
}
+ (id)sharedInstance;
+ (void)clearInstance;
- (void)setNetFetchControlConfig:(int)arg1 withIntervalTime:(long long)arg2 withOffset:(float)arg3 withEP:(float)arg4 withNP:(float)arg5 withMP:(float)arg6 maxFaceThr:(float)arg7 minFaceThr:(float)arg8;
- (void)startCollectDepthImg;
- (id)stopCollectDepthImg;
- (void)setChecksums:(id)arg1;
- (id)getDepthDatas;
- (void)updateFrame:(Mat)arg1 andDepthBuffer:(id)arg2 andCaptureTime:(long long)arg3;
- (void)checkDepth:(float)arg1 advise:(int)arg2 shelterJudge:(int)arg3 faceAngleScore:(float)arg4 faceRect:(CGRect)arg5 fivePoints:(id)arg6 eyeScore:(float)arg7 blurScore:(float)arg8;
- (id)makeDepthFrameData:(float)arg1 withFaceRect:(CGRect)arg2 withFivePoints:(id)arg3 depQua:(id)arg4;
- (Mat)depthCIImageToMat:(__CVBuffer *)arg1 withFaceRect:(Rect_<int>)arg2;
- (id)convertPixelBuffer:(__CVBuffer *)arg1 rect:(CGRect)arg2 fivePoints:(id)arg3;
- (void)deinit;
- (CGRect)createDepthRectFromFicePoints:(id)arg1 width:(double)arg2 height:(double)arg3;
- (CGRect)cropDepthImageRectFromFaceRect:(CGRect)arg1 width:(double)arg2 height:(double)arg3;
- (id)cropImage:(id)arg1 toRect:(CGRect)arg2;
- (id)resizeImage:(id)arg1;
- (id)coverInRect:(CGRect)arg1 withFivePoints:(id)arg2;
- (id)Judge:(id)arg1 withFaceRect:(Rect_<int>)arg2 faceAngleScore:(float)arg3 openEyeScore:(float)arg4 closeMouthScore:(float)arg5 blurScore:(float)arg6;
- (float)CalcProportion:(Mat)arg1 roi:(Rect_<int>)arg2;
- (BOOL)needReplaceCacheDepth:(id)arg1 newDepthQuality:(id)arg2;
- (BOOL)detectScreenShaking:(CGRect)arg1 lastRect:(CGRect)arg2;
- (CGRect)getIntersectionRect:(CGRect)arg1 withLastRect:(CGRect)arg2;
- (float)judgeFaceScore:(float)arg1 imageWidth:(float)arg2;
- (float)judgeCloseMouthScore:(float)arg1;
- (float)judgeOpenEyesScore:(float)arg1;
- (float)judgeShakeScore:(float)arg1;
- (float)judgeAngleScore:(float)arg1;
- (float)judgeFaceQualityScore:(float)arg1;
- (float)judgeBlurScore:(float)arg1;
- (id)depthFrameDatas;
- (void)setDepthFrameDatas:(id)arg1;
- (void).cxx_destruct;
@end
