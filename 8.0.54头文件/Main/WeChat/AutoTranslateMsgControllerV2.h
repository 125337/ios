@interface AutoTranslateMsgControllerV2 : MMObject <ITranslateMsgMgrExt, BaseMsgViewControllerExt, IMsgExt>
{
    BOOL _bStopTranslateFlag; // +0x8
    id <AutoTranslateMsgDelegate> _delegate; // +0x10
    NSString * _chatName; // +0x18
    NSMutableArray * _currentTranslatingMsgs; // +0x20
    unsigned long long _translatingMsgsCount; // +0x28
}
- (id)init;
- (void)setChatName:(id)arg1;
- (void)startAutoTranslate;
- (void)stopAutoTranslate;
- (void)autoTranslateNextBatchMsg;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onTranslateMessageWillHandleResponse;
- (void)onExitBaseMsgSession:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatName;
- (id)currentTranslatingMsgs;
- (void)setCurrentTranslatingMsgs:(id)arg1;
- (unsigned long long)translatingMsgsCount;
- (void)setTranslatingMsgsCount:(unsigned long long)arg1;
- (BOOL)bStopTranslateFlag;
- (void)setBStopTranslateFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

