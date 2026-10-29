@interface EVFXBlendModeView : UIView
{
    UILabel * m_BlendModeLabel; // +0x8
    int m_BlendModeIndex; // +0x10
    NSArray * m_BlendModeTexts; // +0x18
    NSString * _currentBlendModeText; // +0x20
}
- (id)init;
- (void)initBlendModeText;
- (void)initBlendModeLabel;
- (id)switchBlendMode;
- (id)currentBlendModeText;
- (void).cxx_destruct;
@end

