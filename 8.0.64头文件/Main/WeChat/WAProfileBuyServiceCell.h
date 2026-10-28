@interface WAProfileBuyServiceCell : UITableViewCell
{
    GetProfileInfoResponse_RelievedBuyInfo * _infoModel; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _arrowView; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setInfoModel:(id)arg1;
- (id)infoModel;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
