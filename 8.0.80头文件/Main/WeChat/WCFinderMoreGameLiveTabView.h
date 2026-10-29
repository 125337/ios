@interface WCFinderMoreGameLiveTabView : UIView <MMWebImageViewDelegate, WCFinderTabViewProtocol>
{
    unsigned int _bindTabId; // +0x8
    id <WCFinderTabViewDelegate> delegate; // +0x10
    UIColor * _normalColor; // +0x18
    UIColor * _selectedColor; // +0x20
    NSString * _iconUrl; // +0x28
    NSArray * _textColors; // +0x30
    UIView * _containerView; // +0x38
    MMLiveColorfulLabel * _titleLabel; // +0x40
    NSString * _bindPath; // +0x48
    UIView * _redDotView; // +0x50
    double _fontSize; // +0x58
    MMWebImageView * _iconImage; // +0x60
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)setTitleText:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setNormalColor:(id)arg1;
- (void)setIconUrl:(id)arg1;
- (void)setTextColors:(id)arg1;
- (BOOL)isRedDotViewHidden;
- (BOOL)isIconImageHidden;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)layoutUIMargin;
- (id)titleLabel;
- (id)iconImage;
- (id)containerView;
- (void)updateForState:(unsigned long long)arg1;
- (void)setBindRedDotPath:(id)arg1;
- (void)setBindTabId:(unsigned int)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)processRedDotView;
- (void)onLoadImageOK:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)normalColor;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (id)iconUrl;
- (id)textColors;
- (void)setContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)bindPath;
- (void)setBindPath:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (double)fontSize;
- (unsigned int)bindTabId;
- (void)setIconImage:(id)arg1;
- (void).cxx_destruct;
@end
