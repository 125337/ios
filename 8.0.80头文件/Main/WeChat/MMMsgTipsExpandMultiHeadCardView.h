@interface MMMsgTipsExpandMultiHeadCardView : UIView
{
    id <MMMsgTipsExpandMultiHeadCardViewDelegate> _delegate; // +0x8
    UIColor * _cardBackgroundColor; // +0x10
    NSString * _tipText; // +0x18
    id _userData; // +0x20
    UIView * _cardView; // +0x28
    UIView * _headImageContainerView; // +0x30
    NSMutableArray * _headImageViewList; // +0x38
    UIView * _separatorLineView; // +0x40
    UIButton * _button; // +0x48
    MMUILabel * _tipLabel; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)setTipText:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setupLayout;
- (void)setCardBackgroundColor:(id)arg1;
- (void)updateUserList:(id)arg1 buttonTitle:(id)arg2;
- (void)onButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardBackgroundColor;
- (id)tipText;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)headImageContainerView;
- (void)setHeadImageContainerView:(id)arg1;
- (id)headImageViewList;
- (void)setHeadImageViewList:(id)arg1;
- (id)separatorLineView;
- (void)setSeparatorLineView:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
