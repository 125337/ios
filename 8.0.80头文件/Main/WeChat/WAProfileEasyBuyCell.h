@interface WAProfileEasyBuyCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>
{
    GetProfileInfoResponse_RelievedBuyInfo * _infoModel; // +0x8
    id /* block */ _viewEventAction; // +0x10
    WAProfileEasyBuyIconView * _iconView; // +0x18
    UIButton * _cardView; // +0x20
    UILabel * _titleLabel; // +0x28
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)setInfoModel:(id)arg1;
- (id)infoModel;
- (id /* block */)viewEventAction;
- (void)setViewEventAction:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
