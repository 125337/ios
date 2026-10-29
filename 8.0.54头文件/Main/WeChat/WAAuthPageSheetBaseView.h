@interface WAAuthPageSheetBaseView : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    WAAuthPageSheetViewModel * _viewDataModel; // +0x8
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
+ (double)edgeLR;
- (id)initWithFrame:(CGRect)arg1;
- (id)viewDataModel;
- (void)setViewDataModel:(id)arg1;
- (void).cxx_destruct;
@end

