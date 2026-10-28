@interface MMLiveRewardGiftNewCustomizationEditLogic : NSObject
{
    BOOL _currEnableUseCustomText; // +0x8
    MMFinderLiveGiftNewCustomizationModel * _customizationModel; // +0x10
    MMFinderLiveNewCustomGiftStyleObj * _currentSelectStyle; // +0x18
    MMLiveRewardGiftNewCustomizationEffectPreviewView * _effectPreviewView; // +0x20
    MMLiveRewardGiftNewCustomizationPriceDisplayView * _priceDisplayView; // +0x28
    id /* block */ _enableUseCustomTextAbilityChangeCallback; // +0x30
    id /* block */ _giftNewCustomizationSelectChangeCallback; // +0x38
    id /* block */ _currComponentKeyUpdateCallback; // +0x40
    id /* block */ _selectStyleAutoChangeCallback; // +0x48
    MMLiveTaskId * _taskId; // +0x50
}
- (id)initWithCustomizationModel:(id)arg1 taskId:(id)arg2;
- (void)initDefaultData;
- (void)configCustomizationCallbacks;
- (void)checkEnableUseCustomTextIsChange;
- (id)getCurrentSelectComponentKeyList;
- (void)updateCurrentSelectStyle:(id)arg1;
- (void)autoChangeSelectStyle:(id)arg1;
- (void)updateInputText:(id)arg1;
- (void)commitCustomizationConfig:(id /* block */)arg1;
- (id)finderLiveTask;
- (id)customizationModel;
- (void)setCustomizationModel:(id)arg1;
- (id)currentSelectStyle;
- (void)setCurrentSelectStyle:(id)arg1;
- (BOOL)currEnableUseCustomText;
- (void)setCurrEnableUseCustomText:(BOOL)arg1;
- (id)effectPreviewView;
- (void)setEffectPreviewView:(id)arg1;
- (id)priceDisplayView;
- (void)setPriceDisplayView:(id)arg1;
- (id /* block */)enableUseCustomTextAbilityChangeCallback;
- (void)setEnableUseCustomTextAbilityChangeCallback:(id /* block */)arg1;
- (id /* block */)giftNewCustomizationSelectChangeCallback;
- (void)setGiftNewCustomizationSelectChangeCallback:(id /* block */)arg1;
- (id /* block */)currComponentKeyUpdateCallback;
- (void)setCurrComponentKeyUpdateCallback:(id /* block */)arg1;
- (id /* block */)selectStyleAutoChangeCallback;
- (void)setSelectStyleAutoChangeCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
