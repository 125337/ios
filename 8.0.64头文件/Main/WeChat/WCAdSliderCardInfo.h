@interface WCAdSliderCardInfo : NSObject <NSCoding>
{
    NSArray * _sliderCardList; // +0x8
    WCAdSliderCardSlideJumpInfo * _slideJumpInfo; // +0x10
    WCAdSliderCardOpeningAnimationInfo * _openingAnimation; // +0x18
    WCAdSliderCardProductInfo * _productInfo; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (long long)fetchSliderCardStyle;
- (BOOL)hasOpeningAnimation;
- (BOOL)hasProductInfo;
- (id)sliderCardList;
- (void)setSliderCardList:(id)arg1;
- (id)slideJumpInfo;
- (void)setSlideJumpInfo:(id)arg1;
- (id)openingAnimation;
- (void)setOpeningAnimation:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (void).cxx_destruct;
@end
