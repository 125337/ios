@interface WCAdSliderCardInfo : NSObject <NSCoding>
{
    int _autoSlideTime; // +0x8
    int _autoSlideVideoTime; // +0xc
    NSArray * _sliderCardList; // +0x10
    WCAdSliderCardSlideJumpInfo * _slideJumpInfo; // +0x18
    WCAdSliderCardOpeningAnimationInfo * _openingAnimation; // +0x20
    WCAdSliderCardProductInfo * _productInfo; // +0x28
    NSString * _styleConfigJson; // +0x30
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
- (int)autoSlideTime;
- (void)setAutoSlideTime:(int)arg1;
- (int)autoSlideVideoTime;
- (void)setAutoSlideVideoTime:(int)arg1;
- (id)styleConfigJson;
- (void)setStyleConfigJson:(id)arg1;
- (void).cxx_destruct;
@end
