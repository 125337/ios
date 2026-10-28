@interface WCCardPkgCellView : MMUIView <MMWebImageViewDelegate>
{
    BOOL _bMemberCard; // +0x8
    unsigned int _layoutType; // +0xc
    NSString * _backImageURL; // +0x10
    NSString * _iconURL; // +0x18
    NSString * _topText; // +0x20
    NSString * _bottomText; // +0x28
    UIColor * _topTextColor; // +0x30
    UIColor * _bottomTextColor; // +0x38
    NSString * _tagText; // +0x40
    WCCardData * _cardData; // +0x48
    MMWebImageView * _backImageView; // +0x50
    UIImageView * _backDefaulImageView; // +0x58
    UIImage * _defaulDefaulImage; // +0x60
    MMWebImageView * _iconImageView; // +0x68
    UILabel * _topLabel; // +0x70
    UILabel * _bottomLabel; // +0x78
    UIButton * _tagButton; // +0x80
    CAGradientLayer * _gradientLayer; // +0x88
    UIView * _iconBgView; // +0x90
}
+ (double)itemViewHieght;
+ (double)CardItemViewTopHeight;
- (id)initWithCardData:(id)arg1;
- (void)layoutSubviews;
- (void)confiUI;
- (id)getBrandColor;
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
- (void)setBackImageURL:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setTopText:(id)arg1;
- (void)setBottomText:(id)arg1;
- (void)setTagText:(id)arg1;
- (void)setLayoutType:(unsigned int)arg1;
- (void)setTopTextColor:(id)arg1;
- (void)setBottomTextColor:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)backImageURL;
- (id)iconURL;
- (id)topText;
- (id)bottomText;
- (unsigned int)layoutType;
- (id)topTextColor;
- (id)bottomTextColor;
- (id)tagText;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (BOOL)bMemberCard;
- (void)setBMemberCard:(BOOL)arg1;
- (void)setBackImageView:(id)arg1;
- (void)setBackDefaulImageView:(id)arg1;
- (void)setDefaulDefaulImage:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setBottomLabel:(id)arg1;
- (void)setTagButton:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setIconBgView:(id)arg1;
- (void).cxx_destruct;
@end
