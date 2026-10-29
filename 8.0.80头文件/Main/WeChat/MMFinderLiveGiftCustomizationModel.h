@interface MMFinderLiveGiftCustomizationModel : NSObject
{
    BOOL _textCustomizableForAnyStyle; // +0x8
    BOOL _hasCustomText; // +0x9
    BOOL _styleSet; // +0xa
    NSString * _instanceId; // +0x10
    NSString * _parentProductId; // +0x18
    NSArray * _styles; // +0x20
    MMFinderLiveGiftCustomizationStyleItem * _currentStyle; // +0x28
    NSString * _customText; // +0x30
    NSString * _displayCustomText; // +0x38
    unsigned long long _customTextValidationPolicy; // +0x40
    MMFinderLiveGiftCustomizationStyleItem * _selectedStyle; // +0x48
    NSString * _currentCustomText; // +0x50
}
+ (id)customizationModelForFinderLiveGift:(id)arg1 useStrictTextValidationPolicy:(BOOL)arg2;
- (id)currentCustomTextTrimmedToCurrentStyleLengthLimit;
- (id)displayCustomTextTrimmedToCurrentStyleLengthLimit;
- (void)setSelectedStyle:(id)arg1;
- (id)getCurrentStyleRelyOnSelected:(BOOL)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)parentProductId;
- (void)setParentProductId:(id)arg1;
- (id)styles;
- (void)setStyles:(id)arg1;
- (id)currentStyle;
- (void)setCurrentStyle:(id)arg1;
- (BOOL)textCustomizableForAnyStyle;
- (void)setTextCustomizableForAnyStyle:(BOOL)arg1;
- (BOOL)hasCustomText;
- (void)setHasCustomText:(BOOL)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (id)displayCustomText;
- (void)setDisplayCustomText:(id)arg1;
- (unsigned long long)customTextValidationPolicy;
- (void)setCustomTextValidationPolicy:(unsigned long long)arg1;
- (BOOL)styleSet;
- (void)setStyleSet:(BOOL)arg1;
- (id)selectedStyle;
- (id)currentCustomText;
- (void)setCurrentCustomText:(id)arg1;
- (void).cxx_destruct;
@end
