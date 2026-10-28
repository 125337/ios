@interface WCPayPayAuthNativeCgi : NSObject <PBMessageObserverDelegate>
{
    unsigned int _m_scene; // +0x8
    unsigned int _m_channel; // +0xc
    unsigned int _m_sourceType; // +0x10
    unsigned int _m_A8keyScene; // +0x14
    NSString * _m_url; // +0x18
    NSString * _m_sourceInfo; // +0x20
    id <WCPayPayAuthNativeCgiDelegate> _m_delegate; // +0x28
    WCPayIdKeyRegularReporter * _m_cgiReporter; // +0x30
}
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)callErrorDelegate;
- (void)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_url;
- (void)setM_url:(id)arg1;
- (unsigned int)m_scene;
- (void)setM_scene:(unsigned int)arg1;
- (unsigned int)m_channel;
- (void)setM_channel:(unsigned int)arg1;
- (unsigned int)m_sourceType;
- (void)setM_sourceType:(unsigned int)arg1;
- (id)m_sourceInfo;
- (void)setM_sourceInfo:(id)arg1;
- (unsigned int)m_A8keyScene;
- (void)setM_A8keyScene:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_cgiReporter;
- (void)setM_cgiReporter:(id)arg1;
- (void).cxx_destruct;
@end
