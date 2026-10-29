@interface MMFinderLiveFansGroupAnchorEditViewModel : NSObject
{
    NSString * _groupName; // +0x8
    NSArray * _customizableGiftItems; // +0x10
}
+ (id)viewModelWithGroupName:(id)arg1 customizableGifts:(id)arg2 customizationInfo:(id)arg3;
- (BOOL)hasCustomizableGifts;
- (id)groupName;
- (void)setGroupName:(id)arg1;
- (id)customizableGiftItems;
- (void)setCustomizableGiftItems:(id)arg1;
- (void).cxx_destruct;
@end
