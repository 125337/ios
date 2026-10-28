@interface YtLivenessViewController : YtBaseViewController <CameraVideoDeviceDelegate, YtDeviceDelegate, UIAlertViewDelegate>
{
    UIView * contentView; // +0x8
    UIView * shapeView; // +0x10
    UIImageView * backVieYTg; // +0x18
    UIImageView * backView; // +0x20
    UIImageView * faceRangeView; // +0x28
    UITextView * tipsLabel; // +0x30
    UITextView * lipReadLabel; // +0x38
    UIButton * startLeapReadBtn; // +0x40
    NSMutableParagraphStyle * paragraphStyle; // +0x48
    CameraRecordDevice * device; // +0x50
    double recordBrightness; // +0x58
    NSTimer * countDownTimer; // +0x60
    double currentCountDownProgress; // +0x68
    int maxRetryCount; // +0x70
    int retryCount; // +0x74
    BOOL isManualTrigger; // +0x78
    BOOL showLipReadUI; // +0x79
    NSTimer * showLipReadUITimer; // +0x80
    NSURLSessionDataTask * dataTask; // +0x88
    BOOL isNeedReuqestLog; // +0x90
    BOOL _isCheckedNoFace; // +0x91
    float _lux; // +0x94
    UILabel * _lux_label; // +0x98
    NSString * _mRgbConfig; // +0xa0
    long long _workMode; // +0xa8
    YtFLCircleProgressView * _circleProgressView; // +0xb0
    YtFLCircleProgressView * _timeoutProgressView; // +0xb8
}
- (id)initWithWorkMode:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)receiveStateEvent:(id)arg1;
- (void)receiveUIEvent:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)onLipReadUIChanged:(id)arg1;
- (void)startLipRead;
- (void)setTips:(id)arg1;
- (void)onCountDownTick:(id)arg1;
- (void)cameraDeviceEvent:(int)arg1 withAguments:(id)arg2;
- (id)colorWithHex:(unsigned int)arg1;
- (void)handleNetworkRequest:(id)arg1 withHeaders:(id)arg2 withRequest:(id)arg3 withResponse:(id /* block */)arg4;
- (id)getCaptureDevice;
- (id)getCaptureSession;
- (void)onReflectEventWithArgb:(unsigned int)arg1 withLight:(double)arg2;
- (void)onReflectStart:(long long)arg1;
- (id)getVoiceData;
- (id)encodeBase64:(id)arg1;
- (id)lux_label;
- (void)setLux_label:(id)arg1;
- (BOOL)isCheckedNoFace;
- (void)setIsCheckedNoFace:(BOOL)arg1;
- (id)mRgbConfig;
- (void)setMRgbConfig:(id)arg1;
- (float)lux;
- (void)setLux:(float)arg1;
- (long long)workMode;
- (void)setWorkMode:(long long)arg1;
- (id)circleProgressView;
- (void)setCircleProgressView:(id)arg1;
- (id)timeoutProgressView;
- (void)setTimeoutProgressView:(id)arg1;
- (void).cxx_destruct;
@end
