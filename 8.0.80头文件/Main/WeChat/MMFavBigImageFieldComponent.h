@interface MMFavBigImageFieldComponent : MMComponent <MMFavMultiSelectLayoutAdaptable>
{
    BOOL _hasOriginalMultiSelectFrame; // +0x10
    NSMutableArray * _originalImageFrames; // +0x18
    CGRect _originalMultiSelectFrame; // +0x20
}
+ (double)calHeightWithComData:(id)arg1;
+ (double)getShortenWidthForStyle:(unsigned long long)arg1;
+ (double)multiSelectImageHeightForImageCount:(unsigned long long)arg1 contentWidth:(double)arg2;
- (id)displayedImageComponents;
- (unsigned long long)displayedImageCount;
- (id)displayedImageViewAtIndex:(unsigned long long)arg1;
- (void)applyMultiSelectLayoutContext:(struct)arg1;
- (void)restoreMultiSelectLayout;
- (void)configContentLayout;
- (void)configImageView;
- (CGRect)originalMultiSelectFrame;
- (void)setOriginalMultiSelectFrame:(CGRect)arg1;
- (id)originalImageFrames;
- (void)setOriginalImageFrames:(id)arg1;
- (BOOL)hasOriginalMultiSelectFrame;
- (void)setHasOriginalMultiSelectFrame:(BOOL)arg1;
- (void).cxx_destruct;
@end
