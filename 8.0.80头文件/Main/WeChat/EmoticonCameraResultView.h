@interface EmoticonCameraResultView : UIView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EditImageAnimatedOperationDelegate, EditImageAnimatedDelegate, EmoticonEmptyEditViewGestureDelegate, EmoticonEditTextInputDelegate, EmoticonTextAntiSpamCgiDelegate, EmoticonVideoInputDelegate>
{
    UIView * m_previewBGView; // +0x8
    UIImageView * m_imageView; // +0x10
    UIView * m_editToolsView; // +0x18
    UIButton * m_removeBgButton; // +0x20
    UIButton * m_fastPlayButton; // +0x28
    UIButton * m_emoticonButton; // +0x30
    EmoticonBoardView * m_emoticonBoardView; // +0x38
    EmoticonEmptyEditView * m_editImageView; // +0x40
    EditImageDeleteBarView * m_editDeleteBar; // +0x48
    EditImageAnimatedTextTool * m_editImageTextView; // +0x50
    EmoticonEditTextInputView * m_tempTextInputView; // +0x58
    CGRect m_lastDuoLayoutBounds; // +0x60
    UIEdgeInsets m_lastDuoLayoutSafeAreaInsets; // +0x80
    BOOL m_hasDuoLayoutSnapshot; // +0xa0
    BOOL m_isUpdatingDuoLayout; // +0xa1
    BOOL _waitForCaption; // +0xa2
    BOOL _isGPUFrozen; // +0xa3
    BOOL _isInterruptByGPUFrozen; // +0xa4
    BOOL _segmentEnable; // +0xa5
    BOOL _isFrontCamera; // +0xa6
    BOOL _enableNewYearPendant; // +0xa7
    BOOL _isCompositing; // +0xa8
    id <EmoticonCameraResultViewDelegate> _delegate; // +0xb0
    NSString * _caption; // +0xb8
    EditImageColor * _captionColor; // +0xc0
    NSString * _followMd5; // +0xc8
    NSString * _followLensId; // +0xd0
    EmoticonCameraReportObject * _reportObject; // +0xd8
    EmoticonLensInfo * _selectedEmoticonLens; // +0xe0
    EmoticonLensPackage * _lensPackage; // +0xe8
    UIView * _bottomView; // +0xf0
    UIView * _fillView; // +0xf8
    EmoticonTabBarButton * _cancelButton; // +0x100
    EmoticonTabBarButton * _confirmButton; // +0x108
    EmoticonCameraResultSetting * _resultSetting; // +0x110
    XEffectEffectManager * _effectManager; // +0x118
    EmoticonVideoInput * _videoInput; // +0x120
    NSObject<OS_dispatch_queue> * _processQueue; // +0x128
    EmoticonCameraPreviewView * _previewView; // +0x130
    MMUIImageView * _waitingImageView; // +0x138
    MMTimer * _timer; // +0x140
    EmoticonVideoConverter * _videoConverter; // +0x148
    struct _currentFrameTime; // +0x150
}
+ (double)EmoticonCameraPreviewSideLength;
+ (CGRect)previewFrameInContainerBounds:(CGRect)arg1 safeAreaInsets:(UIEdgeInsets)arg2 bottomReservedHeight:(double)arg3;
- (id)videoPath;
- (id)initWithFrame:(CGRect)arg1;
- (UIEdgeInsets)duoResultSafeAreaInsets;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)safeAreaInsetsDidChange;
- (void)updateDuoLayoutIfNeeded;
- (void)updateDuoLayoutFromBounds:(CGRect)arg1;
- (void)layoutDuoBottomButtons;
- (void)setCaption:(id)arg1;
- (void)setFollowMd5:(id)arg1;
- (void)setFollowMd5:(id)arg1 transform:(CGAffineTransform)arg2 anchorPoint:(CGPoint)arg3 andCenter:(CGPoint)arg4;
- (id)privateCaptionColor;
- (void)setCaptionColor:(id)arg1;
- (void)showResultWithVideoPath:(id)arg1 inputQueue:(id)arg2;
- (void)resumeCompose;
- (void)checkWaitForCaptionTimeOut;
- (void)continueConfigPlayerView;
- (void)configEffectManager;
- (void)setupBgView;
- (void)setupPreviewBGView;
- (void)setupFillView;
- (void)setupEditTools;
- (id)editToolsButtonWithTitle:(id)arg1 titileHL:(id)arg2 image:(id)arg3 imageSelected:(id)arg4 imageHL:(id)arg5 imageDisabled:(id)arg6;
- (void)setupBottomView;
- (void)playButtonAnimation;
- (void)setEmoticonBoardHidden:(BOOL)arg1;
- (void)setupEditImageView;
- (void)setupEditImageTextView;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoading;
- (id)trimText:(id)arg1;
- (void)checkText:(id)arg1;
- (void)setEnableNewYearPendant:(BOOL)arg1;
- (void)setIsFrontCamera:(BOOL)arg1;
- (void)updateVideoFrames;
- (void)didClickDone;
- (void)didRealClickDone;
- (id)videoConverter;
- (void)didClickCancel;
- (void)didClickRemoveBgButton:(id)arg1;
- (void)changeRemoveBgState;
- (void)didClickFastPlayButton:(id)arg1;
- (void)didClickEmoticonButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)bottomButtonImageFromImage:(id)arg1 backgroundColor:(id)arg2;
- (id)privateBottomButtonImageFromImage:(id)arg1 backgroundColor:(id)arg2;
- (void)showWaitingImageViewWithImage:(id)arg1;
- (id)addEmoticonToolWithMd5:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onSendButtonClicked;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidDeleteWidgetTool:(id)arg1;
- (CGRect)getAssetPreviewFrame;
- (void)adjustEditImageAnimatedWidgetTool:(id)arg1;
- (CGRect)deleteArea;
- (BOOL)startEditingTextWithAnimatedWidgetTool:(id)arg1;
- (void)onEmoticonEditTextInputFinished:(id)arg1;
- (void)onEmoticonEditTextInputCancel:(id)arg1;
- (void)onEmoticonEditTextInputDidChange:(id)arg1 isFirstTyping:(BOOL)arg2;
- (void)onEmoticonTextAntiSpamCgiFinished:(id)arg1;
- (void)onEmoticonTextAntiSpamCgiFailed:(id)arg1;
- (void)videoInput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)caption;
- (id)captionColor;
- (BOOL)waitForCaption;
- (void)setWaitForCaption:(BOOL)arg1;
- (id)followMd5;
- (id)followLensId;
- (void)setFollowLensId:(id)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (BOOL)isGPUFrozen;
- (void)setIsGPUFrozen:(BOOL)arg1;
- (BOOL)isInterruptByGPUFrozen;
- (void)setIsInterruptByGPUFrozen:(BOOL)arg1;
- (id)selectedEmoticonLens;
- (void)setSelectedEmoticonLens:(id)arg1;
- (id)lensPackage;
- (void)setLensPackage:(id)arg1;
- (BOOL)segmentEnable;
- (void)setSegmentEnable:(BOOL)arg1;
- (BOOL)isFrontCamera;
- (BOOL)enableNewYearPendant;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)fillView;
- (void)setFillView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)resultSetting;
- (void)setResultSetting:(id)arg1;
- (BOOL)isCompositing;
- (void)setIsCompositing:(BOOL)arg1;
- (id)effectManager;
- (void)setEffectManager:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)waitingImageView;
- (void)setWaitingImageView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (struct)currentFrameTime;
- (void)setCurrentFrameTime:(struct)arg1;
- (void)setVideoConverter:(id)arg1;
- (void).cxx_destruct;
@end
