@interface WeNoteFlutterQuickVCLogic : NSObject <WeNoteAffLogicDelegate>
{
    BOOL _isSessionReady; // +0x8
    unsigned int _maxObjectId; // +0xc
    NSString * _sessionId; // +0x10
    NSString * _identifierId; // +0x18
    WeNoteAffDelegateLogic * _affDelegateLogic; // +0x20
    WeNoteFlutterInstance * _flutterInstance; // +0x28
    MMFlutterInstance * _mmFlutterInstance; // +0x30
    id /* block */ _sessionCompletionBlock; // +0x38
    unsigned long long _maxFileSize; // +0x40
    WeNoteQuickAffDelegateLogic * _quickAffDelegateLogic; // +0x48
}
- (id)initWithIdentifierId:(id)arg1;
- (void)dealloc;
- (void)createSessionWithCompletion:(id /* block */)arg1;
- (void)checkZidlImplReadyWithCompleteHandle:(id /* block */)arg1;
- (void)realCreateSession;
- (void)initEmptyDocument;
- (void)destroySession;
- (id)favItem;
- (id)messageWrap;
- (id)wcDataItem;
- (unsigned long long)scene;
- (BOOL)bEditable;
- (id)viewController;
- (int)enterNoteScene;
- (id)reportLogic;
- (id)wnFlutterInstance;
- (void)tryToDownloadVideoWith:(id)arg1;
- (BOOL)isVideoNeedLazyDownload:(id)arg1;
- (void)onClickMoreBtn;
- (void)setPopGestureEnable:(BOOL)arg1;
- (void)insertDatas:(id)arg1;
- (void)insertText:(id)arg1;
- (void)holdOnAudio;
- (unsigned long long)getMaxFileSize;
- (id)genAttachmentId;
- (BOOL)checkCompressImageForFavData:(id)arg1;
- (void)setEdgeGestureEnable:(BOOL)arg1;
- (void)buildFavItemAsyncWithCompletion:(id /* block */)arg1;
- (id)buildFavItemFromSaveNoteResult:(id)arg1 attributeInfoDataList:(id)arg2 isMarkdown:(BOOL)arg3;
- (void)saveNoteWithCompletion:(id /* block */)arg1;
- (void)buildFavItemForExpandWithCompletion:(id /* block */)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)identifierId;
- (void)setIdentifierId:(id)arg1;
- (BOOL)isSessionReady;
- (void)setIsSessionReady:(BOOL)arg1;
- (id)affDelegateLogic;
- (void)setAffDelegateLogic:(id)arg1;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)mmFlutterInstance;
- (void)setMmFlutterInstance:(id)arg1;
- (id /* block */)sessionCompletionBlock;
- (void)setSessionCompletionBlock:(id /* block */)arg1;
- (unsigned int)maxObjectId;
- (void)setMaxObjectId:(unsigned int)arg1;
- (unsigned long long)maxFileSize;
- (void)setMaxFileSize:(unsigned long long)arg1;
- (id)quickAffDelegateLogic;
- (void)setQuickAffDelegateLogic:(id)arg1;
- (void).cxx_destruct;
@end
