@interface TypingController : NSObject <MessageObserverDelegate, IUploadVoiceExt, IMsgExt>
{
    unsigned int m_uLastSendTypingTime; // +0x8
    CBaseContact * m_contact; // +0x10
    NSString * m_nsLastTextViewText; // +0x18
    id <TypingControllerDelgate> m_delegate; // +0x20
    MMTimer * m_receiveTypingTimer; // +0x28
    unsigned int m_uLastReveicedMsgTime; // +0x30
    unsigned int m_uChatStatus; // +0x34
    BOOL m_bFirstTyping; // +0x38
    _NSRange _m_LastMarkedRange; // +0x40
}
- (id)init;
- (void)Register;
- (void)UnRegister;
- (BOOL)IsNeedTyping;
- (BOOL)sendChatStatusInternal:(unsigned int)arg1;
- (void)trySendClearTyping;
- (void)trySendTyping:(int)arg1;
- (void)onTextChange:(id)arg1 markedRange:(_NSRange)arg2;
- (void)updateTitle:(int)arg1;
- (void)startReceiveTypingTimer;
- (void)stopReceiveTypingTimer;
- (void)onReceiveTypingTimer:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)Reset;
- (void)dealloc;
- (void)OnUploadVoiceOK:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_nsLastTextViewText;
- (void)setM_nsLastTextViewText:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_receiveTypingTimer;
- (void)setM_receiveTypingTimer:(id)arg1;
- (unsigned int)m_uLastReveicedMsgTime;
- (void)setM_uLastReveicedMsgTime:(unsigned int)arg1;
- (_NSRange)m_LastMarkedRange;
- (void)setM_LastMarkedRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end

