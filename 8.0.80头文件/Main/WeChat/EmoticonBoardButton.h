@interface EmoticonBoardButton : EmoticonViewWithPreview
{
    MMBadgeView * m_badgeView; // +0x10
    UIImageView * m_effectView; // +0x18
    UIImage * m_buttonImage; // +0x20
    unsigned long long m_type; // +0x28
}
- (void)initView;
- (void)showPreview;
- (void)showFocusView;
- (void)hideFocusView;
- (void)hidePreview;
- (void)configBadge;
- (void)updateDesc;
- (void)setButtonImage:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)showNewYearEffect;
- (void)hideNewYearEffect;
- (id)accessibilityLabel;
- (id)buttonImage;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
