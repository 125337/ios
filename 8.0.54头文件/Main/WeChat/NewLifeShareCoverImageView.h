@interface NewLifeShareCoverImageView : UIView
{
    NewLifeShareCoverImageViewModel * _viewModel; // +0x8
    UIView * _highlightedMaskView; // +0x10
    MMWebImageView * _contentImageView; // +0x18
    WCFinderHeadImageView * _avatarImageView; // +0x20
    UILabel * _nameLabel; // +0x28
    RichTextView * _descLabel; // +0x30
    MMUIButton * _photoButton; // +0x38
    UIView * _photoMaskView; // +0x40
    CALayer * _bottomGradientLayer; // +0x48
    NewLifeRedPacketActivityView * _redPacketView; // +0x50
}
- (id)initWithViewModel:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)initSubviews;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (id)highlightedMaskView;
- (id)photoButton;
- (id)photoMaskView;
- (CGRect)getCoverCropRect:(BOOL)arg1;
- (id)contentImageView;
- (id)avatarImageView;
- (id)nameLabel;
- (id)descLabel;
- (id)redPacketView;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setHighlightedMaskView:(id)arg1;
- (void)setContentImageView:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setPhotoButton:(id)arg1;
- (void)setPhotoMaskView:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setRedPacketView:(id)arg1;
- (void).cxx_destruct;
@end

