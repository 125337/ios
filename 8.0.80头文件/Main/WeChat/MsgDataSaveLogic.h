@interface MsgDataSaveLogic : NSObject <MsgDataDownloadDelegate, UIDocumentPickerDelegate>
{
    id <MsgDataSaveLogicDelegate> m_delegate; // +0x8
    NSMutableDictionary * m_dicMsgDownloading; // +0x10
    NSMutableArray * m_arrMsgToSave; // +0x18
    NSMutableArray * m_arrMsgExpired; // +0x20
    BOOL m_bOK; // +0x28
    BOOL m_bExpired; // +0x29
    BOOL m_bDownloadFail; // +0x2a
    BOOL m_bSaveFail; // +0x2b
    BOOL m_bAllSaved; // +0x2c
    unsigned int m_uiShareForbided; // +0x30
    MMUIViewController * m_fromViewController; // +0x38
    NSURL * m_securityScopedURL; // +0x40
    NSString * m_targetFolderPath; // +0x48
    NSMutableArray * m_arrMsgToSaveToPhone; // +0x50
    NSMutableDictionary * m_dicDownloadingToPhone; // +0x58
    NSMutableArray * m_arrExistFileToPhone; // +0x60
    BOOL m_bSaveToPhoneFail; // +0x68
    id /* block */ m_saveToPhoneCompletion; // +0x70
    id /* block */ m_saveToPhoneFolderPicked; // +0x78
    WeToast * m_startDownloadToast; // +0x80
    long long _scene; // +0x88
    long long _qualityType; // +0x90
    NSMutableArray * _arrSuccMsgs; // +0x98
    NSMutableArray * _arrExistFile; // +0xa0
    NSMutableDictionary * _reportParams; // +0xa8
}
+ (unsigned long long)calculateOriginalSize:(id)arg1;
+ (BOOL)showActionSheetIfNeedBeforeSaveToAlbum:(id)arg1 fromViewController:(id)arg2 onConfirm:(id /* block */)arg3 onCancel:(id /* block */)arg4;
+ (void)showRepeatSaveActionSheetWithTitle:(id)arg1 fromViewController:(id)arg2 onConfirm:(id /* block */)arg3 onCancel:(id /* block */)arg4;
+ (BOOL)isAllMediaSavedToAlbum:(id)arg1 qualityType:(long long)arg2;
+ (BOOL)showActionSheetIfNeedBeforeBatchSaveToAlbum:(id)arg1 qualityType:(long long)arg2 fromViewController:(id)arg3 onConfirm:(id /* block */)arg4 onCancel:(id /* block */)arg5;
+ (BOOL)showActionSheetIfNeedBeforeSaveRecordToAlbum:(id)arg1 dataId:(id)arg2 isVideo:(BOOL)arg3 isOriginal:(BOOL)arg4 fromViewController:(id)arg5 onConfirm:(id /* block */)arg6 onCancel:(id /* block */)arg7;
+ (BOOL)isMediaSavedToAlbum:(id)arg1;
+ (BOOL)isMediaHDSavedToAlbum:(id)arg1;
+ (BOOL)isMediaMiddleSavedToAlbum:(id)arg1;
+ (BOOL)isRepeatSaveExptEnabled;
- (id)initWithDelegate:(id)arg1;
- (void)endLogic;
- (BOOL)saveToAlbum;
- (BOOL)isShowUI;
- (id)imagePath:(id)arg1 forSave:(BOOL)arg2;
- (void)saveMsg:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)saveOneByOne:(id)arg1;
- (void)onSave:(id)arg1;
- (void)onSave:(id)arg1 isShowTip:(BOOL)arg2;
- (void)realityDoSave;
- (id)getSaveTipTitle;
- (void)startDownload;
- (void)cancelLogic;
- (void)checkDownLoadEnd;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (id)localPathForFileMsg:(id)arg1;
- (id)fileNameForFileMsg:(id)arg1;
- (id)buildUniqueFilePathInDir:(id)arg1 fileName:(id)arg2;
- (void)saveMsgFileToPhone:(id)arg1 fromViewController:(id)arg2 folderPicked:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)processSaveToPhone;
- (void)checkSaveToPhoneComplete;
- (void)showSaveToPhoneResultWithSuccessCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (void)cleanupSaveToPhone;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)cancelSaveToPhone;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)qualityType;
- (void)setQualityType:(long long)arg1;
- (id)arrSuccMsgs;
- (void)setArrSuccMsgs:(id)arg1;
- (id)arrExistFile;
- (void)setArrExistFile:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end
