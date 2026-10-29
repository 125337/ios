@interface MMLiveRewardGiftNewCustomizationPriceDisplayView : UIView
{
    MMFinderLiveGiftNewCustomizationModel * _customizationModel; // +0x8
    MMUILabel * _sumBeanTipLabel; // +0x10
    UIImageView * _beanIconView; // +0x18
    MMUILabel * _beanCntLabel; // +0x20
    MMUILabel * _beanCntExplainLabel; // +0x28
}
- (id)initWithCustomizationModel:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSumBeanTipLabel;
- (void)layoutBeanIconView;
- (void)layoutBeanCntLabel;
- (void)layoutBeanCntExplainLabel;
- (id)getBeanCntExplainAttributedText;
- (void)updateBeanCntExplainLabelHidden;
- (void)updateBeanWidgetsOrigin;
- (void)updateSumBeanCntDisplay;
- (id)customizationModel;
- (void)setCustomizationModel:(id)arg1;
- (id)sumBeanTipLabel;
- (void)setSumBeanTipLabel:(id)arg1;
- (id)beanIconView;
- (void)setBeanIconView:(id)arg1;
- (id)beanCntLabel;
- (void)setBeanCntLabel:(id)arg1;
- (id)beanCntExplainLabel;
- (void)setBeanCntExplainLabel:(id)arg1;
- (void).cxx_destruct;
@end

