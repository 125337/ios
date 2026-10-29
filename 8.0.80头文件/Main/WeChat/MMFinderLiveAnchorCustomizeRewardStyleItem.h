@interface MMFinderLiveAnchorCustomizeRewardStyleItem : NSObject
{
    MMFinderLiveAnchorCustomizeRewardSkinItem * _selectedSkinItem; // +0x8
    NSString * _customText; // +0x10
    MMFinderLiveAnchorCustomizeRewardResourceUrl * _customImageResource; // +0x18
}
- (id)initWithPBSelectedValue:(id)arg1 skinItemArray:(id)arg2;
- (id)initWithSelectedSkinId:(id)arg1 customText:(id)arg2 customImageResource:(id)arg3 skinItemArray:(id)arg4;
- (id)selectedSkinItem;
- (void)setSelectedSkinItem:(id)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (id)customImageResource;
- (void)setCustomImageResource:(id)arg1;
- (void).cxx_destruct;
@end
