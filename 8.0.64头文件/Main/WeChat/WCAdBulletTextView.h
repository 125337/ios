@interface WCAdBulletTextView : MMUIView
{
    NSString * _bulletText; // +0x8
    WCAdBulletScreenTextStyleInfo * _bulletTextStyle; // +0x10
    MMUILabel * _bulletTextLabel; // +0x18
}
+ (CGSize)calcBulletTextViewSizeWithBulletText:(id)arg1 font:(id)arg2;
+ (id)fetchBulletTextFontWithTextStyle:(id)arg1;
+ (id)fetchBulletTextColorWithTextStyle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 bulletText:(id)arg2 bulletTextStyle:(id)arg3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)bulletTextLabel;
- (id)bulletText;
- (void)setBulletText:(id)arg1;
- (id)bulletTextStyle;
- (void)setBulletTextStyle:(id)arg1;
- (void)setBulletTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
