@interface WCAdCardDescriptionView : UIView
{
    BOOL _isAnimating; // +0x8
    NSArray * _descriptionItems; // +0x10
    long long _buttonStyle; // +0x18
    NSMutableArray * _descriptionViews; // +0x20
}
+ (double)getHeightForItems:(id)arg1 maxWidth:(double)arg2 buttonStyle:(long long)arg3;
+ (BOOL)hasDescriptionIconForItems:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 descriptionItems:(id)arg2 buttonStyle:(long long)arg3;
- (void)generateItemViews;
- (BOOL)hasDescriptionIcon;
- (void)switchToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)descriptionItems;
- (void)setDescriptionItems:(id)arg1;
- (long long)buttonStyle;
- (void)setButtonStyle:(long long)arg1;
- (id)descriptionViews;
- (void)setDescriptionViews:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
