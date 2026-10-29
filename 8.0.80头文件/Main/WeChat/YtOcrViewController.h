@interface YtOcrViewController : YtBaseViewController <CameraVideoDeviceDelegate, UIAlertViewDelegate>
{
    UIView * cameraView; // +0x8
    UILabel * promptLabel; // +0x10
    UIButton * flashButton; // +0x18
    UIButton * takePhotoButton; // +0x20
    UIImageView * promptImageView; // +0x28
    UIImage * failedImage; // +0x30
    UIImage * succeedImage; // +0x38
    UIImage * notdetectImage; // +0x40
    CameraRecordDevice * device; // +0x48
    int currentCameraFlashMode; // +0x50
    NSTimer * countDownTimer; // +0x58
    double currentCountDownProgress; // +0x60
    NSURLSessionDataTask * dataTask; // +0x68
    BOOL needTakePhoto; // +0x70
    BOOL _isManualMode; // +0x71
    YtFLCircleProgressView * timeoutProgressView; // +0x78
}
- (id)init;
- (void)viewDidLoad;
- (void)cameraDeviceEvent:(int)arg1 withAguments:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)handleCameraChangeEvent:(id)arg1;
- (void)handleFlashChangeEvent:(id)arg1;
- (void)handleTakePhotoEvent:(id)arg1;
- (void)receiveStateEvent:(id)arg1;
- (void)receiveUIEvent:(id)arg1;
- (void)handleNetworkRequest:(id)arg1 withRequest:(id)arg2 withHeaders:(id)arg3 withResponse:(id /* block */)arg4;
- (void)setIsManualMode:(BOOL)arg1;
- (void)onCountDownTick:(id)arg1;
- (id)timeoutProgressView;
- (void)setTimeoutProgressView:(id)arg1;
- (BOOL)needTakePhoto;
- (void)setNeedTakePhoto:(BOOL)arg1;
- (BOOL)isManualMode;
- (void).cxx_destruct;
@end
