@interface MMLiveRewardGiftNewCustomizationEffectPreviewView : UIView <_TtP6WeChat18IMRViewResListener_>
{
    BOOL _isViewAppear; // +0x8
    MMFinderLiveGiftNewCustomizationModel * _customizationModel; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    UIView * _effectPreviewBackView; // +0x20
    CAGradientLayer * _effectPreviewGradientLayer; // +0x28
    _TtC6WeChat15MagicRewardView * _effectPreviewView; // +0x30
    MMLiveGiftMagicRewardHandler * _magicRewardHandler; // +0x38
    MMFinderLiveRewardGiftItem * _giftItem; // +0x40
}
- (id)initWithGiftItem:(id)arg1 taskId:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)dealloc;
- (void)layoutEffectPreviewBackView;
- (void)createEffectPreviewGradientLayer;
- (void)updateEffectPreviewGradientLayer;
- (void)layoutEffectPreviewView;
- (void)configComponentValuesForEffectPreview;
- (void)onMagicRewardViewDisplayUpdate;
- (void)updateEffectPreviewViewAlpha:(double)arg1;
- (void)updateKey:(id)arg1 value:(id)arg2;
- (void)onViewDidAppear;
- (void)onViewDidDisappear;
- (id)liveTask;
- (void)onResLoadedWithView:(id)arg1;
- (void)onResUnloadedWithView:(id)arg1;
- (id)customizationModel;
- (void)setCustomizationModel:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)effectPreviewBackView;
- (void)setEffectPreviewBackView:(id)arg1;
- (id)effectPreviewGradientLayer;
- (void)setEffectPreviewGradientLayer:(id)arg1;
- (id)effectPreviewView;
- (void)setEffectPreviewView:(id)arg1;
- (id)magicRewardHandler;
- (void)setMagicRewardHandler:(id)arg1;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:(BOOL)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (void).cxx_destruct;
@end

