@interface CountDownTipViewController : MMTipsViewController
{
    CADisplayLink * m_timer; // +0x88
    unsigned int m_uiCurrentCount; // +0x90
    id m_userData; // +0x98
    unsigned int m_uiCountDown; // +0xa0
    NSString * m_nsTipViewMessage; // +0xa8
}
- (void)dealloc;
- (void)countDownTip;
- (void)showWithAnimated:(int)arg1;
- (id)m_nsTipViewMessage;
- (void)setM_nsTipViewMessage:(id)arg1;
- (unsigned int)m_uiCountDown;
- (void)setM_uiCountDown:(unsigned int)arg1;
- (id)m_userData;
- (void)setM_userData:(id)arg1;
- (void).cxx_destruct;
@end
