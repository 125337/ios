@interface WCFinderPostingCommentFailBubbleView : WCFinderTimelineBubbleView
{
    id <WCFinderPostingCommentFailBubbleViewDelegate> _delegate; // +0x8
    WCFinderComment * _commentFailInfo; // +0x10
    UIButton * _backGroundButton; // +0x18
    UIImageView * _iconImageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)adjustButtonWidth:(double)arg1;
- (void)clickButtonAction;
- (id)getBubbleBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)commentFailInfo;
- (void)setCommentFailInfo:(id)arg1;
- (id)backGroundButton;
- (void)setBackGroundButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
