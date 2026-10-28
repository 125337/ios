@interface WCFinderSimpleFeedbackView : UIView
{
    id <WCFinderSimpleFeedbackViewDelegate> _delegate; // +0x8
    WCFinderJumpInfo * _descriptionJumpInfo; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descriptionLabel; // +0x20
    UILabel * _tipsLabel; // +0x28
    UIButton * _likeButton; // +0x30
    UIButton * _dislikeButton; // +0x38
    UIView * _separateLine; // +0x40
    UIButton * _complainButton; // +0x48
    double _maxWidth; // +0x50
}
- (id)initWithMaxWidth:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setDescriptionJumpInfo:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)updateFlexLayout;
- (id)genActionButtonWithTitle:(id)arg1 imageName:(id)arg2;
- (void)onClickLikeButton:(id)arg1;
- (void)onClickDislikeButton:(id)arg1;
- (void)onClickComplainButton:(id)arg1;
- (void)onClickDescrptionJumpInfo;
- (id)titleLabel;
- (id)descriptionLabel;
- (id)tipsLabel;
- (id)likeButton;
- (id)dislikeButton;
- (id)separateLine;
- (id)complainButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)descriptionJumpInfo;
- (void)setTitleLabel:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setLikeButton:(id)arg1;
- (void)setDislikeButton:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (void)setComplainButton:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
