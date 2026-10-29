@interface TranslateRecordMgr : MMUserService <MMServiceProtocol, IMMNewSessionMgrExt, IMsgExt, PBMessageObserverDelegate>
{
    NSMutableDictionary * _dicSessionTransInfos; // +0x8
    NSMutableDictionary * _dicSequenceWaitTask; // +0x10
    NSMutableDictionary * _dicSequenceRunningTask; // +0x18
    unsigned int _sequence; // +0x20
    BOOL _isWorking; // +0x24
}
- (void)stopAllScrollUp:(id)arg1;
- (void)translateRecordItem:(id)arg1;
- (void)retranslateRecordItem:(id)arg1;
- (void)reportTranslationError:(id)arg1;
- (void)tryTranslateRecordItems;
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
- (void)notifyTranslateRecordItemDataMsgChanged:(id)arg1;
- (void)asyncNotifyTranslateRecordItemDataMsgChanged:(id)arg1;
- (void)responseForTransTextResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void).cxx_destruct;
@end

