@interface VoiceAutoTranslateHelper : NSObject <VoiceTranslateExt>
{
    id <VoiceAutoTranslateHelperDelegate> m_delegate; // +0x8
    BOOL _bAutoScrollUp; // +0x10
    BOOL _continueTranslate; // +0x11
    VoiceAutoTransReporter * _reporter; // +0x18
    NSMutableArray * _autoTranslateQueue; // +0x20
}
- (id)init;
- (void)translateMsgList;
- (void)StopAutoVoiceTranslate;
- (void)onVoiceStartTranslate:(id)arg1;
- (id)getSortMsgArr;
- (void)AddMessageLocalID:(unsigned int)arg1;
- (void)OnVoiceTranslateStart:(id)arg1;
- (void)OnVoiceTranslateEnd:(id)arg1 StopReason:(int)arg2;
- (void)OnStopAutoScrollUp;
- (void)OnUserScrollView:(id)arg1;
- (unsigned long long)getMsgIndexWithLocalId:(unsigned int)arg1 InArr:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)bAutoScrollUp;
- (void)setBAutoScrollUp:(BOOL)arg1;
- (BOOL)continueTranslate;
- (void)setContinueTranslate:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)autoTranslateQueue;
- (void)setAutoTranslateQueue:(id)arg1;
- (void).cxx_destruct;
@end
