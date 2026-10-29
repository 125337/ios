@interface VoipAutoUpdateLabel : MMUILabel
{
    unsigned int m_dotCountIncresement; // +0x8
    MMTimer * m_actingTimer; // +0x10
    NSString * m_baseText; // +0x18
}
- (void)dealloc;
- (void)setM_baseText:(id)arg1;
- (void)autoUpdateString;
- (void)clearActingTimer;
- (id)m_actingTimer;
- (void)setM_actingTimer:(id)arg1;
- (unsigned int)m_dotCountIncresement;
- (void)setM_dotCountIncresement:(unsigned int)arg1;
- (id)m_baseText;
- (void).cxx_destruct;
@end
