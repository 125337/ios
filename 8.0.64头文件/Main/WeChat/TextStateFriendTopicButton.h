@interface TextStateFriendTopicButton : MMUIButton
{
    BOOL _hasSmallReddot; // +0x8
    unsigned int _notifiesCount; // +0xc
    long long _buttonStyle; // +0x10
    NSMutableArray * _headImageViews; // +0x18
    UIImageView * _textStateIconView; // +0x20
    UILabel * _textLabel; // +0x28
    MMBadgeView * _reddotView; // +0x30
}
+ (id)defaultButton;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)updateContent;
- (id)accessibilityLabel;
- (id)firstHeadImageUsername;
- (double)widthToFit:(double)arg1;
- (void)layoutSubviews;
- (void)generateHeadImageViewsWith:(id)arg1;
- (id)generateHeadImageView;
- (unsigned int)notifiesCount;
- (void)setNotifiesCount:(unsigned int)arg1;
- (BOOL)hasSmallReddot;
- (void)setHasSmallReddot:(BOOL)arg1;
- (long long)buttonStyle;
- (void)setButtonStyle:(long long)arg1;
- (id)headImageViews;
- (void)setHeadImageViews:(id)arg1;
- (id)textStateIconView;
- (void)setTextStateIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)reddotView;
- (void)setReddotView:(id)arg1;
- (void).cxx_destruct;
@end
