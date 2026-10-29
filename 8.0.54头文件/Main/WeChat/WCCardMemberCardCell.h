@interface WCCardMemberCardCell : WCCardMultiMenuCollectionViewCell <MMWebImageViewDelegate>
{
    unsigned int _layoutType; // +0x3c
    NSString * _backImageURL; // +0x40
    UIColor * _backColor; // +0x48
    NSString * _iconURL; // +0x50
    NSString * _topText; // +0x58
    NSString * _bottomText; // +0x60
    NSString * _tagText; // +0x68
    MMWebImageView * _backImageView; // +0x70
    UIImageView * _backDefaulImageView; // +0x78
    UIImage * _defaulDefaulImage; // +0x80
    MMWebImageView * _iconImageView; // +0x88
    UILabel * _topLabel; // +0x90
    UILabel * _bottomLabel; // +0x98
    UIButton * _tagButton; // +0xa0
    UIView * _highlightView; // +0xa8
    CAGradientLayer * _gradientLayer; // +0xb0
    UIView * _iconBgView; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)confiUI;
- (id)scaleToTop:(id)arg1 scale:(double)arg2;
- (id)scaleToBottom:(id)arg1 scale:(double)arg2;
- (id)backDefaulImageView;
- (id)defaulDefaulImage;
- (id)backImageView;
- (id)gradientLayer;
- (id)iconImageView;
- (id)iconBgView;
- (id)topLabel;
- (id)bottomLabel;
- (id)tagButton;
- (id)highlightView;
- (void)setBackImageURL:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setTopText:(id)arg1;
- (void)setBottomText:(id)arg1;
- (void)setTagText:(id)arg1;
- (void)setLayoutType:(unsigned int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)backImageURL;
- (id)backColor;
- (id)iconURL;
- (id)topText;
- (id)bottomText;
- (unsigned int)layoutType;
- (id)tagText;
- (void)setBackImageView:(id)arg1;
- (void)setBackDefaulImageView:(id)arg1;
- (void)setDefaulDefaulImage:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setBottomLabel:(id)arg1;
- (void)setTagButton:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setIconBgView:(id)arg1;
- (void).cxx_destruct;
@end

