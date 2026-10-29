@interface MsgDataSaveLogic : NSObject <MsgDataDownloadDelegate>
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
    BOOL _saveToAlbum; // +0x34
}
- (id)initWithDelegate:(id)arg1;
- (void)endLogic;
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
- (BOOL)saveToAlbum;
- (void)setSaveToAlbum:(BOOL)arg1;
- (void).cxx_destruct;
@end

