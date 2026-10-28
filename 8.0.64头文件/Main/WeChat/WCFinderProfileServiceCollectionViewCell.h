@interface WCFinderProfileServiceCollectionViewCell : UICollectionViewCell
{
    WCFinderDyeWebImageView * _imageView; // +0x8
    UILabel * _label; // +0x10
    UIImageView * _tailIcon; // +0x18
    id /* block */ _tailIconObserver; // +0x20
}
+ (CGSize)calculateDisplaySize:(CGSize)arg1;
+ (id)jumpInfoTailIcon:(id)arg1;
+ (BOOL)hasEnoughMarginWithJumpInfo:(id)arg1 maxWidth:(double)arg2;
+ (CGSize)displaySizeInContainerSize:(CGSize)arg1 itemPadding:(double)arg2 lineElementCount:(long long)arg3;
+ (CGSize)sizeThatFitForJumpInfo:(id)arg1;
+ (CGSize)tailIconSizeFromJumpInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithFinderJumpInfo:(id)arg1 themeColor:(id)arg2;
- (void)updateMargin;
- (id)imageView;
- (id)label;
- (void)addTailIconObserver:(id /* block */)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)tailIcon;
- (void)setTailIcon:(id)arg1;
- (id /* block */)tailIconObserver;
- (void)setTailIconObserver:(id /* block */)arg1;
- (void).cxx_destruct;
@end
