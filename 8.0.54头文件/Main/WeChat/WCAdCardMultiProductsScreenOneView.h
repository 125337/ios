@interface WCAdCardMultiProductsScreenOneView : WCAdCardMultiProductsBaseView
{
    NSString * _title; // +0x20
    NSString * _desc; // +0x28
    MMUILabel * _titleView; // +0x30
    MMUILabel * _descView; // +0x38
    CGPoint _titleOriCenter; // +0x40
    CGPoint _descOriCenter; // +0x50
}
+ (double)calcHeightWithTitle:(id)arg1 desc:(id)arg2 maxWidth:(double)arg3;
+ (id)getDescFontAgainstTitle:(id)arg1;
+ (id)getDescColorAgainstTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2 desc:(id)arg3;
- (void)generateSubviews;
- (void)resizeSubviewsWithSize:(CGSize)arg1;
- (id)titleView;
- (id)descView;
- (id)getObjectsToDisappear;
- (id)getObjectsToAppear;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (CGPoint)titleOriCenter;
- (void)setTitleOriCenter:(CGPoint)arg1;
- (CGPoint)descOriCenter;
- (void)setDescOriCenter:(CGPoint)arg1;
- (void).cxx_destruct;
@end

