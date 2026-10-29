@interface MMFinderLiveRewardGiftExtraInfo : NSObject
{
    BOOL _ignoreMultiAnimation; // +0x8
    BOOL _ignoreCustomize; // +0x9
    BOOL _customizeRelyOnSelect; // +0xa
    BOOL _isLandscapeStyle; // +0xb
    BOOL _ignoreTextNewCustomize; // +0xc
    MMFinderLiveRewardAppMsgInfo * _rewardAppMsg; // +0x10
    MMFinderLiveRewardGiftItem * _customizePriorRewardItem; // +0x18
}
- (id)init;
- (void)initDefaultData;
- (void)printDesc;
- (id)description;
- (BOOL)ignoreMultiAnimation;
- (void)setIgnoreMultiAnimation:(BOOL)arg1;
- (BOOL)ignoreCustomize;
- (void)setIgnoreCustomize:(BOOL)arg1;
- (BOOL)customizeRelyOnSelect;
- (void)setCustomizeRelyOnSelect:(BOOL)arg1;
- (BOOL)isLandscapeStyle;
- (void)setIsLandscapeStyle:(BOOL)arg1;
- (id)rewardAppMsg;
- (void)setRewardAppMsg:(id)arg1;
- (id)customizePriorRewardItem;
- (void)setCustomizePriorRewardItem:(id)arg1;
- (BOOL)ignoreTextNewCustomize;
- (void)setIgnoreTextNewCustomize:(BOOL)arg1;
- (void).cxx_destruct;
@end

