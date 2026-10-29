@interface AutoTranslateMsgController : MMObject <IAutoTranslateMsgExt, ITranslateMsgMgrExt>
{
    BOOL _bStopTranslateFlag; // +0x8
    id <AutoTranslateMsgDelegate> _delegate; // +0x10
    NSString * _chatName; // +0x18
    unsigned long long _status; // +0x20
    CMessageWrap * _currentMsgWrap; // +0x28
    AutoTranslateMsgReport * _report; // +0x30
    NSMutableArray * _autoTranslateQueue; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)Reset;
- (void)setChatName:(id)arg1;
- (id)currentTranslatingMsg;
- (void)stopAutoTranslate;
- (void)completeLastAutoProcess;
- (void)handleAutoTranslateNext;
- (BOOL)canAutoTranslateMsg:(id)arg1;
- (BOOL)checkMsgExist:(unsigned int)arg1;
- (long long)getMsgIndexWithLocalId:(unsigned int)arg1 viewModels:(id)arg2;
- (void)OnAutoTranslateMsgStart:(id)arg1;
- (void)OnAutoTranslateMsgEnd:(id)arg1;
- (void)OnAutoTranslateMsgFail:(id)arg1;
- (void)OnAutoTranslateMsgStop:(id)arg1;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateMessageChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatName;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (BOOL)bStopTranslateFlag;
- (void)setBStopTranslateFlag:(BOOL)arg1;
- (id)currentMsgWrap;
- (void)setCurrentMsgWrap:(id)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (id)autoTranslateQueue;
- (void)setAutoTranslateQueue:(id)arg1;
- (void).cxx_destruct;
@end

