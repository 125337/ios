@interface WAAgentSessionWeAppCardCell : WAAgentSessionBaseCell
{
    id /* block */ _onCardTap; // +0x8
    CBTCoopV2WeAppCellView * _weAppCellView; // +0x10
    WAAgentForwardingWeAppViewModel * _weAppViewModel; // +0x18
}
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)appMsgItem;
- (void)prepareForReuse;
- (id /* block */)onCardTap;
- (void)setOnCardTap:(id /* block */)arg1;
- (id)weAppCellView;
- (void)setWeAppCellView:(id)arg1;
- (id)weAppViewModel;
- (void)setWeAppViewModel:(id)arg1;
- (void).cxx_destruct;
@end
