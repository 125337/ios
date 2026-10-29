@interface MMFinderLiveMultiAngleView : MMPageSheetBaseView
{
    MMFinderLiveAngleViewModel * _angleViewModel; // +0x8
    CAShapeLayer * _shapeLayer; // +0x10
    UIView * _contentView; // +0x18
    MMFinderLiveChooseClarityViewNavBar * _navBar; // +0x20
    MMFinderLiveMultiAngleCollectionView * _mainCollectionView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)setAngleViewModel:(id)arg1;
- (id)mainCollectionView;
- (double)getItemWidth;
- (double)getItemHeight;
- (double)getAngleViewCollectionViewHeight;
- (id)contentView;
- (id)navBar;
- (id)angleViewModel;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setMainCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

