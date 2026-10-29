@interface MMAlbumDropableTitleWithMultipleSectionView : MMTitleView <MMAlbumDropableTitleViewDelegate, MMAlbumSectionCellDelegate>
{
    id <MMAlbumDropableTitleWithMultipleSectionViewDelegate> _titleViewDelegate; // +0x8
    OrderedDictionary * _sectionViews; // +0x10
    UIView * _sliderView; // +0x18
    unsigned long long _selectingIndex; // +0x20
}
- (id)initWithSections:(unsigned long long)arg1;
- (void)initViewsWithSections:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSections;
- (void)layoutSubviews;
- (id)getAlbumTitleView;
- (void)onSlidingWithProgress:(double)arg1;
- (void)onSlidingEndsToIndex:(unsigned long long)arg1;
- (void)switchToSection:(unsigned long long)arg1 needNotifyScrollView:(BOOL)arg2;
- (void)performDeactiveCurrentSection;
- (void)performSlidesToNewSection:(unsigned long long)arg1 needNotifyScrollView:(BOOL)arg2;
- (void)onClickDropableTitleView:(id)arg1;
- (void)onDropableTitleViewSizeChanged:(id)arg1;
- (void)onTapSectionCell:(id)arg1;
- (id)titleViewDelegate;
- (void)setTitleViewDelegate:(id)arg1;
- (id)sectionViews;
- (void)setSectionViews:(id)arg1;
- (id)sliderView;
- (void)setSliderView:(id)arg1;
- (unsigned long long)selectingIndex;
- (void)setSelectingIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

