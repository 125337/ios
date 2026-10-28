@interface EmoticonCameraViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MMSightRecordHelperViewDelegate, EmoticonCameraResultViewDelegate, EditImageAnimatedOperationDelegate, EditImageAnimatedDelegate, EmoticonEmptyEditViewGestureDelegate, IStreamVoiceInputExt, MonoServiceLogicExt, ISysCallCheckExt, EmoticonLensDynamicToolViewDelegate, EmoticonLensMoreViewDelegate, EmoticonLensMgrExt, EmoticonLensDesignerViewDelegate>
{
    EmoticonCameraToolBar * m_toolBar; // +0x70
    MMUIButton * m_hideBarBtn; // +0x78
    MMUIButton * m_cameraSwitchBtn; // +0x80
    MMUIButton * m_photoBtn; // +0x88
    UIImageView * m_audioRecordView; // +0x90
    MMSightRecordHelperView * m_recordHelperView; // +0x98
    MMCircularProgressView * m_circleProgress; // +0xa0
    MMSightRecordView * m_recordButtonView; // +0xa8
    EmoticonCameraResultView * m_resultView; // +0xb0
    BOOL m_needFocusCenter; // +0xb8
    double m_lastScaleFactor; // +0xc0
    StreamVoiceInputLogic * m_inputLogic; // +0xc8
    unsigned long long m_currentInputId; // +0xd0
    NSString * m_lastVoiceInputResult; // +0xd8
    UIView * m_maskView; // +0xe0
    UIView * m_frontView; // +0xe8
    EmoticonEmptyEditView * m_editImageView; // +0xf0
    EditImageAnimatedEmoticonTool * m_editImageEmoticonView; // +0xf8
    EditImageAnimatedTextTool * m_editImageTextView; // +0x100
    EmoticonLensDynamicToolView * m_emoticonLensDynamicToolBar; // +0x108
    EmoticonLensInfo * m_currentSelectedEmoticonLens; // +0x110
    EditImageColor * m_defaultCaptionColor; // +0x118
    BOOL _hasSetEffect; // +0x120
    BOOL _isGPUFrozen; // +0x121
    BOOL _enableNewYearPendant; // +0x122
    id <EmoticonCameraDelegate> _delegate; // +0x128
    NSString * _followMd5; // +0x130
    NSString * _followCaption; // +0x138
    NSString * _followCaptionColor; // +0x140
    NSString * _followLensId; // +0x148
    unsigned long long _scene; // +0x150
    NSString * _username; // +0x158
    EmoticonCameraReportObject * _reportObject; // +0x160
    XEffectEffectManager * _effectManager; // +0x168
    EmoticonCameraPreviewView * _previewView; // +0x170
    EmoticonLensDesignerView * _designerView; // +0x178
    EmoticonLensDynamicTipView * _lensActionTipView; // +0x180
    NSObject<OS_dispatch_queue> * _captureQueue; // +0x188
    AVCaptureDevice * _cameraDevice; // +0x190
    AVCaptureSession * _captureSession; // +0x198
    AVCaptureVideoDataOutput * _videoDataOutput; // +0x1a0
    NSString * _caption; // +0x1a8
    EditImageColor * _captionColor; // +0x1b0
    EmoticonLensPackage * _currLensPackage; // +0x1b8
    EmoticonLensInfo * _followLensInfo; // +0x1c0
}
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)configGesture;
- (void)resetEffectManager;
- (void)configToolBar;
- (void)configEmoticonLensDynamicTool;
- (void)updateLensSelection;
- (void)configLensFollow;
- (void)configPreviewView;
- (void)configMaskView;
- (void)updateCameraAccessibility;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (float)sightCaptureMaxDuration;
- (void)showTips:(id)arg1;
- (void)close;
- (void)cameraButtonPressed;
- (void)btnRelease;
- (void)openKitChen:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)focusAtPoint:(CGPoint)arg1;
- (void)focusCenter;
- (void)interruptRecord;
- (void)onEndInterruption;
- (void)handleFocusTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)didEnterBackground;
- (void)didBecomeActive;
- (void)setupCameraDevice:(long long)arg1;
- (id)privateCaption;
- (void)setCaption:(id)arg1;
- (id)privateCaptionColor;
- (void)setCaptionColor:(id)arg1;
- (void)refreshEditImageTextView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)onRecordHelperViewTouchBegan:(id)arg1;
- (void)onRecordHelperViewTouchMoved:(id)arg1 point:(CGPoint)arg2;
- (void)onRecordHelperViewTouchEnded:(id)arg1 shouldRecord:(BOOL)arg2;
- (void)onRecordHelperViewStartRecord:(id)arg1;
- (void)stopLoading;
- (void)onResultViewClickBack;
- (void)onResultViewClickDoneWithUploadInfo:(id)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)adjustEditImageAnimatedWidgetTool:(id)arg1;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (CGRect)getAssetPreviewFrame;
- (void)didTapEmoticonEmptyEditView:(id)arg1;
- (void)didPinchEmoticonEmptyEditView:(id)arg1;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceDidEnd;
- (void)BeginInterruption;
- (void)EndInterruption;
- (void)onEmoticonLensSelected:(id)arg1;
- (void)onEmoticonLensShowAll;
- (void)doSelectedEmoticonLens:(id)arg1;
- (void)onLensDidExposure:(id)arg1;
- (void)moreLens:(id)arg1 didSelectLens:(id)arg2 isRecentUsed:(BOOL)arg3;
- (void)moreLensViewWillClose:(id)arg1;
- (void)moreLensViewDidShow:(id)arg1;
- (void)moreLensViewDidExposure:(id)arg1;
- (void)onEmoticonLensListRequestSuccess:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)onEmoticonLensPkgDownloadSuccess:(id)arg1;
- (void)onEmoticonLensRequestSuccess:(id)arg1 forLensId:(id)arg2;
- (void)onEmoticonLensInvalid:(id)arg1 errType:(long long)arg2;
- (void)onDesignerButtonSelected:(id)arg1;
- (id)lensActionTipView;
- (id)recordVideoPath;
- (id)getRecommendPassData;
- (void)reportLensExposureWithLensList:(id)arg1 isFromRecommend:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)followMd5;
- (void)setFollowMd5:(id)arg1;
- (id)followCaption;
- (void)setFollowCaption:(id)arg1;
- (id)followCaptionColor;
- (void)setFollowCaptionColor:(id)arg1;
- (id)followLensId;
- (void)setFollowLensId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (BOOL)hasSetEffect;
- (void)setHasSetEffect:(BOOL)arg1;
- (id)effectManager;
- (void)setEffectManager:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)designerView;
- (void)setDesignerView:(id)arg1;
- (void)setLensActionTipView:(id)arg1;
- (id)captureQueue;
- (void)setCaptureQueue:(id)arg1;
- (id)cameraDevice;
- (void)setCameraDevice:(id)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)videoDataOutput;
- (void)setVideoDataOutput:(id)arg1;
- (id)caption;
- (id)captionColor;
- (BOOL)isGPUFrozen;
- (void)setIsGPUFrozen:(BOOL)arg1;
- (BOOL)enableNewYearPendant;
- (void)setEnableNewYearPendant:(BOOL)arg1;
- (id)currLensPackage;
- (void)setCurrLensPackage:(id)arg1;
- (id)followLensInfo;
- (void)setFollowLensInfo:(id)arg1;
- (void).cxx_destruct;
@end
