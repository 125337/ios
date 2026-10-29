@interface MMMsgTipsExpandMultiHeadCardView : UIView
{
    id <MMMsgTipsExpandMultiHeadCardViewDelegate> _delegate; // +0x8
    UIColor * _cardBackgroundColor; // +0x10
    id _userData; // +0x18
    UIView * _cardView; // +0x20
    UIView * _headImageContainerView; // +0x28
    NSMutableArray * _headImageViewList; // +0x30
    UIView * _separatorLineView; // +0x38
    UIButton * _button; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setupLayout;
- (void)setCardBackgroundColor:(id)arg1;
- (void)updateUserList:(id)arg1 buttonTitle:(id)arg2;
- (void)onButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardBackgroundColor;
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
- (void).cxx_destruct;
@end

