@interface MMMassSendWriteMessageViewController : MMUIViewController <AudioRecorderEventExt, WCFinderFeedPickerViewControllerDelegate, WCAudioModuleDelegate, MMInputToolViewDelegate, UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, ImageControllerDelegate, IMsgExt, IMassSendExt, RecordControllerDelegate, WCActionSheetDelegate, StreamVoiceInputViewControllerDelegate>
{
    MMTableView * _tableView; // +0x68
    MassSendHighlightedView * _receiverView; // +0x70
    MMInputToolView * _inputToolView; // +0x78
    NSMutableArray * _arrContacts; // +0x80
    ImageController * _imageController; // +0x88
    RecordController * _recordController; // +0x90
    MMLoadingView * _loadingView; // +0x98
    unsigned int _uiTmpRecordID; // +0xa0
    unsigned int _iFromSendAgain; // +0xa4
    unsigned int m_currentRecordFormat; // +0xa8
    StreamVoiceInputViewController * m_streamVoiceInputViewController; // +0xb0
    UIWindow * m_coverWindow; // +0xb8
    UIView * m_topBarView; // +0xc0
    UIBarButtonItem * m_voiceStreamCacheLeftBtnItem; // +0xc8
    UIBarButtonItem * m_voiceStreamCacheRightBtnItem; // +0xd0
    NSString * m_voiceStreamTitle; // +0xd8
    NSString * m_voiceStreamSavedText; // +0xe0
    BOOL _cancelSendRecording; // +0xe8
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onBack:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (id)getAllUsrName;
- (void)MassSend:(id)arg1;
- (void)MassSendWithConfirmView:(id)arg1;
- (void)initTableView;
- (void)initToolView;
- (void)adjustSubviewRects;
- (void)viewDidLayoutSubviews;
- (void)initReceiverView;
- (void)initLoadingView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)GetCurrentViewController;
- (void)ToolViewPositionDidChanged:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onPositionModeChangeTo:(unsigned long long)arg1 Animated:(BOOL)arg2;
- (void)SendTextMessageToolView:(id)arg1;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (BOOL)canSendCaptureImage;
- (void)sendCaptruedImage:(id)arg1;
- (BOOL)StartRecording:(id)arg1;
- (void)scrollTableToBottomAnimated:(BOOL)arg1 init:(BOOL)arg2;
- (void)SendRecording;
- (void)StopRecording;
- (void)CancelRecording;
- (BOOL)IsRecording;
- (void)onStreamVoiceInputButtonClick;
- (id)getCurrentChatName;
- (id)getMsgSendOpEntry;
- (id)chatUserNameForSightStatistics;
- (void)onOpenFinderPicker;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)SendFinderMessage:(id)arg1;
- (BOOL)shouldHideToolViewOnKeyboardHide;
- (double)getInputToolViewHeight;
- (void)streamVoiceInputBoardDidShow;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputFullScreenExit;
- (void)editStreamVoiceTxtReturn;
- (void)onSendTextMsg:(id)arg1;
- (void)showStreamVoiceInputMaskView:(BOOL)arg1;
- (void)hideToolViewAnimated:(BOOL)arg1;
- (void)openMediaBrowser;
- (void)openCameraController;
- (BOOL)shouldForbidVoiceTrans;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)processInsertedAsset:(id)arg1;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (void)CameraControllerDidTakeSightImage:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (id)getViewController;
- (id)getNavigationController;
- (BOOL)isMassSend;
- (BOOL)CanSendMultiImage;
- (BOOL)CanSendOriginalVideo;
- (BOOL)CanSendOriginalImage;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanDragSelect;
- (void)ShowRecording;
- (void)HideRecordTips;
- (void)SetVoiceEnabled:(BOOL)arg1;
- (void)ShowTooShortTips;
- (void)ShowStartFailTips:(id)arg1;
- (void)ShowTooLongTips;
- (void)SetPeakPower:(float)arg1;
- (BOOL)onRecordCountRemain:(long long)arg1;
- (CGPoint)CheckVoiceBtnPressLocation;
- (id)GetContactName;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2;
- (void)OnMassSendFail:(unsigned int)arg1 WithErrorMsg:(id)arg2;
- (void)OnMassSendOK;
- (void)PopBack;
- (void)willDisappear;
- (BOOL)ShouldShowKeyboardAnimation;
- (void)cancelUploadAudioMsg;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (id)arrContacts;
- (void)setArrContacts:(id)arg1;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (unsigned int)iFromSendAgain;
- (void)setIFromSendAgain:(unsigned int)arg1;
- (BOOL)cancelSendRecording;
- (void)setCancelSendRecording:(BOOL)arg1;
- (void).cxx_destruct;
@end

