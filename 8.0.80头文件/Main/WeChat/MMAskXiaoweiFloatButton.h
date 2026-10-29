@interface MMAskXiaoweiFloatButton : UIControl
{
    MMUIView * m_contentView; // +0x8
    MMUIButton * m_bgButton; // +0x10
    MMUIImageView * m_iconView; // +0x18
    MMUILabel * m_titleLabel; // +0x20
}
+ (id)buttonWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)relayoutContent;
- (void)layoutSubviews;
- (void)setContentHighlighted;
- (void)setContentNormal;
- (void)performBgAction;
- (CGSize)preferredSize;
- (void).cxx_destruct;
@end
