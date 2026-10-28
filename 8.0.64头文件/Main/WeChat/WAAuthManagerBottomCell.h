@interface WAAuthManagerBottomCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    WAAuthManagerBottomViewModel * _viewDataModel; // +0x8
    UIButton * _managerButton; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)viewDataModel;
- (id)managerButton;
- (void)setManagerButton:(id)arg1;
- (void).cxx_destruct;
@end
