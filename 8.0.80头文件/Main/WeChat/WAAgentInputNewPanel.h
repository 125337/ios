@interface WAAgentInputNewPanel : UIView <UIGestureRecognizerDelegate, UITextViewDelegate, MMImagePickerManagerDelegate, WAAgentAttachmentViewDelegate, WCFileBrowseDelegate, UIDocumentInteractionControllerDelegate, FavFullScreenImageViewControllerDelegate>
{
    BOOL _transparentRecordingBg; // +0x8
    BOOL _iconHidden; // +0x9
    BOOL _compactMode; // +0xa
    BOOL _minimalPadding; // +0xb
    BOOL _pinsIconToTrailing; // +0xc
    BOOL _voiceInputBtnChromeHidden; // +0xd
    BOOL _darkModeEnabled; // +0xe
    BOOL _showStopOutputBtn; // +0xf
    BOOL _isAttachmentPanelShowing; // +0x10
    BOOL _attachmentHostedExternally; // +0x11
    BOOL _isImagePreviewVisible; // +0x12
    BOOL _keyboardVisible; // +0x13
    BOOL _shouldRestoreKeyboard; // +0x14
    BOOL _isOwningKeyboard; // +0x15
    BOOL _needCancelSendVoice; // +0x16
    id <WAAgentInputNewPanelDelegate> _delegate; // +0x18
    double _overrideBottomSafeAreaPadding; // +0x20
    UIView * _recordingOverlayHost; // +0x28
    double _compactModeHeight; // +0x30
    double _voiceInputBtnHorizontalMargin; // +0x38
    UIView * _voiceInputBtn; // +0x40
    WAAgentAttachmentView * _attachmentView; // +0x48
    UIView * _recordingOverlayView; // +0x50
    UIView * _recordingWhiteBgView; // +0x58
    CAShapeLayer * _recordingCurveLayer; // +0x60
    NSString * _appID; // +0x68
    long long _mode; // +0x70
    CAShapeLayer * _voiceInputBtnBorderLayer; // +0x78
    UILabel * _voiceInputBtnTitle; // +0x80
    UIImageView * _voiceInputBtnIcon; // +0x88
    UIButton * _iconOverlayButton; // +0x90
    UIVisualEffectView * _panelBlurBackgroundView; // +0x98
    UIView * _panelBlurTintView; // +0xa0
    UIView * _topSeparatorLine; // +0xa8
    UIView * _stopBtnView; // +0xb0
    UIButton * _stopBtn; // +0xb8
    UITextView * _textInputView; // +0xc0
    UITapGestureRecognizer * _dismissKeyboardTapGes; // +0xc8
    double _lastNotifiedKeyboardHeight; // +0xd0
    double _currentTextInputHeight; // +0xd8
    UIView * _voiceInputGesView; // +0xe0
    UILongPressGestureRecognizer * _voiceInputLongPressGes; // +0xe8
    UITapGestureRecognizer * _voiceInputTapGes; // +0xf0
    CAShapeLayer * _arcColorLayer; // +0xf8
    UIView * _voiceInputGradientOverlay; // +0x100
    CAGradientLayer * _voiceInputGradientLayer; // +0x108
    UILabel * _cancelTipLabel; // +0x110
    long long _recordingOverlayState; // +0x118
    WAAgentNewGradientLoadingView * _audioStartLoadingView; // +0x120
    WAAgentNewWaveformView * _waveformView; // +0x128
    NSMutableArray * _selectedImagesArray; // +0x130
    UIScrollView * _imageRowContainer; // +0x138
    NSMutableArray * _imageViews; // +0x140
    NSMutableArray * _imageInfos; // +0x148
    NSMutableArray * _selectedFileItemsArray; // +0x150
    UIScrollView * _fileRowContainer; // +0x158
    UIDocumentInteractionController * _fileDocumentController; // +0x160
    UIView * _attachmentSeparatorLine; // +0x168
    double _attachmentHeight; // +0x170
}
+ (double)compactModePanelHeight;
- (double)effectiveBottomSafeAreaPadding;
- (void)setOverrideBottomSafeAreaPadding:(double)arg1;
- (void)setIconHidden:(BOOL)arg1;
- (void)setCompactMode:(BOOL)arg1;
- (void)setMinimalPadding:(BOOL)arg1;
- (void)setVoiceInputBtnChromeHidden:(BOOL)arg1;
- (void)setVoiceInputBtnHorizontalMargin:(double)arg1;
- (void)setRecordingOverlayHost:(id)arg1;
- (void)attachRecordingOverlayToHostIfNeeded;
- (void)detachRecordingOverlayFromHost;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupViews;
- (void)setupPanelBackgroundLayers;
- (void)setupTopSeparatorLine;
- (void)setPanelBackgroundLayersHidden:(BOOL)arg1;
- (void)createStopBtnView;
- (void)createVoiceInputGradientOverlay;
- (void)updateVoiceInputGradientOverlayColors;
- (void)showVoiceInputGradientOverlay;
- (void)hideVoiceInputGradientOverlay;
- (void)createRecordingOverlayView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (double)attachmentChromeHeightInsideVoiceBtn;
- (double)voiceInputBtnHeightForPanelWidth:(double)arg1;
- (CGRect)voiceInputBtnFrameWithPanelWidth:(double)arg1 panelHeight:(double)arg2;
- (double)contentAreaWidthForBtnWidth:(double)arg1;
- (void)layoutFramesForNormalMode;
- (void)layoutFramesForTextInputMode;
- (void)layoutFramesForVoiceLongPressMode;
- (void)layoutFramesForStopBtnMode;
- (void)updateVoiceInputBtnAppearance;
- (void)layoutVoiceInputBtnContentForNormalMode:(CGRect)arg1;
- (void)layoutImageAndFileRowsWithBtnFrame:(CGRect)arg1;
- (void)layoutAttachmentViewWithPanelWidth:(double)arg1 panelHeight:(double)arg2 btnFrame:(CGRect)arg3;
- (void)updateMode:(long long)arg1 animated:(BOOL)arg2;
- (void)switchToTextInputMode;
- (void)switchToNormalMode;
- (void)switchToNormalModeWithRemoveImages:(BOOL)arg1;
- (void)switchToStopBtnMode;
- (void)resetToNormalMode;
- (CGPoint)circleCenter;
- (void)updateRecordingOverlaySubviewsLayout;
- (void)updateRecordingOverlayCurve;
- (void)updateVoiceInputBtnWhenLongPressed;
- (void)applyRecordingOverlayState:(long long)arg1;
- (void)transitionToRecordingOverlayState;
- (void)onPressStop;
- (void)setPeakPower:(float)arg1;
- (void)updateRecordingDuration:(double)arg1;
- (void)startObservingKeyboard;
- (void)stopObservingKeyboard;
- (BOOL)isOwnKeyboardEvent;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillChangeFrameNotification:(id)arg1;
- (double)keyboardOverlapHeightFromNotification:(id)arg1;
- (void)onViewWillDisappear;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshTheme;
- (void)updateBtnIcon;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)selectedImages;
- (id)selectedFileItems;
- (void)onShowAttachmentPanelBtnClick;
- (double)calculateAttachmentHeight;
- (void)showAttachmentPanelAnimated:(BOOL)arg1;
- (void)hideAttachmentPanelAnimated:(BOOL)arg1;
- (void)hideAttachmentPanelIfNeeded;
- (void)dismissKeyboardAndRestoreNormalIfEmpty;
- (void)attachmentViewDidSelectPhoto:(id)arg1;
- (void)attachmentViewDidSelectCamera:(id)arg1;
- (void)attachmentViewDidSelectFile:(id)arg1;
- (void)showFileBrowser;
- (void)showPhotoPickerFromAlbum;
- (void)showCameraCapture;
- (id)topViewController;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onFileBrowser:(id)arg1 clickFile:(id)arg2;
- (void)onFileBrowserCancel;
- (void)handleSelectedFileBrowseInfos:(id)arg1;
- (void)propagateAttachmentLayoutChange;
- (void)updateImageRowDisplay;
- (void)updateImageViews;
- (void)deleteImageAtIndex:(id)arg1;
- (void)updateAttachmentItemsEnabledState;
- (void)updateImageRowContentOnly;
- (void)layoutImageRowContent;
- (double)fileChipWidthForRowWidth:(double)arg1;
- (void)updateFileRowDisplay;
- (void)updateFileViews;
- (id)createFileCellWithItem:(id)arg1 index:(long long)arg2 width:(double)arg3;
- (id)fileIconImageForExt:(id)arg1;
- (id)fileInfoTextForItem:(id)arg1;
- (id)formatFileSize:(unsigned long long)arg1;
- (void)updateFileRowContentOnly;
- (void)layoutFileRowContent;
- (void)relayoutFileChipInternals:(id)arg1 width:(double)arg2;
- (void)deleteFileAtIndex:(id)arg1;
- (void)handleFileCellTap:(id)arg1;
- (void)previewFileItem:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (void)handleImageTap:(id)arg1;
- (void)showFullScreenImageForIndex:(long long)arg1;
- (void)onFullScreenItemViewShowWithImgInfo:(id)arg1;
- (CGRect)getOriginImageViewRectWithSimpleImgInfo:(id)arg1;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)overrideBottomSafeAreaPadding;
- (id)recordingOverlayHost;
- (BOOL)transparentRecordingBg;
- (void)setTransparentRecordingBg:(BOOL)arg1;
- (BOOL)iconHidden;
- (BOOL)compactMode;
- (double)compactModeHeight;
- (void)setCompactModeHeight:(double)arg1;
- (BOOL)minimalPadding;
- (BOOL)pinsIconToTrailing;
- (void)setPinsIconToTrailing:(BOOL)arg1;
- (BOOL)voiceInputBtnChromeHidden;
- (double)voiceInputBtnHorizontalMargin;
- (id)voiceInputBtn;
- (void)setVoiceInputBtn:(id)arg1;
- (id)attachmentView;
- (void)setAttachmentView:(id)arg1;
- (id)recordingOverlayView;
- (void)setRecordingOverlayView:(id)arg1;
- (id)recordingWhiteBgView;
- (void)setRecordingWhiteBgView:(id)arg1;
- (id)recordingCurveLayer;
- (void)setRecordingCurveLayer:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (BOOL)darkModeEnabled;
- (void)setDarkModeEnabled:(BOOL)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (BOOL)showStopOutputBtn;
- (void)setShowStopOutputBtn:(BOOL)arg1;
- (BOOL)isAttachmentPanelShowing;
- (void)setIsAttachmentPanelShowing:(BOOL)arg1;
- (BOOL)attachmentHostedExternally;
- (void)setAttachmentHostedExternally:(BOOL)arg1;
- (BOOL)isImagePreviewVisible;
- (void)setIsImagePreviewVisible:(BOOL)arg1;
- (id)voiceInputBtnBorderLayer;
- (void)setVoiceInputBtnBorderLayer:(id)arg1;
- (id)voiceInputBtnTitle;
- (void)setVoiceInputBtnTitle:(id)arg1;
- (id)voiceInputBtnIcon;
- (void)setVoiceInputBtnIcon:(id)arg1;
- (id)iconOverlayButton;
- (void)setIconOverlayButton:(id)arg1;
- (id)panelBlurBackgroundView;
- (void)setPanelBlurBackgroundView:(id)arg1;
- (id)panelBlurTintView;
- (void)setPanelBlurTintView:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)stopBtnView;
- (void)setStopBtnView:(id)arg1;
- (id)stopBtn;
- (void)setStopBtn:(id)arg1;
- (id)textInputView;
- (void)setTextInputView:(id)arg1;
- (id)dismissKeyboardTapGes;
- (void)setDismissKeyboardTapGes:(id)arg1;
- (BOOL)keyboardVisible;
- (void)setKeyboardVisible:(BOOL)arg1;
- (BOOL)shouldRestoreKeyboard;
- (void)setShouldRestoreKeyboard:(BOOL)arg1;
- (BOOL)isOwningKeyboard;
- (void)setIsOwningKeyboard:(BOOL)arg1;
- (double)lastNotifiedKeyboardHeight;
- (void)setLastNotifiedKeyboardHeight:(double)arg1;
- (double)currentTextInputHeight;
- (void)setCurrentTextInputHeight:(double)arg1;
- (id)voiceInputGesView;
- (void)setVoiceInputGesView:(id)arg1;
- (id)voiceInputLongPressGes;
- (void)setVoiceInputLongPressGes:(id)arg1;
- (id)voiceInputTapGes;
- (void)setVoiceInputTapGes:(id)arg1;
- (BOOL)needCancelSendVoice;
- (void)setNeedCancelSendVoice:(BOOL)arg1;
- (id)arcColorLayer;
- (void)setArcColorLayer:(id)arg1;
- (id)voiceInputGradientOverlay;
- (void)setVoiceInputGradientOverlay:(id)arg1;
- (id)voiceInputGradientLayer;
- (void)setVoiceInputGradientLayer:(id)arg1;
- (id)cancelTipLabel;
- (void)setCancelTipLabel:(id)arg1;
- (long long)recordingOverlayState;
- (void)setRecordingOverlayState:(long long)arg1;
- (id)audioStartLoadingView;
- (void)setAudioStartLoadingView:(id)arg1;
- (id)waveformView;
- (void)setWaveformView:(id)arg1;
- (id)selectedImagesArray;
- (void)setSelectedImagesArray:(id)arg1;
- (id)imageRowContainer;
- (void)setImageRowContainer:(id)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)imageInfos;
- (void)setImageInfos:(id)arg1;
- (id)selectedFileItemsArray;
- (void)setSelectedFileItemsArray:(id)arg1;
- (id)fileRowContainer;
- (void)setFileRowContainer:(id)arg1;
- (id)fileDocumentController;
- (void)setFileDocumentController:(id)arg1;
- (id)attachmentSeparatorLine;
- (void)setAttachmentSeparatorLine:(id)arg1;
- (double)attachmentHeight;
- (void)setAttachmentHeight:(double)arg1;
- (void).cxx_destruct;
@end
