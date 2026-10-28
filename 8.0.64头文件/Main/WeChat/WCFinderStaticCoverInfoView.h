@interface WCFinderStaticCoverInfoView : UIView
{
    BOOL _showSeparate; // +0x8
    BOOL _forbidCorner; // +0x9
    UIColor * _blurColor; // +0x10
    UIColor * _titleColor; // +0x18
    UIColor * _seperateColor; // +0x20
    double _seperatorPadding; // +0x28
    NSArray * _rightItems; // +0x30
    NSArray * _leftItems; // +0x38
    NSMutableArray * _itemViews; // +0x40
    NSMutableArray * _separateViews; // +0x48
    UIView * _blurView; // +0x50
    UIView * _placeholderView; // +0x58
    CGSize _lastLayoutSize; // +0x60
    UIEdgeInsets _contentInsets; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (id)allItems;
- (void)setLeftItems:(id)arg1;
- (void)setRightItems:(id)arg1;
- (void)setLeftItems:(id)arg1 rightItems:(id)arg2;
- (id)checkItems:(id)arg1;
- (void)setShowSeparate:(BOOL)arg1;
- (void)setBlurColor:(id)arg1;
- (void)layoutSubviews;
- (void)doLayout;
- (BOOL)needRoundCorner;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)createAccessibilityLabelForItems;
- (BOOL)showSeparate;
- (id)blurColor;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)seperateColor;
- (void)setSeperateColor:(id)arg1;
- (double)seperatorPadding;
- (void)setSeperatorPadding:(double)arg1;
- (UIEdgeInsets)contentInsets;
- (id)rightItems;
- (id)leftItems;
- (BOOL)forbidCorner;
- (void)setForbidCorner:(BOOL)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)separateViews;
- (void)setSeparateViews:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)placeholderView;
- (void)setPlaceholderView:(id)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
