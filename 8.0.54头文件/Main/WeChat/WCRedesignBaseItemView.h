@interface WCRedesignBaseItemView : UIView
{
    BOOL _disableDefaultAccessibility; // +0x8
    unsigned int _separators; // +0xc
    WCRedesignBaseItem * _item; // +0x10
    MMUIButton * _backgroundButton; // +0x18
    NSString * _title; // +0x20
    MMUILabel * _titleLabel; // +0x28
    UIView * _contentView; // +0x30
    UIView * _topSeparator; // +0x38
    UIView * _bottomSeparator; // +0x40
}
+ (double)standardHeight;
+ (id)generateSeparator;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setDisableDefaultAccessibility:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setSeparators:(unsigned int)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)shouldBreakLineForMaxTitleWidth:(double)arg1;
- (unsigned long long)numberOfLinesForWidth:(double)arg1;
- (BOOL)isBreakLine;
- (id)topSeparator;
- (id)bottomSeparator;
- (void)onTapBackground;
- (BOOL)disableDefaultAccessibility;
- (id)item;
- (void)setItem:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (unsigned int)separators;
- (void)setTopSeparator:(id)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void).cxx_destruct;
@end

