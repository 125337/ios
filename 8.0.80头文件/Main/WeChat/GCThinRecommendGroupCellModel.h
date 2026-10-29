@interface GCThinRecommendGroupCellModel : GCRecommendGroupCellModel
- (Class)bindCellClass;
- (double)widthForCondition:(id)arg1;
- (double)widthForTag:(id)arg1;
- (double)conditionViewHeight:(double)arg1;
- (double)tagLineViewHeight:(double)arg1;
- (double)fitCollectionViewWidth:(id)arg1;
- (double)descLineHeightForWidth:(double)arg1 maxLine:(long long)arg2;
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (double)rightSpace;
- (id)rightBtnText;
- (double)condtionGroupMaxWidthForWidth:(double)arg1;
@end
