@interface WCFinderTLTabButton : MMUIButton
{
    BOOL _shouldShowLeftIcon; // +0x8
    id <WCFinderTLTabButtonDelegate> _delegate; // +0x10
    unsigned long long _category; // +0x18
    NSString * _iconUrl; // +0x20
    NSURL * _leftIconUrl; // +0x28
    WCFinderRedDotTipsShowInfo * _redDotInfo; // +0x30
    double _selectedValue; // +0x38
    double _bottomLineExpectExtWidth; // +0x40
    long long _refreshStyle; // +0x48
    MMBadgeView * _redDotView; // +0x50
    UILabel * _redDotTextField; // +0x58
    UIImageView * _liveIconView; // +0x60
    long long _imageStyle; // +0x68
    UILabel * _rightLabel; // +0x70
    UIImageView * _avatarView; // +0x78
    UIImage * _avatarImage; // +0x80
    NSString * _leftIconText; // +0x88
    UIColor * _normalColor; // +0x90
    UIColor * _highlightColor; // +0x98
    WCFinderAnimationLoadingView * _loadingView; // +0xa0
    CGSize _iconSize; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)loadingView;
- (void)setLeftIconUrl:(id)arg1;
- (void)setLeftIcon:(id)arg1 withText:(id)arg2;
- (void)setButtonNormalColor:(id)arg1 highlightColor:(id)arg2;
- (void)setAvatarImage:(id)arg1;
- (void)cleanLeftAvatarImage;
- (void)setRefreshWithImageStyle:(long long)arg1 refreshStyle:(long long)arg2;
- (void)cleanRefreshState;
- (void)setIconWithImageStyle:(long long)arg1 selectedIcon:(id)arg2 normalIcon:(id)arg3;
- (void)setRedDotInfo:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setFontSize:(double)arg1;
- (double)fontSize;
- (void)onButtonDidChangedSelectedFinish;
- (void)setSelectedValue:(double)arg1;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)doLayout;
- (void)layoutAddedImageView:(id)arg1 addedImageSize:(CGSize)arg2 imageTitlePadding:(double)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)category;
- (void)setCategory:(unsigned long long)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)leftIconUrl;
- (id)redDotInfo;
- (double)selectedValue;
- (double)bottomLineExpectExtWidth;
- (void)setBottomLineExpectExtWidth:(double)arg1;
- (BOOL)shouldShowLeftIcon;
- (void)setShouldShowLeftIcon:(BOOL)arg1;
- (long long)refreshStyle;
- (void)setRefreshStyle:(long long)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)redDotTextField;
- (void)setRedDotTextField:(id)arg1;
- (id)liveIconView;
- (void)setLiveIconView:(id)arg1;
- (long long)imageStyle;
- (void)setImageStyle:(long long)arg1;
- (id)rightLabel;
- (void)setRightLabel:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)avatarImage;
- (id)leftIconText;
- (void)setLeftIconText:(id)arg1;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

