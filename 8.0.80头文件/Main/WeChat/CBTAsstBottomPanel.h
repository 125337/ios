@interface CBTAsstBottomPanel : UIView <UIGestureRecognizerDelegate, IChatBotVoIPSessionDelegate, IChatbotAudioStateExt, ICBTAsstBoardDataControllerExt, CBTAsstShortcutBarDelegate, UITextViewDelegate, MMImagePickerManagerDelegate, WCFileBrowseDelegate, MMSightCameraViewControllerDelegate, IMMFontMgrExt, CBTAsstBottomPanelDataReporterDataSource, CBTAsstAttachmentViewDelegate, CBTAsstReferViewDelegate, ICBTAsstExt>
{
    BOOL _isHalfScreenMode; // +0x8
    BOOL _keyboardVisible; // +0x9
    BOOL _shouldRestoreKeyboard; // +0xa
    BOOL _ttsActuallyPlaying; // +0xb
    BOOL _isTTSPlaying; // +0xc
    BOOL _stopOutputBtnTargetVisible; // +0xd
    BOOL _isAttachmentPanelPresenting; // +0xe
    BOOL _isSwitchingFromAttachmentToTextInput; // +0xf
    BOOL _stopOutputBtnRoundHasData; // +0x10
    BOOL _sendButtonUpdateCoalesceScheduled; // +0x11
    BOOL _sendButtonIsAnimating; // +0x12
    BOOL _sendButtonAnimatingToVisible; // +0x13
    BOOL _needCancelSendVoice; // +0x14
    BOOL _needStartRecording; // +0x15
    BOOL _isRecordingCanceled; // +0x16
    BOOL _shortcutBarSuppressedByImageRow; // +0x17
    BOOL _shortcutBarSuppressedByVoiceInput; // +0x18
    unsigned int _viewStatus; // +0x1c
    CBTAsstBoardDataController * _boardDataController; // +0x20
    id <CBTAsstBottomPanelDelegate> _delegate; // +0x28
    UIView * _voiceInputBtn; // +0x30
    UIView * _recordingOverlayView; // +0x38
    CBTAsstShortcutBar * _shortcutBar; // +0x40
    NSDictionary * _shortcutBarExposureReportExtraParams; // +0x48
    NSDictionary * _shortcutBarClickReportExtraParams; // +0x50
    CBTRefMsg * _pendingReferMsg; // +0x58
    UIView * _topSeparatorLine; // +0x60
    CAShapeLayer * _voiceInputBtnBorderLayer; // +0x68
    UIVisualEffectView * _voiceInputBtnBlurView; // +0x70
    UILabel * _voiceInputBtnTitle; // +0x78
    UIView * _voiceInputBtnDisplayView; // +0x80
    CBTWaveformView * _speakingWaveformView; // +0x88
    UIView * _stopBtnView; // +0x90
    UIButton * _stopBtn; // +0x98
    MMUIButton * _stopOutputBtn; // +0xa0
    UIButton * _stopOutputOverlayButton; // +0xa8
    unsigned long long _stopBtnShowTimestamp; // +0xb0
    unsigned long long _stopOutputBtnPendingMask; // +0xb8
    long long _recordingOverlayState; // +0xc0
    UILabel * _cancelTipLabel; // +0xc8
    UILabel * _recordingOverlayRightLabel; // +0xd0
    UIView * _voiceInputGradientOverlay; // +0xd8
    CAGradientLayer * _voiceInputGradientLayer; // +0xe0
    UIView * _cancelCardView; // +0xe8
    UIView * _recordCardView; // +0xf0
    UILabel * _cancelCardLabel; // +0xf8
    UILabel * _recordCardLabel; // +0x100
    UILabel * _releaseTipLabel; // +0x108
    UILabel * _recordCardFloatingTip; // +0x110
    UILabel * _cancelCardFloatingTip; // +0x118
    UIView * _voiceInputGesView; // +0x120
    UITextView * _textInputView; // +0x128
    UIButton * _iconOverlayButton; // +0x130
    UIButton * _sendButton; // +0x138
    UILongPressGestureRecognizer * _voiceInputLongPressGes; // +0x140
    UITapGestureRecognizer * _voiceInputTapGes; // +0x148
    UIView * _recordingBarView; // +0x150
    UIButton * _cancelRecordingBtn; // +0x158
    UILabel * _recordingStatusLabel; // +0x160
    UIButton * _endRecordingBtn; // +0x168
    NSMutableArray * _selectedImagesArray; // +0x170
    NSMutableArray * _selectedFilesArray; // +0x178
    CBTAsstBoardFileViewModel * _previewingFileViewModel; // +0x180
    UIScrollView * _imageRowContainer; // +0x188
    UIView * _attachmentSeparatorLine; // +0x190
    NSMutableArray * _imageViews; // +0x198
    NSLayoutConstraint * _voiceInputBtnLeadingConstraint; // +0x1a0
    NSLayoutConstraint * _voiceInputBtnTrailingConstraint; // +0x1a8
    NSLayoutConstraint * _voiceInputBtnHeightConstraint; // +0x1b0
    long long _voiceInputBtnHeightConstraintKind; // +0x1b8
    NSLayoutConstraint * _voiceInputBtnMaxHeightConstraint; // +0x1c0
    NSLayoutConstraint * _voiceInputBtnBottomConstraint; // +0x1c8
    NSLayoutConstraint * _textInputViewTopConstraint; // +0x1d0
    NSLayoutConstraint * _textInputViewBottomConstraint; // +0x1d8
    NSLayoutConstraint * _contentBottomConstraint; // +0x1e0
    NSLayoutConstraint * _voiceInputBtnTitleTopConstraint; // +0x1e8
    NSLayoutConstraint * _voiceInputBtnTitleBottomConstraint; // +0x1f0
    NSLayoutConstraint * _voiceInputBtnTitleTopConstraintWithoutImage; // +0x1f8
    NSLayoutConstraint * _voiceInputBtnTitleHeightConstraint; // +0x200
    NSLayoutConstraint * _displayViewCenterYToVoiceInputConstraint; // +0x208
    NSLayoutConstraint * _displayViewBottomToVoiceInputConstraint; // +0x210
    NSLayoutConstraint * _displayViewTrailingToPanelConstraint; // +0x218
    NSLayoutConstraint * _displayViewTrailingToSendButtonConstraint; // +0x220
    NSLayoutConstraint * _textInputViewDefaultTrailingConstraint; // +0x228
    NSLayoutConstraint * _textInputViewTrailingToDisplayViewConstraint; // +0x230
    NSLayoutConstraint * _textInputViewBottomToDisplayViewConstraint; // +0x238
    NSLayoutConstraint * _textInputViewTopToVoiceInputConstraint; // +0x240
    NSLayoutConstraint * _textInputViewTopToDisplayViewConstraint; // +0x248
    NSLayoutConstraint * _textInputViewBottomToDisplayViewBottomConstraint; // +0x250
    NSLayoutConstraint * _displayViewTopToSeparatorConstraint; // +0x258
    NSLayoutConstraint * _textInputViewHeightConstraint; // +0x260
    CBTAsstReferView * _msgReferView; // +0x268
    UIView * _voiceInputReferOverlayView; // +0x270
    NSLayoutConstraint * _topSeparatorLineBottomToReferViewConstraint; // +0x278
    NSLayoutConstraint * _msgReferViewTopToShortcutBarConstraint; // +0x280
    UITapGestureRecognizer * _dismissKeyboardTapGes; // +0x288
    CBTPopUpSelectableMenuViewController * _menuVC; // +0x290
    NSTimer * _recordingTimer; // +0x298
    double _recordingDuration; // +0x2a0
    long long _recordingCounter; // +0x2a8
    double _cancelLabelRotation; // +0x2b0
    double _recordLabelRotation; // +0x2b8
    UIView * _recordingContainerView; // +0x2c0
    UIView * _containerClipView; // +0x2c8
    UIView * _separatorLine; // +0x2d0
    CBTAsstRecordTranscriptTextView * _transcriptTextView; // +0x2d8
    NSLayoutConstraint * _recordingBarTopConstraint; // +0x2e0
    NSLayoutConstraint * _transcriptHeightConstraint; // +0x2e8
    NSLayoutConstraint * _recordingContainerLeadingConstraint; // +0x2f0
    NSLayoutConstraint * _recordingContainerTrailingConstraint; // +0x2f8
    UIView * _asrDismissOverlay; // +0x300
    NSString * _currentASRText; // +0x308
    UILongPressGestureRecognizer * _voiceInputPressTimingGes; // +0x310
    CBTAsstBottomPanelDataReporter * _dataReporter; // +0x318
    CBTGradientLoadingView * _audioStartLoadingView; // +0x320
    long long _audioStartState; // +0x328
    CBTAsstAttachmentView * _attachmentView; // +0x330
    NSLayoutConstraint * _attachmentHeightConstraint; // +0x338
    NSLayoutConstraint * _voiceInputBtnBottomToAttachmentConstraint; // +0x340
    NSLayoutConstraint * _recordingOverlayBottomToPanelConstraint; // +0x348
    NSLayoutConstraint * _recordingOverlayBottomToAttachmentConstraint; // +0x350
    double _keyboardAnimationDuration; // +0x358
    long long _keyboardAnimationCurve; // +0x360
    NSLayoutConstraint * _topSeparatorLineBottomToVoiceInputBtnConstraint; // +0x368
    NSLayoutConstraint * _topSeparatorLineBottomToShortcutBarConstraint; // +0x370
    NSLayoutConstraint * _voiceInputBtnTopToShortcutBarConstraint; // +0x378
    NSLayoutConstraint * _shortcutBarHeightConstraint; // +0x380
    NSArray * _backendShortcutItems; // +0x388
    NSArray * _localShortcutItems; // +0x390
    UIVisualEffectView * _panelBlurBackgroundView; // +0x398
    UIView * _panelBlurTintView; // +0x3a0
    UIView * _bottomSeparatorLine; // +0x3a8
    UIView * _panelGradientView; // +0x3b0
    CAGradientLayer * _panelGradientLayer; // +0x3b8
    UIView * _panelSolidBackgroundView; // +0x3c0
    NSLayoutConstraint * _panelGradientHeightConstraint; // +0x3c8
    NSArray * _panelGradientVoiceConstraints; // +0x3d0
    NSArray * _panelGradientReferConstraints; // +0x3d8
    UIScrollView * _imageRowContainerPatch; // +0x3e0
    NSLayoutConstraint * _panelGradientTopToVoiceInputBtnConstraint; // +0x3e8
    NSLayoutConstraint * _panelGradientBottomToVoiceInputBtnCenterYConstraint; // +0x3f0
    NSLayoutConstraint * _panelSolidBackgroundTopToVoiceInputBtnCenterYConstraint; // +0x3f8
    NSLayoutConstraint * _panelGradientTopToShortcutBarConstraint; // +0x400
    NSLayoutConstraint * _panelGradientBottomToShortcutBarConstraint; // +0x408
    NSLayoutConstraint * _panelSolidBackgroundTopToShortcutBarConstraint; // +0x410
    NSLayoutConstraint * _voiceInputBtnTitleCenterYToVoiceInputConstraint; // +0x418
    NSLayoutConstraint * _voiceInputBtnTitleCenterYWithAttachmentConstraint; // +0x420
    NSMutableArray * _selectedChatContactsArray; // +0x428
    _NSRange _savedSelectedRange; // +0x430
}
- (id)initWithHalfScreenMode:(BOOL)arg1;
- (void)setBoardDataController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)isPopupMenuVisible;
- (BOOL)isAttachmentPanelShowing;
- (double)attachmentMenuHeight;
- (unsigned long long)selectedImageCount;
- (void)notifyContentLayoutChanged;
- (void)showReferWithMessage:(id)arg1;
- (void)clearRefer;
- (void)updatePanelBackgroundGradientPosition;
- (void)onClearCBTRefer;
- (void)setViewStatus:(unsigned int)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshTheme;
- (double)voiceInputBtnSingleLineHeight;
- (double)textInputDesiredLineHeight;
- (void)applyTextInputLineHeightStyle;
- (double)voiceInputBtnTitleDesiredLineHeight;
- (void)applyVoiceInputBtnTitleLineHeightStyle;
- (void)setVoiceInputBtnTitleText:(id)arg1;
- (void)applyVoiceInputBtnTitleCenterYForHasAttachment:(BOOL)arg1 hasSendButton:(BOOL)arg2;
- (void)syncVoiceInputBtnTitleForAttachmentChange;
- (void)updateTextInputViewContentInsetForSingleLine;
- (void)onFontSizeChange;
- (void)updateShapeLayerColors;
- (id)resolvedRecordingOverlayBgColorForState:(long long)arg1;
- (void)applyRecordingOverlayState:(long long)arg1;
- (void)applyPanelDefaultBackgroundColor;
- (void)clearPanelBackgroundColor;
- (void)ensurePanelBlurBackgroundView;
- (void)setupViews;
- (BOOL)hasSelectedImages;
- (BOOL)hasSelectedFiles;
- (BOOL)hasSelectedChats;
- (void)showMixedAttachmentToast;
- (void)showChatMixedAttachmentToast;
- (void)attachmentViewDidSelectPhoto:(id)arg1;
- (void)attachmentViewDidSelectCamera:(id)arg1;
- (void)attachmentViewDidSelectFile:(id)arg1;
- (void)attachmentViewDidSelectChat:(id)arg1;
- (void)createStopBtnView;
- (void)createRecordingOverlayView;
- (void)createVoiceInputGradientOverlay;
- (void)updateVoiceInputGradientOverlayColors;
- (void)showVoiceInputGradientOverlay;
- (void)hideVoiceInputGradientOverlay;
- (void)createRecordingBarView;
- (void)setupConstraints;
- (void)layoutSubviews;
- (CGPoint)circleCenter;
- (void)updateRecordingOverlayCurve;
- (void)updateCardArcPaths;
- (void)updateCardArcPathsWithCancelWidth:(double)arg1 recordWidth:(double)arg2;
- (void)layoutForCurrentStatus;
- (double)defaultStateVoiceInputBtnBottomMargin;
- (void)layoutForNormalStatus;
- (void)layoutForTextInputStatus;
- (void)layoutForRecordingStatus;
- (void)layoutForRecordingBarStatus;
- (void)layoutForStopBtnStatus;
- (void)layoutImageRow;
- (void)updateVoiceInputBtnWhenLongPressed;
- (void)handleTapGesture;
- (void)onSendButtonClick;
- (void)onPlusBtnClick;
- (void)showAttachmentPanel;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)showAttachmentPanelAnimated:(BOOL)arg1;
- (void)showAttachmentPanelAnimated:(BOOL)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)hideAttachmentPanelAnimated:(BOOL)arg1;
- (void)hideAttachmentPanelIfNeeded;
- (void)hideAttachmentPanelAnimated:(BOOL)arg1 duration:(double)arg2 curve:(long long)arg3;
- (unsigned long long)animationOptionsFromCurve:(long long)arg1;
- (BOOL)isInRecordingRelatedStatus;
- (void)showImagePickerPopupMenu;
- (void)showPopupMenuWithMenuView:(id)arg1 atPoint:(CGPoint)arg2;
- (void)showPhotoPickerFromAlbum;
- (void)showCameraCapture;
- (void)showScanContinueCamera;
- (id)topViewController;
- (id)localPathForBrowseInfo:(id)arg1;
- (id)preparedUploadPathForBrowseInfo:(id)arg1 localPath:(id)arg2 fileName:(id)arg3;
- (id)displayFileNameForBrowseInfo:(id)arg1 localPath:(id)arg2;
- (id)displayPathForLocalPath:(id)arg1 fileName:(id)arg2;
- (unsigned long long)fileSizeForBrowseInfo:(id)arg1 localPath:(id)arg2;
- (id)thumbnailImageForFilePath:(id)arg1;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onFileBrowserCancel;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)appendCapturedImageToInput:(id)arg1 attachmentSource:(long long)arg2 completion:(id /* block */)arg3;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightCameraClose:(id)arg1;
- (void)updateImageRowDisplay;
- (void)updateTopSeparatorLinePosition;
- (void)updateImageViews;
- (void)deleteImageAtIndex:(id)arg1;
- (id)selectedImages;
- (id)selectedFilePaths;
- (id)selectedDisplayFilePaths;
- (id)selectedFileNames;
- (void)sendSelectedContentToBoardWithText:(id)arg1;
- (void)updateMicrophoneWithOpenState:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2;
- (void)updateMicrophoneWithOpenState:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2 includeSelectedAttachments:(BOOL)arg3;
- (void)updateMicrophoneWithOpenState:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2 includeSelectedImages:(BOOL)arg3 includeSelectedFiles:(BOOL)arg4;
- (void)updateFileRowDisplay;
- (id)fileChipViewForFile:(id)arg1 index:(unsigned long long)arg2 frame:(CGRect)arg3;
- (void)previewFileAtIndex:(id)arg1;
- (void)deleteFileAtIndex:(id)arg1;
- (void)updateChatAttachmentRowDisplay;
- (id)chatAttachmentCellForContact:(id)arg1 index:(unsigned long long)arg2 frame:(CGRect)arg3;
- (void)deleteChatAttachmentAtIndex:(id)arg1;
- (void)handleChatAttachmentTap:(id)arg1;
- (void)navigateToHalfScreenChatWithContact:(id)arg1;
- (void)updateTextInputState;
- (void)updateSendButtonAvailability;
- (void)performSendButtonAvailabilityUpdate;
- (BOOL)shouldSuppressStopOutputBtnForInputContent;
- (void)syncStopOutputBtnWithTextContent;
- (void)updateTextInputReturnKeyType;
- (void)applySendButtonLayout:(BOOL)arg1;
- (void)applySendButtonLayoutConstraintsOnly:(BOOL)arg1;
- (void)updateVoiceInputBtnTrailingForStopOutputBtn;
- (BOOL)isTextEmpty:(id)arg1;
- (BOOL)isOnlyZeroWidthSpace:(id)arg1;
- (id)getActualText;
- (void)switchToTextInputMode;
- (void)switchToNormalMode:(BOOL)arg1;
- (void)switchToNormalModeWithoutAnimation:(BOOL)arg1;
- (void)finalizeAfterPickerDismissed;
- (void)restoreKeyboardIfNeeded;
- (void)onKeyboardWillHideWithDuration:(double)arg1 curve:(long long)arg2;
- (void)onVoiceInputShouldBegin:(BOOL)arg1;
- (void)onVoiceInputShouldEnd;
- (void)onRecordingDidStart;
- (void)onCancelRecordingClick;
- (void)onEndRecordingClick;
- (void)onRecordingBarTap;
- (void)expandASRPanel;
- (void)collapseASRPanel;
- (void)resetASRPanelState;
- (void)startRecordingTimer;
- (void)stopRecordingTimer;
- (void)onRecordingTimerTick;
- (void)updateRecordingTimeDisplay;
- (void)ensureTranscriptTextView;
- (void)showASRDismissOverlay;
- (void)hideASRDismissOverlay;
- (void)onASRDismissOverlayTap;
- (void)appendASRText:(id)arg1;
- (void)updateViewStatus:(unsigned int)arg1 animation:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)onPressStop;
- (void)onStopOutputBtnClick;
- (void)showStopOutputBtn;
- (void)hideStopOutputBtn;
- (void)reportPauseDisappearIfNeeded;
- (void)setStopOutputBtnVisible:(BOOL)arg1;
- (void)updateVoiceInputBtnTrailingForTargetStopOutputVisible:(BOOL)arg1;
- (void)animateButton:(id)arg1 overlay:(id)arg2 toHidden:(BOOL)arg3 coButton:(id)arg4 constraintsUpdate:(id /* block */)arg5;
- (void)onChangeMainBtn:(BOOL)arg1;
- (void)onSendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 shouldActiveLoading:(BOOL)arg3;
- (void)onAsstTurnCompleteWithViewModel:(id)arg1;
- (void)onLinkErrorShouldResetBottomBar:(int)arg1;
- (void)onAsstTTSReadStateDidChange:(BOOL)arg1;
- (void)maybeFinalizeStopOutputBtn;
- (BOOL)isInAnsweringRound;
- (BOOL)isWaitingForTurnComplete;
- (void)onRecvAsstCardWrap:(id)arg1 traceMsgid:(id)arg2 appTraceId:(id)arg3 storageInfo:(id)arg4;
- (void)onRecvStreamText:(id)arg1 traceMsgid:(id)arg2;
- (void)onTTSBegin:(id)arg1;
- (void)onTTSEnd:(id)arg1;
- (void)onChatbotAudioRelease;
- (void)onRecordStartStateChange:(long long)arg1 error:(id)arg2;
- (void)onTTSPlayStateChanged:(BOOL)arg1;
- (void)onTTSPlayInterrupted;
- (void)updateAudioStartLoadingUI:(BOOL)arg1;
- (BOOL)hasSelectedAttachmentsForHoldToTalk;
- (id)holdToTalkVoipSessionID;
- (id)commonReportParamsForBottomPanelDataReporter:(id)arg1;
- (BOOL)bottomPanelDataReporterHasSelectedAttachments:(id)arg1;
- (id)bottomPanelDataReporterAttchTypeString:(id)arg1;
- (id)inputBoxViewForBottomPanelDataReporter:(id)arg1;
- (id)addIconButtonForBottomPanelDataReporter:(id)arg1;
- (void)handleImageTap:(id)arg1;
- (void)showFullScreenImageForIndex:(long long)arg1;
- (void)shortcutBar:(id)arg1 didSelectItem:(id)arg2;
- (id)shortcutBar:(id)arg1 reportParamsForItem:(id)arg2;
- (void)suppressShortcutBarForVoiceInputIfNeeded;
- (void)restoreShortcutBarAfterVoiceInputIfNeeded;
- (BOOL)handleScanContinueCameraShortcutItem:(id)arg1;
- (void)showShortcutBarWithItems:(id)arg1;
- (void)updateLocalShortcutItems:(id)arg1;
- (id)mergedShortcutBarItems;
- (void)applyShortcutBarItems:(id)arg1;
- (void)hideShortcutBar;
- (void)applyHiddenShortcutBar;
- (void)applyGradientAnchorsForShortcutBarVisible:(BOOL)arg1;
- (void)onRecvAskAsstInfo:(id)arg1;
- (void)onHideShortcutBar;
- (void)setTopSeparatorLineVisible:(BOOL)arg1;
- (id)shortcutBarImageTypeWithExtraParams:(id)arg1;
- (id)shortcutBarAskXiaoweiSrcInfo;
- (id)scanImageTypeFromSrcInfoJson:(id)arg1;
- (void)reportShortcutBarClickWithItem:(id)arg1;
- (void)writeShortcutBarExposureReportExtraParams:(id)arg1;
- (void)writeShortcutBarClickReportExtraParams:(id)arg1;
- (void)clearShortcutBarExposureReportExtraParams;
- (void)clearShortcutBarClickReportExtraParams;
- (unsigned int)viewStatus;
- (id)boardDataController;
- (BOOL)isHalfScreenMode;
- (void)setIsHalfScreenMode:(BOOL)arg1;
- (id)delegate;
- (id)voiceInputBtn;
- (void)setVoiceInputBtn:(id)arg1;
- (BOOL)keyboardVisible;
- (BOOL)shouldRestoreKeyboard;
- (void)setShouldRestoreKeyboard:(BOOL)arg1;
- (id)recordingOverlayView;
- (void)setRecordingOverlayView:(id)arg1;
- (id)shortcutBar;
- (void)setShortcutBar:(id)arg1;
- (BOOL)ttsActuallyPlaying;
- (void)setTtsActuallyPlaying:(BOOL)arg1;
- (id)shortcutBarExposureReportExtraParams;
- (void)setShortcutBarExposureReportExtraParams:(id)arg1;
- (id)shortcutBarClickReportExtraParams;
- (void)setShortcutBarClickReportExtraParams:(id)arg1;
- (id)pendingReferMsg;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)voiceInputBtnBorderLayer;
- (void)setVoiceInputBtnBorderLayer:(id)arg1;
- (id)voiceInputBtnBlurView;
- (void)setVoiceInputBtnBlurView:(id)arg1;
- (id)voiceInputBtnTitle;
- (void)setVoiceInputBtnTitle:(id)arg1;
- (id)voiceInputBtnDisplayView;
- (void)setVoiceInputBtnDisplayView:(id)arg1;
- (id)speakingWaveformView;
- (void)setSpeakingWaveformView:(id)arg1;
- (id)stopBtnView;
- (void)setStopBtnView:(id)arg1;
- (id)stopBtn;
- (void)setStopBtn:(id)arg1;
- (id)stopOutputBtn;
- (void)setStopOutputBtn:(id)arg1;
- (id)stopOutputOverlayButton;
- (void)setStopOutputOverlayButton:(id)arg1;
- (BOOL)isTTSPlaying;
- (void)setIsTTSPlaying:(BOOL)arg1;
- (BOOL)stopOutputBtnTargetVisible;
- (void)setStopOutputBtnTargetVisible:(BOOL)arg1;
- (BOOL)isAttachmentPanelPresenting;
- (void)setIsAttachmentPanelPresenting:(BOOL)arg1;
- (BOOL)isSwitchingFromAttachmentToTextInput;
- (void)setIsSwitchingFromAttachmentToTextInput:(BOOL)arg1;
- (unsigned long long)stopBtnShowTimestamp;
- (void)setStopBtnShowTimestamp:(unsigned long long)arg1;
- (unsigned long long)stopOutputBtnPendingMask;
- (void)setStopOutputBtnPendingMask:(unsigned long long)arg1;
- (BOOL)stopOutputBtnRoundHasData;
- (void)setStopOutputBtnRoundHasData:(BOOL)arg1;
- (BOOL)sendButtonUpdateCoalesceScheduled;
- (void)setSendButtonUpdateCoalesceScheduled:(BOOL)arg1;
- (BOOL)sendButtonIsAnimating;
- (void)setSendButtonIsAnimating:(BOOL)arg1;
- (BOOL)sendButtonAnimatingToVisible;
- (void)setSendButtonAnimatingToVisible:(BOOL)arg1;
- (long long)recordingOverlayState;
- (void)setRecordingOverlayState:(long long)arg1;
- (id)cancelTipLabel;
- (void)setCancelTipLabel:(id)arg1;
- (id)recordingOverlayRightLabel;
- (void)setRecordingOverlayRightLabel:(id)arg1;
- (id)voiceInputGradientOverlay;
- (void)setVoiceInputGradientOverlay:(id)arg1;
- (id)voiceInputGradientLayer;
- (void)setVoiceInputGradientLayer:(id)arg1;
- (id)cancelCardView;
- (void)setCancelCardView:(id)arg1;
- (id)recordCardView;
- (void)setRecordCardView:(id)arg1;
- (id)cancelCardLabel;
- (void)setCancelCardLabel:(id)arg1;
- (id)recordCardLabel;
- (void)setRecordCardLabel:(id)arg1;
- (id)releaseTipLabel;
- (void)setReleaseTipLabel:(id)arg1;
- (id)recordCardFloatingTip;
- (void)setRecordCardFloatingTip:(id)arg1;
- (id)cancelCardFloatingTip;
- (void)setCancelCardFloatingTip:(id)arg1;
- (id)voiceInputGesView;
- (void)setVoiceInputGesView:(id)arg1;
- (id)textInputView;
- (void)setTextInputView:(id)arg1;
- (id)iconOverlayButton;
- (void)setIconOverlayButton:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)voiceInputLongPressGes;
- (void)setVoiceInputLongPressGes:(id)arg1;
- (id)voiceInputTapGes;
- (void)setVoiceInputTapGes:(id)arg1;
- (BOOL)needCancelSendVoice;
- (void)setNeedCancelSendVoice:(BOOL)arg1;
- (id)recordingBarView;
- (void)setRecordingBarView:(id)arg1;
- (id)cancelRecordingBtn;
- (void)setCancelRecordingBtn:(id)arg1;
- (id)recordingStatusLabel;
- (void)setRecordingStatusLabel:(id)arg1;
- (id)endRecordingBtn;
- (void)setEndRecordingBtn:(id)arg1;
- (BOOL)needStartRecording;
- (void)setNeedStartRecording:(BOOL)arg1;
- (BOOL)isRecordingCanceled;
- (void)setIsRecordingCanceled:(BOOL)arg1;
- (_NSRange)savedSelectedRange;
- (void)setSavedSelectedRange:(_NSRange)arg1;
- (id)selectedImagesArray;
- (void)setSelectedImagesArray:(id)arg1;
- (id)selectedFilesArray;
- (void)setSelectedFilesArray:(id)arg1;
- (id)previewingFileViewModel;
- (void)setPreviewingFileViewModel:(id)arg1;
- (id)imageRowContainer;
- (void)setImageRowContainer:(id)arg1;
- (id)attachmentSeparatorLine;
- (void)setAttachmentSeparatorLine:(id)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)voiceInputBtnLeadingConstraint;
- (void)setVoiceInputBtnLeadingConstraint:(id)arg1;
- (id)voiceInputBtnTrailingConstraint;
- (void)setVoiceInputBtnTrailingConstraint:(id)arg1;
- (id)voiceInputBtnHeightConstraint;
- (void)setVoiceInputBtnHeightConstraint:(id)arg1;
- (long long)voiceInputBtnHeightConstraintKind;
- (void)setVoiceInputBtnHeightConstraintKind:(long long)arg1;
- (id)voiceInputBtnMaxHeightConstraint;
- (void)setVoiceInputBtnMaxHeightConstraint:(id)arg1;
- (id)voiceInputBtnBottomConstraint;
- (void)setVoiceInputBtnBottomConstraint:(id)arg1;
- (id)textInputViewTopConstraint;
- (void)setTextInputViewTopConstraint:(id)arg1;
- (id)textInputViewBottomConstraint;
- (void)setTextInputViewBottomConstraint:(id)arg1;
- (id)contentBottomConstraint;
- (void)setContentBottomConstraint:(id)arg1;
- (id)voiceInputBtnTitleTopConstraint;
- (void)setVoiceInputBtnTitleTopConstraint:(id)arg1;
- (id)voiceInputBtnTitleBottomConstraint;
- (void)setVoiceInputBtnTitleBottomConstraint:(id)arg1;
- (id)voiceInputBtnTitleTopConstraintWithoutImage;
- (void)setVoiceInputBtnTitleTopConstraintWithoutImage:(id)arg1;
- (id)voiceInputBtnTitleHeightConstraint;
- (void)setVoiceInputBtnTitleHeightConstraint:(id)arg1;
- (id)displayViewCenterYToVoiceInputConstraint;
- (void)setDisplayViewCenterYToVoiceInputConstraint:(id)arg1;
- (id)displayViewBottomToVoiceInputConstraint;
- (void)setDisplayViewBottomToVoiceInputConstraint:(id)arg1;
- (id)displayViewTrailingToPanelConstraint;
- (void)setDisplayViewTrailingToPanelConstraint:(id)arg1;
- (id)displayViewTrailingToSendButtonConstraint;
- (void)setDisplayViewTrailingToSendButtonConstraint:(id)arg1;
- (id)textInputViewDefaultTrailingConstraint;
- (void)setTextInputViewDefaultTrailingConstraint:(id)arg1;
- (id)textInputViewTrailingToDisplayViewConstraint;
- (void)setTextInputViewTrailingToDisplayViewConstraint:(id)arg1;
- (id)textInputViewBottomToDisplayViewConstraint;
- (void)setTextInputViewBottomToDisplayViewConstraint:(id)arg1;
- (id)textInputViewTopToVoiceInputConstraint;
- (void)setTextInputViewTopToVoiceInputConstraint:(id)arg1;
- (id)textInputViewTopToDisplayViewConstraint;
- (void)setTextInputViewTopToDisplayViewConstraint:(id)arg1;
- (id)textInputViewBottomToDisplayViewBottomConstraint;
- (void)setTextInputViewBottomToDisplayViewBottomConstraint:(id)arg1;
- (id)displayViewTopToSeparatorConstraint;
- (void)setDisplayViewTopToSeparatorConstraint:(id)arg1;
- (id)textInputViewHeightConstraint;
- (void)setTextInputViewHeightConstraint:(id)arg1;
- (id)msgReferView;
- (void)setMsgReferView:(id)arg1;
- (id)voiceInputReferOverlayView;
- (void)setVoiceInputReferOverlayView:(id)arg1;
- (id)topSeparatorLineBottomToReferViewConstraint;
- (void)setTopSeparatorLineBottomToReferViewConstraint:(id)arg1;
- (id)msgReferViewTopToShortcutBarConstraint;
- (void)setMsgReferViewTopToShortcutBarConstraint:(id)arg1;
- (id)dismissKeyboardTapGes;
- (void)setDismissKeyboardTapGes:(id)arg1;
- (id)menuVC;
- (void)setMenuVC:(id)arg1;
- (id)recordingTimer;
- (void)setRecordingTimer:(id)arg1;
- (double)recordingDuration;
- (void)setRecordingDuration:(double)arg1;
- (long long)recordingCounter;
- (void)setRecordingCounter:(long long)arg1;
- (double)cancelLabelRotation;
- (void)setCancelLabelRotation:(double)arg1;
- (double)recordLabelRotation;
- (void)setRecordLabelRotation:(double)arg1;
- (id)recordingContainerView;
- (void)setRecordingContainerView:(id)arg1;
- (id)containerClipView;
- (void)setContainerClipView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)transcriptTextView;
- (void)setTranscriptTextView:(id)arg1;
- (id)recordingBarTopConstraint;
- (void)setRecordingBarTopConstraint:(id)arg1;
- (id)transcriptHeightConstraint;
- (void)setTranscriptHeightConstraint:(id)arg1;
- (id)recordingContainerLeadingConstraint;
- (void)setRecordingContainerLeadingConstraint:(id)arg1;
- (id)recordingContainerTrailingConstraint;
- (void)setRecordingContainerTrailingConstraint:(id)arg1;
- (id)asrDismissOverlay;
- (void)setAsrDismissOverlay:(id)arg1;
- (id)currentASRText;
- (void)setCurrentASRText:(id)arg1;
- (id)voiceInputPressTimingGes;
- (void)setVoiceInputPressTimingGes:(id)arg1;
- (id)dataReporter;
- (void)setDataReporter:(id)arg1;
- (id)audioStartLoadingView;
- (void)setAudioStartLoadingView:(id)arg1;
- (long long)audioStartState;
- (void)setAudioStartState:(long long)arg1;
- (id)attachmentView;
- (void)setAttachmentView:(id)arg1;
- (id)attachmentHeightConstraint;
- (void)setAttachmentHeightConstraint:(id)arg1;
- (id)voiceInputBtnBottomToAttachmentConstraint;
- (void)setVoiceInputBtnBottomToAttachmentConstraint:(id)arg1;
- (id)recordingOverlayBottomToPanelConstraint;
- (void)setRecordingOverlayBottomToPanelConstraint:(id)arg1;
- (id)recordingOverlayBottomToAttachmentConstraint;
- (void)setRecordingOverlayBottomToAttachmentConstraint:(id)arg1;
- (double)keyboardAnimationDuration;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (long long)keyboardAnimationCurve;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (id)topSeparatorLineBottomToVoiceInputBtnConstraint;
- (void)setTopSeparatorLineBottomToVoiceInputBtnConstraint:(id)arg1;
- (id)topSeparatorLineBottomToShortcutBarConstraint;
- (void)setTopSeparatorLineBottomToShortcutBarConstraint:(id)arg1;
- (id)voiceInputBtnTopToShortcutBarConstraint;
- (void)setVoiceInputBtnTopToShortcutBarConstraint:(id)arg1;
- (id)shortcutBarHeightConstraint;
- (void)setShortcutBarHeightConstraint:(id)arg1;
- (BOOL)shortcutBarSuppressedByImageRow;
- (void)setShortcutBarSuppressedByImageRow:(BOOL)arg1;
- (id)backendShortcutItems;
- (void)setBackendShortcutItems:(id)arg1;
- (id)localShortcutItems;
- (void)setLocalShortcutItems:(id)arg1;
- (BOOL)shortcutBarSuppressedByVoiceInput;
- (void)setShortcutBarSuppressedByVoiceInput:(BOOL)arg1;
- (id)panelBlurBackgroundView;
- (void)setPanelBlurBackgroundView:(id)arg1;
- (id)panelBlurTintView;
- (void)setPanelBlurTintView:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (id)panelGradientView;
- (void)setPanelGradientView:(id)arg1;
- (id)panelGradientLayer;
- (void)setPanelGradientLayer:(id)arg1;
- (id)panelSolidBackgroundView;
- (void)setPanelSolidBackgroundView:(id)arg1;
- (id)panelGradientHeightConstraint;
- (void)setPanelGradientHeightConstraint:(id)arg1;
- (id)panelGradientVoiceConstraints;
- (void)setPanelGradientVoiceConstraints:(id)arg1;
- (id)panelGradientReferConstraints;
- (void)setPanelGradientReferConstraints:(id)arg1;
- (id)imageRowContainerPatch;
- (void)setImageRowContainerPatch:(id)arg1;
- (id)panelGradientTopToVoiceInputBtnConstraint;
- (void)setPanelGradientTopToVoiceInputBtnConstraint:(id)arg1;
- (id)panelGradientBottomToVoiceInputBtnCenterYConstraint;
- (void)setPanelGradientBottomToVoiceInputBtnCenterYConstraint:(id)arg1;
- (id)panelSolidBackgroundTopToVoiceInputBtnCenterYConstraint;
- (void)setPanelSolidBackgroundTopToVoiceInputBtnCenterYConstraint:(id)arg1;
- (id)panelGradientTopToShortcutBarConstraint;
- (void)setPanelGradientTopToShortcutBarConstraint:(id)arg1;
- (id)panelGradientBottomToShortcutBarConstraint;
- (void)setPanelGradientBottomToShortcutBarConstraint:(id)arg1;
- (id)panelSolidBackgroundTopToShortcutBarConstraint;
- (void)setPanelSolidBackgroundTopToShortcutBarConstraint:(id)arg1;
- (id)voiceInputBtnTitleCenterYToVoiceInputConstraint;
- (void)setVoiceInputBtnTitleCenterYToVoiceInputConstraint:(id)arg1;
- (id)voiceInputBtnTitleCenterYWithAttachmentConstraint;
- (void)setVoiceInputBtnTitleCenterYWithAttachmentConstraint:(id)arg1;
- (id)selectedChatContactsArray;
- (void)setSelectedChatContactsArray:(id)arg1;
- (void).cxx_destruct;
@end
