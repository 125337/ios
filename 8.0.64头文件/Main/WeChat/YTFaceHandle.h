@interface YTFaceHandle : NSObject
{
    BOOL LooseMode; // +0x8
    Mat BestImg; // +0x10
    double _timerInterval; // +0x70
    float eps; // +0x78
    BOOL FirstISOFrame; // +0x7c
    NSTimer * countTimer; // +0x80
    long long triggerTimes; // +0x88
    NSMutableArray * landmarksVec; // +0x90
    NSString * mRgbConfig; // +0x98
    NSString * mAppId; // +0xa0
    id /* block */ _onDalayCalc; // +0xa8
    id /* block */ _onFinish; // +0xb0
    BOOL isReflecting; // +0xb8
    double initLight; // +0xc0
    YTFaceReflect m_reflectHandle; // +0xc8
    YtVideoSetting * _setting; // +0x190
    NSString * _dir_path; // +0x198
    id <YTAGReflectDeviceDelegate> _device; // +0x1a0
    NSMutableArray * _BestImgPts; // +0x1a8
    id /* block */ _reflectCallback; // +0x1b0
}
+ (void)registerSDKLogger:(int)arg1 withListener:(id /* block */)arg2;
+ (id)checksum:(id)arg1 withData:(id)arg2;
- (id)initWithAppId:(id)arg1 withExtraData:(id)arg2;
- (void)setReflectEvent:(id /* block */)arg1;
- (id)getVersion;
- (void)stopCountTimer;
- (id)colorWithHex:(unsigned int)arg1;
- (void)setARGB:(unsigned int)arg1 screenLight:(double)arg2;
- (void)handleDelayFinish;
- (void)handleFinish;
- (long long)initAG:(id)arg1 device:(id)arg2 shapeView:(id)arg3 onDalayCalc:(id /* block */)arg4 onFinish:(id /* block */)arg5 outputDurationMS:(long long *)arg6;
- (void)clearAG;
- (id)AutoGenRgb:(int)arg1 mode:(id)arg2;
- (int)getAGLabelShowing;
- (void)setSafety:(int)arg1;
- (int)getSafety;
- (void *)getFullPack;
- (id)getBestImg:(Mat *)arg1;
- (double)Get_ISObackup;
- (id)getDirPath;
- (double)getTimeIntercal;
- (long long)GenDataPack;
- (float)precheckCloseEye:(id)arg1;
- (int)processImgSequence;
- (void)getFaces;
- (void)PushImgSequence:(void *)arg1 faceAlign:(id)arg2 timeStamp:(unsigned long long)arg3;
- (id)UIImageFromCVMat:(Mat)arg1;
- (id)setting;
- (void)setSetting:(id)arg1;
- (id)dir_path;
- (void)setDir_path:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)BestImgPts;
- (void)setBestImgPts:(id)arg1;
- (id /* block */)reflectCallback;
- (void)setReflectCallback:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
