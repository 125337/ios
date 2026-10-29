@interface TLProfileDragDownView : UIView
{
    id <TLProfileDragDownViewDelegate> _delegate; // +0x8
    CContact * _contact; // +0x10
    TLProfileModel * _tlProfile; // +0x18
    UIView * _containerView; // +0x20
    MMUIButton * _headButton; // +0x28
    UIView * _headImageView; // +0x30
    UILabel * _titleLabel; // +0x38
    MMUIButton * _detailButton; // +0x40
    MMUIButton * _toolButton; // +0x48
    MMUIButton * _toolButtonIcon; // +0x50
    UILabel * _toolButtonLabel; // +0x58
    TLProfileLikeButton * _likeButton; // +0x60
    RichTextView * _descTextView; // +0x68
    UIView * _moreContainerView; // +0x70
    MMUIButton * _moreButton; // +0x78
    CAGradientLayer * _gradientLayer; // +0x80
}
- (id)initWithDelegate:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)initContainerView;
- (void)initMoreContainerView;
- (void)initGradientLayer;
- (void)updateWithContact:(id)arg1 profileModel:(id)arg2;
- (void)setContact:(id)arg1;
- (void)setTlProfile:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsInContainerView;
- (void)layoutSubviewsInMoreContainerView;
- (void)onTapMoreButton;
- (void)onTapDetailButton;
- (void)onTapHeadButton;
- (void)onTapChangeCover;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (id)tlProfile;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headButton;
- (void)setHeadButton:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)toolButton;
- (void)setToolButton:(id)arg1;
- (id)toolButtonIcon;
- (void)setToolButtonIcon:(id)arg1;
- (id)toolButtonLabel;
- (void)setToolButtonLabel:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (id)moreContainerView;
- (void)setMoreContainerView:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

