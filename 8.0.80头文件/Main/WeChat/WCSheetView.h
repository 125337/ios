@interface WCSheetView : UIScrollView
{
    BOOL _fixedWidth; // +0x8
    double _contentWidth; // +0x10
    double _minimumMainBottomSpacing; // +0x18
    NSMutableArray * _privateComponentViews; // +0x20
    NSMutableDictionary * _viewToAttributes; // +0x28
    UIEdgeInsets _insets; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)appendComponentView:(id)arg1;
- (void)appendComponentView:(id)arg1 ofType:(unsigned long long)arg2;
- (id)componentViews;
- (void)removeComponentView:(id)arg1;
- (void)removeAllComponentViews;
- (void)setInsets:(UIEdgeInsets)arg1;
- (void)setInsets:(UIEdgeInsets)arg1 forView:(id)arg2;
- (void)setFixedWidth:(BOOL)arg1;
- (void)setFixedWidth:(BOOL)arg1 forView:(id)arg2;
- (void)setUseSystemLayoutSizeFittingSize:(BOOL)arg1 forView:(id)arg2;
- (void)setAlignment:(unsigned long long)arg1 forView:(id)arg2;
- (void)layoutSubviews;
- (CGSize)calViewSizeThatFits:(CGSize)arg1 forView:(id)arg2 attributes:(id)arg3;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (double)minimumMainBottomSpacing;
- (void)setMinimumMainBottomSpacing:(double)arg1;
- (UIEdgeInsets)insets;
- (BOOL)fixedWidth;
- (id)privateComponentViews;
- (void)setPrivateComponentViews:(id)arg1;
- (id)viewToAttributes;
- (void)setViewToAttributes:(id)arg1;
- (void).cxx_destruct;
@end
