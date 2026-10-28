@interface TranslateMsgMgr : MMUserService <MMServiceProtocol, IMMNewSessionMgrExt, IMsgExt, PBMessageObserverDelegate>
{
    NSMutableDictionary * _dicSessionTransInfos; // +0x8
    NSMutableDictionary * _dicSequenceWaitTask; // +0x10
    NSMutableDictionary * _dicSequenceRunningTask; // +0x18
    unsigned int _sequence; // +0x20
    BOOL _isWorking; // +0x24
}
+ (BOOL)hideLoadingOn;
- (void)changeLanguageAndCleanAllCache;
- (void)stopAllScrollUp:(id)arg1;
- (id)getRealContentWithMsg:(id)arg1;
- (void)translateMsg:(id)arg1;
- (void)translateMsg:(id)arg1 translateNow:(BOOL)arg2 hideLoading:(BOOL)arg3;
- (void)tryTranslateMsgs;
- (void)retranslateMsg:(id)arg1;
- (void)reportTranslationError:(id)arg1 errorType:(unsigned int)arg2;
- (id)getTranslateInfo:(id)arg1;
- (BOOL)showTranslatedTextNow:(id)arg1;
- (BOOL)taskInQueue:(id)arg1;
- (id)pathForSessionTransInfos:(id)arg1;
- (void)loadSessionTransInfos:(id)arg1;
- (void)saveSessionTransInfos:(id)arg1;
- (void)resetTranslatingStatus:(id)arg1;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)notifyTranslateMsgChanged:(id)arg1;
- (void)asyncNotifyTranslateMsgChanged:(id)arg1;
- (void)responseForTransTextResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)removeAllCacheForUsr:(id)arg1;
- (void).cxx_destruct;
@end
