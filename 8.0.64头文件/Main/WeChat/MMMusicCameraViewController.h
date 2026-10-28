@interface MMMusicCameraViewController : MMSightCameraViewController <MMImagePickerManagerDelegate>
{
    WCFinderCameraViewModel * _viewModel; // +0x70
    MMImagePickerManagerOptionObj * _optionObj; // +0x78
    double _curVideoDuration; // +0x80
    double _videoDurationLimit; // +0x88
}
- (id)initWithCameraMode:(unsigned long long)arg1 scene:(int)arg2 andVideoDurationLimit:(double)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (void)changeCameraCaptureSessionToRun:(BOOL)arg1;
- (void)closeAfterDone;
- (void)onMovieCompressFinished:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)optionObj;
- (void)setOptionObj:(id)arg1;
- (double)curVideoDuration;
- (void)setCurVideoDuration:(double)arg1;
- (double)videoDurationLimit;
- (void)setVideoDurationLimit:(double)arg1;
- (void).cxx_destruct;
@end
