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
    long long _scene; // +0x38
    NSMutableArray * _arrSuccMsgs; // +0x40
    NSMutableArray * _arrExistFile; // +0x48
}
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
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)arrSuccMsgs;
- (void)setArrSuccMsgs:(id)arg1;
- (id)arrExistFile;
- (void)setArrExistFile:(id)arg1;
- (void).cxx_destruct;
@end
