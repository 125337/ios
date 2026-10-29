@interface MMLiveRewardGiftNewCustomizationStyleNameSelectContentView : MMLiveRewardGiftNewCustomizationStyleSelectContentView
{
    MMLiveRewardGiftNewCustomizationEditLogic * _customizationEditLogic; // +0x8
    MMLiveRewardGiftNewCustomizationInputToolView * _inputToolView; // +0x10
}
- (id)initWithCustomizationEditLogic:(id)arg1;
- (void)configCustomizationEditLogic:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInputToolView;
- (void)initContentMode;
- (void)updateContentModeForEnableCustomTextAbility;
- (id)createInputToolView:(CGRect)arg1;
- (BOOL)needAsyncBeginEditing;
- (void)asyncBeginEditing;
- (void)endEditing;
- (id)customGiftText;
- (id)unspportTipClickHref;
- (id)styleObj;
- (id)getUnSupportTipWithConflictComponent:(id)arg1;
- (void)onUnSupportTipLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)customizationEditLogic;
- (void)setCustomizationEditLogic:(id)arg1;
- (id)inputToolView;
- (void)setInputToolView:(id)arg1;
- (void).cxx_destruct;
@end

