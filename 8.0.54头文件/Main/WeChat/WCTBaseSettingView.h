@interface WCTBaseSettingView : UIView <WCTSettingViewProtocol>
{
    NSObject * _viewDataModel; // +0x8
    MMUILabel * _titleLabel; // +0x10
    id /* block */ _viewEventAction; // +0x18
    id _viewDelegate; // +0x20
    UIView * _cell; // +0x28
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithCell:(id)arg1;
- (void)loadUI:(id)arg1;
- (id)viewDataModel;
- (id)titleLabel;
- (id /* block */)viewEventAction;
- (void)setViewEventAction:(id /* block */)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)cell;
- (void)setCell:(id)arg1;
- (void).cxx_destruct;
@end

