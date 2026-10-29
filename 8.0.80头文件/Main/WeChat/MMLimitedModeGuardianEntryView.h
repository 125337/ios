@interface MMLimitedModeGuardianEntryView : MMUIView
{
    MMUIButton * m_button; // +0x8
    MMUILabel * m_titleLabel; // +0x10
    UIImageView * m_arrowView; // +0x18
    MMUILabel * m_descLabel; // +0x20
    id <MMLimitedModeGuardianEntryViewDelegate> _m_delegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)updateWihtDisplayName:(id)arg1;
- (void)clickSetLimitedModeGuardian;
- (id)m_descLabel;
- (void)setM_descLabel:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
