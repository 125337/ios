@interface WCTSettingTitleTVHFView : UITableViewHeaderFooterView <ZZFlexibleLayoutViewProtocol>
{
    WCTSettingTitleHFView * _view; // +0x8
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)setViewEventAction:(id /* block */)arg1;
- (void)setViewDelegate:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)view;
- (void).cxx_destruct;
@end
