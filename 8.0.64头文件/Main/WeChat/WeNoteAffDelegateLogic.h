@interface WeNoteAffDelegateLogic : NSObject <MMImagePickerManagerDelegate, MMPickLocationViewControllerDelegate, IRecordPermissionCheckExt, StreamVoiceInputViewControllerDelegate, WeNoteAddFavListViewControllerDelegate, WCFileBrowseDelegate, WeNoteDictationDelegate, UIDocumentPickerDelegate, FavFullScreenImageViewControllerDelegate, ViewLocationDelegate, MsgRecordFileDetailDelegate, FavForwardLogicDelegate, WeNoteAffDelegateBase, IWNAudioMgrExt>
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
    WeNoteDictationController * m_dictationController; // +0x50
    long long m_pendingAudioAction; // +0x58
    FavFullScreenImageViewController * m_favImageVC; // +0x60
    NSString * m_curFullScreenImageId; // +0x68
    CGRect m_curImgOriginRect; // +0x70
    id /* block */ m_fullScreenImgHideAnimationCompleteHandle; // +0x90
    NSString * m_curPlayingAudioId; // +0x98
    NSMutableDictionary * m_attachmentNativeItemDic; // +0xa0
    WeNoteCPPInstance * _cppInstance; // +0xa8
    long long _canTranslateContent; // +0xb0
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
- (BOOL)onDictationAction:(BOOL)arg1;
- (void)WeNoteDictationWillStart;
- (void)WeNoteDictationUIStateChanged:(int)arg1 withText:(id)arg2;
- (void)WeNoteDictationLevelMeterChanged:(float)arg1;
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
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (BOOL)checkEnablePaste;
- (id)getAttributeInfoListFromClipBoard;
- (id)getAttributeInfoListFromClipBoardWithPureText:(BOOL)arg1;
- (BOOL)isPasteFromNotesApp:(id)arg1;
- (id)stringByRemovingObjectReplacementCharacter:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (id)getUnknownAttachmentNativeItem;
- (id)addAttachmentNativeItemWith:(id)arg1;
- (id)getRTEAttachmentNativeItem:(id)arg1;
- (id)getFavDataWithAttachmentId:(id)arg1;
- (void)onClickMedia:(id)arg1 index:(int)arg2 needEdit:(BOOL)arg3 originRect:(id)arg4;
- (void)onClickLocation:(id)arg1;
- (void)onClickFile:(id)arg1;
- (void)onPlayVoice:(id)arg1 progress:(float)arg2;
- (void)onPauseVoice:(id)arg1;
- (void)onClickExpose;
- (void)onClickMoreBtn;
- (void)onClickLink:(id)arg1;
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
- (BOOL)needAsyncDoAnimationHideDidStopHandle;
- (void)doCompleteHandle;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnEndPlayWNAudio:(id)arg1;
- (id)cppInstance;
- (void)setCppInstance:(id)arg1;
- (long long)canTranslateContent;
- (void)setCanTranslateContent:(long long)arg1;
- (void).cxx_destruct;
@end
