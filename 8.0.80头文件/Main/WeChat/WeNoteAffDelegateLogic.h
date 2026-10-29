@interface WeNoteAffDelegateLogic : NSObject <MMImagePickerManagerDelegate, MMPickLocationViewControllerDelegate, IRecordPermissionCheckExt, StreamVoiceInputViewControllerDelegate, WeNoteAddFavListViewControllerDelegate, WCFileBrowseDelegate, WeNoteDictationDelegate, UIDocumentPickerDelegate, FavFullScreenImageViewControllerDelegate, ViewLocationDelegate, MsgRecordFileDetailDelegate, FavForwardLogicDelegate, WNAITextDelegate, WeNoteAffDelegateBase, IWNAudioMgrExt>
{
    id <WeNoteAffLogicDelegate> m_delegate; // +0x8
    unsigned int m_mmassetCount; // +0x10
    NSMutableArray * m_arrAttachmentDatas; // +0x18
    MMPickLocationViewController * m_locationVC; // +0x20
    StreamVoiceInputViewController * m_voiceInputViewController; // +0x28
    NSString * m_voiceStreamTitle; // +0x30
    UIView * m_voiceInputTopBar; // +0x38
    double m_toolViewHeight; // +0x40
    FavoritesItemDataField * m_recordingData; // +0x48
    NSString * m_currentRecordId; // +0x50
    BOOL m_isUserStopRecord; // +0x58
    WeNoteDictationController * m_dictationController; // +0x60
    long long m_pendingAudioAction; // +0x68
    long long m_dictationInputRangeStart; // +0x70
    long long m_dictationInputRangeLength; // +0x78
    WeNoteAffDelegateCallback * m_callBack; // +0x80
    NSMutableDictionary * m_sessionAttachmentDataCache; // +0x88
    FavFullScreenImageViewController * m_favImageVC; // +0x90
    NSString * m_curFullScreenImageId; // +0x98
    CGRect m_curImgOriginRect; // +0xa0
    id /* block */ m_fullScreenImgHideAnimationCompleteHandle; // +0xc0
    NSString * m_curPlayingAudioId; // +0xc8
    NSMutableDictionary * m_attachmentNativeItemDic; // +0xd0
    BOOL _recordingHostedToMinimize; // +0xd8
    BOOL _useNewVoiceCard; // +0xd9
    BOOL _enableRecordMinimize; // +0xda
    BOOL _enableDictationMinimize; // +0xdb
    BOOL _isWaitingForHideAnimationComplete; // +0xdc
    WeNoteCPPInstance * _cppInstance; // +0xe0
    long long _canTranslateContent; // +0xe8
    SimpleImgInfo * _lastShownImgInfo; // +0xf0
    WNAITextLogic * _aiTextLogic; // +0xf8
}
+ (id)fileExtensionForUTI:(id)arg1;
- (int)checkExceedMaxObjectCountAndAlert;
- (long long)getCurrentOrientation;
- (void)checkToolViewHeightWithComplete:(id /* block */)arg1;
- (void)onSelectPhoto;
- (void)onOpenCamera;
- (void)onSelectLocation;
- (void)onVoiceInput;
- (void)closeVoiceInput;
- (BOOL)isUsingVoiceInput;
- (void)onSelectFav;
- (void)onSelectFile;
- (BOOL)onRecordClick:(BOOL)arg1;
- (BOOL)isOnRecording:(id)arg1;
- (BOOL)onDictationAction:(BOOL)arg1 allowCommand:(BOOL)arg2 blueMicContinuousEntry:(BOOL)arg3;
- (BOOL)_doToggleDictation:(BOOL)arg1 allowCommand:(BOOL)arg2;
- (void)onFlutterNotePageStateChange:(int)arg1;
- (BOOL)checkInterceptNotePageExit;
- (void)onChangeEnablePageEdgeDragGesture:(BOOL)arg1;
- (void)onDistinguishDictationSpeakerAction:(BOOL)arg1;
- (void)handleShareToImg:(int)arg1 endIndex:(int)arg2;
- (void)onVoiceToText:(id)arg1;
- (void)WeNoteDictationWillStart;
- (void)WeNoteDictationUIStateChanged:(int)arg1 withText:(id)arg2;
- (void)WeNoteDictationLevelMeterChanged:(float)arg1;
- (void)onReportDictationInputRangeAsync:(unsigned long long)arg1 rangeStart:(int)arg2 rangeLength:(int)arg3;
- (void)OnWNAudioRecordLevelMeter:(float)arg1;
- (void)onCreatePostImageView:(unsigned int)arg1;
- (void)onTakePhotoForPost;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onAddImageItemComplete;
- (void)onCreatPostLocationView;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCancelSeletctedLocation;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)requestVoiceInputView;
- (double)getInputToolViewHeight;
- (void)onSendTextMsg:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)showStreamVoiceInputMaskView:(BOOL)arg1;
- (id)getVoiceTopBarView;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputFullScreenExit;
- (void)editStreamVoiceTxtReturn;
- (void)onReturnSelectedFavDataList:(id)arg1;
- (void)showFilePickerView:(unsigned int)arg1;
- (void)onFileBrowseOpeniCloud;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (BOOL)doVoiceRecordBegin;
- (void)doVoiceRecordEnd;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)reportVoiceRecordFinishWithFilePath:(id)arg1 voiceTime:(float)arg2 stopReason:(long long)arg3;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4 StopReason:(long long)arg5;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (void)checkEnablePasteAsync:(unsigned long long)arg1;
- (void)innerCheckEnablePasteAsync:(unsigned long long)arg1;
- (void)getAttributeInfoListFromClipBoardAsync:(unsigned long long)arg1;
- (void)innerGetAttributeInfoListFromClipBoardAsync:(unsigned long long)arg1;
- (id)getAttributeInfoListFromClipBoardWithPureText:(BOOL)arg1;
- (BOOL)isPasteFromNotesApp:(id)arg1;
- (id)stringByRemovingObjectReplacementCharacter:(id)arg1;
- (void)resumeRecordingSession;
- (BOOL)isDictating;
- (BOOL)handoverDictationToMinimize;
- (BOOL)resumeDictationSession;
- (id)initWithDelegate:(id)arg1;
- (void)syncTingPlayStateIfNeeded;
- (void)dealloc;
- (void)setCallback:(id)arg1;
- (id)getUnknownAttachmentNativeItem;
- (id)addAttachmentNativeItemWith:(id)arg1;
- (void)clearAttachmentCache;
- (void)registerSessionAttachmentFavData:(id)arg1;
- (id)cachedSessionAttachmentFavData:(id)arg1;
- (id)allSessionAttachmentHtmlIds;
- (id)getRTEAttachmentNativeItem:(id)arg1;
- (id)getFavDataWithAttachmentId:(id)arg1;
- (void)onClickMedia:(id)arg1 index:(int)arg2 needEdit:(BOOL)arg3 originRect:(id)arg4;
- (void)onClickWebPage:(id)arg1;
- (void)onClickLocation:(id)arg1;
- (void)onClickFile:(id)arg1;
- (void)onPlayVoice:(id)arg1 progress:(float)arg2;
- (void)onPauseVoice:(id)arg1;
- (void)onOpenVoicePlayer:(id)arg1;
- (void)_launchTingPlayerForAttachment:(id)arg1 enterFullScreen:(BOOL)arg2;
- (void)onClickExpose;
- (void)onClickMoreBtn;
- (void)onClickLink:(id)arg1;
- (BOOL)isPushed;
- (BOOL)isPresented;
- (id)webviewWCPayScene;
- (void)onCopyContent:(id)arg1 sectionWrap:(id)arg2;
- (id)onCopyAttachment:(id)arg1;
- (id)onPasteAttachment:(id)arg1 hitLastCopyContent:(BOOL)arg2;
- (void)onChangeTranslateLanguage;
- (void)onGeneratedContentFinished:(id)arg1;
- (void)checkCanTranslateContent:(id)arg1;
- (void)reportILogs:(int)arg1 reportContent:(id)arg2;
- (void)setCPPInstance:(id)arg1;
- (void)onCloseMediaDetailsAnimationComplete:(id)arg1;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (CGRect)getOriginImageViewRectWithSimpleImgInfo:(id)arg1;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(id)arg2;
- (void)tryToDownloadVideoWith:(id)arg1;
- (BOOL)isVideoNeedLazyDownload:(id)arg1;
- (void)onFullScreenItemViewShowWithImgInfo:(id)arg1;
- (void)onFullScreenHideAnimationBeginWithSimpleImgInfo:(id)arg1;
- (void)onFullScreenHideAnimationEndWithSimpleImgInfo:(id)arg1 complete:(id /* block */)arg2;
- (void)onFullScreenHideAnimationEndWithSimpleImgInfo:(id)arg1 isRealExit:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)onFullScreenHideAnimationCanceledWithSimpleImgInfo:(id)arg1;
- (void)onFullScreenDidRotateWithSimpleImgInfo:(id)arg1;
- (void)notifyAppearanceTransitionToPresentingVC:(BOOL)arg1;
- (BOOL)needAsyncDoAnimationHideDidStopHandle;
- (void)doCompleteHandle;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnEndPlayWNAudio:(id)arg1;
- (id)_htmlIdFromPlayingAudioId;
- (id)_compositeAudioIdForHtmlId:(id)arg1;
- (void)getCompleteStringAsync:(unsigned long long)arg1 input:(id)arg2 reqId:(id)arg3;
- (void)handleShareToImg:(int)arg1 endIndex:(int)arg2;
- (BOOL)onAITextCommand:(unsigned long long)arg1 selectedRangeLength:(unsigned long long)arg2 selectedText:(id)arg3 command:(id)arg4;
- (void)onAITextCancel;
- (void)onTextUpdateWithResult:(id)arg1 isFinal:(BOOL)arg2;
- (id)cppInstance;
- (void)setCppInstance:(id)arg1;
- (long long)canTranslateContent;
- (void)setCanTranslateContent:(long long)arg1;
- (BOOL)recordingHostedToMinimize;
- (void)setRecordingHostedToMinimize:(BOOL)arg1;
- (BOOL)useNewVoiceCard;
- (void)setUseNewVoiceCard:(BOOL)arg1;
- (BOOL)enableRecordMinimize;
- (void)setEnableRecordMinimize:(BOOL)arg1;
- (BOOL)enableDictationMinimize;
- (void)setEnableDictationMinimize:(BOOL)arg1;
- (id)lastShownImgInfo;
- (void)setLastShownImgInfo:(id)arg1;
- (BOOL)isWaitingForHideAnimationComplete;
- (void)setIsWaitingForHideAnimationComplete:(BOOL)arg1;
- (id)aiTextLogic;
- (void)setAiTextLogic:(id)arg1;
- (void).cxx_destruct;
@end
