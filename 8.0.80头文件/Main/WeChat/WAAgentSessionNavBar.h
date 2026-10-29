@interface WAAgentSessionNavBar : UIView
{
    id <WAAgentSessionNavBarDelegate> _delegate; // +0x8
    unsigned long long _backButtonPosition; // +0x10
    unsigned long long _displayMode; // +0x18
    unsigned long long _presentMode; // +0x20
    NSString * _title; // +0x28
    NSString * _iconUrl; // +0x30
    NSString * _subtitle; // +0x38
    MMUIButton * _backButton; // +0x40
    UIView * _titleContainer; // +0x48
    MMWebImageView * _iconImageView; // +0x50
    UILabel * _titleLabel; // +0x58
    UILabel * _subtitleLabel; // +0x60
    double _capsuleCenterY; // +0x68
}
+ (double)fullScreenHeight;
+ (double)pageSheetHeight;
- (double)totalHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 backButtonPosition:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1 backButtonPosition:(unsigned long long)arg2 displayMode:(unsigned long long)arg3 presentMode:(unsigned long long)arg4;
- (void)setupSubviews;
- (void)updateBackButtonImage;
- (void)layoutNavBarElements;
- (void)layoutSubviews;
- (void)setCapsuleCenterY:(double)arg1;
- (void)setBackButtonPosition:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setIconUrl:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)switchToDisplayMode:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)switchToBackButtonPosition:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setBackButtonImage:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)onBackButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)backButtonPosition;
- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (unsigned long long)presentMode;
- (void)setPresentMode:(unsigned long long)arg1;
- (id)title;
- (id)iconUrl;
- (id)subtitle;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleContainer;
- (void)setTitleContainer:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (double)capsuleCenterY;
- (void).cxx_destruct;
@end
