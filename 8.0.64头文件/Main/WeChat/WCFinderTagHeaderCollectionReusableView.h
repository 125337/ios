@interface WCFinderTagHeaderCollectionReusableView : UICollectionReusableView
{
    id <WCFinderTagHeaderCollectionReusableViewDelegate> _delegate; // +0x8
    UIColor * _buttonNormalBackgroundColor; // +0x10
    UIColor * _buttonSelectedBackgroundColor; // +0x18
    NSMutableArray * _buttonArray; // +0x20
    NSMutableArray * _categoryArray; // +0x28
    MMUIButton * _arrowButton; // +0x30
}
+ (double)getTagHeaderViewHeight:(id)arg1 screenSize:(CGSize)arg2 showTotalTag:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (double)getTagButtonWidthTarget:(double)arg1 limitWidth:(double)arg2;
- (id)getNewCategoryButton;
- (void)updateTagHeaderButtonsSigleStyleWith:(id)arg1 selectedIndex:(long long)arg2;
- (void)updateTagHeaderButtonsMultiStyleWith:(id)arg1 selectedIndex:(long long)arg2;
- (void)onClickTagButtonAction:(id)arg1;
- (void)onClickArrowButtonAction:(id)arg1;
- (BOOL)hasFoldButton;
- (id)getFirstLineCategoryString;
- (void)setFoldButtonHidden:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)buttonNormalBackgroundColor;
- (void)setButtonNormalBackgroundColor:(id)arg1;
- (id)buttonSelectedBackgroundColor;
- (void)setButtonSelectedBackgroundColor:(id)arg1;
- (id)buttonArray;
- (void)setButtonArray:(id)arg1;
- (id)categoryArray;
- (void)setCategoryArray:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (void).cxx_destruct;
@end
