@interface WCAdBiddingSliderCardStyleConfig : NSObject
{
    long long _templateType; // +0x8
    double _cornerRadius; // +0x10
    double _baseHeight; // +0x18
    double _exposedWidthSlot1; // +0x20
    double _exposedWidthSlot2; // +0x28
    double _exposedWidthSlot3; // +0x30
    long long _cardCount; // +0x38
    double _guideSpacing; // +0x40
    NSArray * _cardAlphas; // +0x48
    NSArray * _slotScales; // +0x50
    NSString * _textSlideToExplore; // +0x58
    NSString * _textReleaseToExplore; // +0x60
    CGSize _baseSize; // +0x68
}
+ (id)configForTemplateType:(long long)arg1 styleConfigJson:(id)arg2 slideJumpInfo:(id)arg3 cardCount:(long long)arg4;
+ (id)modelPropertyBlacklist;
+ (id)defaultCardAlphas;
+ (id)defaultSlotScales;
+ (BOOL)allPositive:(id)arg1;
+ (BOOL)allNonNegative:(id)arg1;
- (void)applyStyleConfigJson:(id)arg1;
- (double)alphaAtIndex:(unsigned long long)arg1;
- (CGSize)scaledCardSizeAtIndex:(unsigned long long)arg1;
- (double)scaleFactor;
- (double)scaleForSlotIndex:(unsigned long long)arg1;
- (long long)templateType;
- (void)setTemplateType:(long long)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (double)baseHeight;
- (void)setBaseHeight:(double)arg1;
- (CGSize)baseSize;
- (void)setBaseSize:(CGSize)arg1;
- (double)exposedWidthSlot1;
- (void)setExposedWidthSlot1:(double)arg1;
- (double)exposedWidthSlot2;
- (void)setExposedWidthSlot2:(double)arg1;
- (double)exposedWidthSlot3;
- (void)setExposedWidthSlot3:(double)arg1;
- (long long)cardCount;
- (void)setCardCount:(long long)arg1;
- (double)guideSpacing;
- (void)setGuideSpacing:(double)arg1;
- (id)cardAlphas;
- (void)setCardAlphas:(id)arg1;
- (id)slotScales;
- (void)setSlotScales:(id)arg1;
- (id)textSlideToExplore;
- (void)setTextSlideToExplore:(id)arg1;
- (id)textReleaseToExplore;
- (void)setTextReleaseToExplore:(id)arg1;
- (void).cxx_destruct;
@end
