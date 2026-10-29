@interface WCPaySynthesizeSpeechCgi : NSObject <PBMessageObserverDelegate>
{
    id <WCPaySynthesizeSpeechCgiDelegate> _m_delegate; // +0x8
    NSMutableDictionary * _m_dictSpeechMsg; // +0x10
    NSMutableDictionary * _m_dictCGIRequestBeginTime; // +0x18
}
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)startRequestWithSynthesizeSpeechMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dictSpeechMsg;
- (void)setM_dictSpeechMsg:(id)arg1;
- (id)m_dictCGIRequestBeginTime;
- (void)setM_dictCGIRequestBeginTime:(id)arg1;
- (void).cxx_destruct;
@end

