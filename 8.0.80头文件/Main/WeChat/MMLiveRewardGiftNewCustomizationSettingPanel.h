@interface MMLiveRewardGiftNewCustomizationSettingPanel : MMPageSheetBaseView <MMLiveRewardGiftNewCustomizationStyleNameSelectDelegate>
{
    BOOL _isKeyboardShow; // +0x8
    BOOL _isCloseWithModified; // +0x9
    id /* block */ _giftCustomizationSettingModifiedCallback; // +0x10
    id /* block */ _giftCustomizationSettingClosedCallback; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMFinderLiveRewardGiftItem * _giftItem; // +0x28
    MMLiveRewardGiftNewCustomizationEditLogic * _customizationEditLogic; // +0x30
    UIView * _panelView; // +0x38
    MMUIButton * _closeButton; // +0x40
    MMUIButton * _cancelButton; // +0x48
    MMUIButton * _doneButton; // +0x50
    MMLiveRewardGiftNewCustomizationEffectPreviewView * _effectPreviewView; // +0x58
    MMLiveRewardGiftNewCustomizationPriceDisplayView * _priceDisplayView; // +0x60
    MMLiveRewardGiftNewCustomizationStyleSelectView * _styleSelectView; // +0x68
    MMLiveRewardGiftNewCustomizationInputToolView * _nameEditInputTool; // +0x70
    id /* block */ _inputToolStateListener; // +0x78
    double _keyboardHeight; // +0x80
    CGRect _nameEditInputToolRectForUnActive; // +0x88
}
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2;
- (void)createCustomizationEditLogic:(id)arg1;
- (void)initNotifications;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (double)contentWidth;
- (double)contentHeight;
- (double)normalModeContentHeight;
- (double)inputModeContentHeight;
- (double)stayEditingModeContentHeight;
- (void)layoutEffectPreviewView;
- (void)updateEffectPreviewViewFrame;
- (double)effectPreviewViewHeight;
- (double)normalModePreviewViewHeight;
- (double)inputModePreviewViewHeight;
- (double)stayEditingModePreviewViewHeight;
- (void)layoutPriceDisplayView;
- (void)layoutStyleSelectView;
- (void)layoutCancelButton;
- (void)onCancelButtonClick;
- (void)layoutDoneButton;
- (void)onDoneButtonClick;
- (void)updateNameEditInputToolFrame;
- (void)layoutCloseButton;
- (void)onCloseButtonClick;
- (id)customizationModel;
- (id /* block */)inputToolStateListener;
- (void)insertEditInputToolToHierarchy:(id)arg1 frame:(CGRect)arg2 fromView:(id)arg3;
- (void)removeEditInputToolFromHierarchy:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (void)updateUIForKeyboardShowChanged:(id)arg1;
- (void)updateWidgetsAlphaForInputToolAndKeyBoardStateChanged;
- (double)getKeyboardAnimationDuration:(id)arg1;
- (unsigned long long)getKeyboardAnimationOptions:(id)arg1;
- (void)handleUIOrientationWillChange:(id)arg1;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (id /* block */)giftCustomizationSettingModifiedCallback;
- (void)setGiftCustomizationSettingModifiedCallback:(id /* block */)arg1;
- (id /* block */)giftCustomizationSettingClosedCallback;
- (void)setGiftCustomizationSettingClosedCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)customizationEditLogic;
- (void)setCustomizationEditLogic:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)effectPreviewView;
- (void)setEffectPreviewView:(id)arg1;
- (id)priceDisplayView;
- (void)setPriceDisplayView:(id)arg1;
- (id)styleSelectView;
- (void)setStyleSelectView:(id)arg1;
- (id)nameEditInputTool;
- (void)setNameEditInputTool:(id)arg1;
- (CGRect)nameEditInputToolRectForUnActive;
- (void)setNameEditInputToolRectForUnActive:(CGRect)arg1;
- (void)setInputToolStateListener:(id /* block */)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)isKeyboardShow;
- (void)setIsKeyboardShow:(BOOL)arg1;
- (BOOL)isCloseWithModified;
- (void)setIsCloseWithModified:(BOOL)arg1;
- (void).cxx_destruct;
@end
