@interface MMFinderLiveGiftCustomizationStyleItem : NSObject
{
    BOOL _textCustomizable; // +0x8
    unsigned int _basePrice; // +0xc
    unsigned int _priceWithCustomText; // +0x10
    NSString * _identifier; // +0x18
    UIColor * _color; // +0x20
    unsigned long long _customTextLength; // +0x28
    NSString * _textCustomizationEntryLabel; // +0x30
    NSString * _clearTextCustomizationLabel; // +0x38
    NSString * _textCustomizationEditLabel; // +0x40
    MMFinderLiveGiftCustomizationStyleItemResource * _portraitAnimation; // +0x48
    MMFinderLiveGiftCustomizationStyleItemResource * _landscapeAnimation; // +0x50
    MMFinderLiveGiftCustomizationStyleItemResource * _previewAnimation; // +0x58
    MMFinderLiveGiftCustomizationStyleItemResource * _thumbnail; // +0x60
    MMFinderLiveGiftCustomizationStyleItemResource * _portraitAnimationWithCustomText; // +0x68
    MMFinderLiveGiftCustomizationStyleItemResource * _landscapeAnimationWithCustomText; // +0x70
    MMFinderLiveGiftCustomizationStyleItemResource * _previewAnimationWithCustomText; // +0x78
    MMFinderLiveGiftCustomizationStyleItemResource * _thumbnailWithCustomText; // +0x80
    MMFinderLiveGiftCustomizationStyleItemResource * _textCustomizationPreview; // +0x88
}
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (unsigned int)basePrice;
- (void)setBasePrice:(unsigned int)arg1;
- (BOOL)textCustomizable;
- (void)setTextCustomizable:(BOOL)arg1;
- (unsigned long long)customTextLength;
- (void)setCustomTextLength:(unsigned long long)arg1;
- (unsigned int)priceWithCustomText;
- (void)setPriceWithCustomText:(unsigned int)arg1;
- (id)textCustomizationEntryLabel;
- (void)setTextCustomizationEntryLabel:(id)arg1;
- (id)clearTextCustomizationLabel;
- (void)setClearTextCustomizationLabel:(id)arg1;
- (id)textCustomizationEditLabel;
- (void)setTextCustomizationEditLabel:(id)arg1;
- (id)portraitAnimation;
- (void)setPortraitAnimation:(id)arg1;
- (id)landscapeAnimation;
- (void)setLandscapeAnimation:(id)arg1;
- (id)previewAnimation;
- (void)setPreviewAnimation:(id)arg1;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (id)portraitAnimationWithCustomText;
- (void)setPortraitAnimationWithCustomText:(id)arg1;
- (id)landscapeAnimationWithCustomText;
- (void)setLandscapeAnimationWithCustomText:(id)arg1;
- (id)previewAnimationWithCustomText;
- (void)setPreviewAnimationWithCustomText:(id)arg1;
- (id)thumbnailWithCustomText;
- (void)setThumbnailWithCustomText:(id)arg1;
- (id)textCustomizationPreview;
- (void)setTextCustomizationPreview:(id)arg1;
- (void).cxx_destruct;
@end

