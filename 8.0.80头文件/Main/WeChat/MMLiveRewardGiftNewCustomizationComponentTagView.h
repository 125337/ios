@interface MMLiveRewardGiftNewCustomizationComponentTagView : UIView
{
    BOOL _isSelect; // +0x8
    MMFinderLiveNewCustomGiftComponentValue * _componentValue; // +0x10
    id /* block */ _componentTagTapCallback; // +0x18
    unsigned long long _uiStyle; // +0x20
    UIView * _selectStyleView; // +0x28
    UIView * _contentBackView; // +0x30
    MMWebImageView * _contentImgView; // +0x38
    MMUILabel * _nameLabel; // +0x40
    UIImageView * _beanIconView; // +0x48
    MMUILabel * _beanCntLabel; // +0x50
    MMUILabel * _beanIncreaseLabel; // +0x58
}
+ (double)preferWidth;
+ (double)preferHeight;
+ (double)leftInset;
- (id)initWithComponentValue:(id)arg1 uiStyle:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSelectStyleView;
- (void)updateSelectStyleViewBorderColor;
- (void)layoutContentBackView;
- (void)layoutContentImgView;
- (double)contentImageViewWidth;
- (void)layoutNameLabel;
- (void)layoutBeanWidgets;
- (void)layoutBeanIncreaseLabel;
- (void)layoutBeanIconView;
- (void)layoutBeanCntLabel;
- (void)updateBeanWidgetsOrigin;
- (void)setIsSelect:(BOOL)arg1;
- (void)onComponentTagTap:(id)arg1;
- (id)componentValue;
- (void)setComponentValue:(id)arg1;
- (BOOL)isSelect;
- (id /* block */)componentTagTapCallback;
- (void)setComponentTagTapCallback:(id /* block */)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (id)selectStyleView;
- (void)setSelectStyleView:(id)arg1;
- (id)contentBackView;
- (void)setContentBackView:(id)arg1;
- (id)contentImgView;
- (void)setContentImgView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)beanIconView;
- (void)setBeanIconView:(id)arg1;
- (id)beanCntLabel;
- (void)setBeanCntLabel:(id)arg1;
- (id)beanIncreaseLabel;
- (void)setBeanIncreaseLabel:(id)arg1;
- (void).cxx_destruct;
@end
