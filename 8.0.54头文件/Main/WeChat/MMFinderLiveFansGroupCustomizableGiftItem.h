@interface MMFinderLiveFansGroupCustomizableGiftItem : NSObject
{
    NSArray * _colorVariants; // +0x8
    MMFinderLiveFansGroupCustomizableGiftColorVariant * _selectedVariant; // +0x10
    FinderLiveFanClubCustomGift * _customizableGift; // +0x18
    FinderLiveAnchorCustomGiftInfo_CustomItem * _customizationItem; // +0x20
}
- (id)initWithCustomizableGift:(id)arg1 customizationItem:(id)arg2 resourceFetcher:(id)arg3;
- (id)customizableGiftId;
- (id)name;
- (float)selectedVariantWebeansValue;
- (BOOL)supportsColorCustomization;
- (BOOL)supportsTextAttachment;
- (unsigned long long)maximumChangeCount;
- (BOOL)changeThrottled;
- (unsigned long long)textAttachmentMaxLength;
- (id)attachedText;
- (void)setAttachedText:(id)arg1;
- (void)setSelectedVariant:(id)arg1;
- (BOOL)customizationTypeSupported;
- (id)customizationItemWithCurrentState;
- (void)decrementRemainingChangeCount;
- (id)colorVariants;
- (void)setColorVariants:(id)arg1;
- (id)selectedVariant;
- (id)customizableGift;
- (void)setCustomizableGift:(id)arg1;
- (id)customizationItem;
- (void)setCustomizationItem:(id)arg1;
- (void).cxx_destruct;
@end

