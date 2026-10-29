@interface MMFinderLiveShopGoodsSectionHeaderStickView : MMUIView <MMFinderLiveShopShelfHeaderViewModelDelegate, MMFinderLiveShopShelfHeaderViewModelView>
{
    MMFinderLiveShopGoodsSectionHeaderClassifyView * _classifyView; // +0x8
    MMEcsLiveImgButton * _notifyView; // +0x10
    id <MMFinderLiveShopGoodsSectionHeaderStickViewDelegate> _delegate; // +0x18
    id /* block */ _parentRefreshBlock; // +0x20
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setDelegate:(id)arg1;
- (void)layoutSubviews;
- (double)preferHeight;
- (void)handleNotifyViewTap:(id)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)refreshWithNotifyEntranceInfo:(id)arg1;
- (void)updateNotifyViewLogInfoWithShelfInfo:(id)arg1;
- (void)onHeaderViewModelUpdateByAppMessage:(id)arg1;
- (id)classifyView;
- (void)setClassifyView:(id)arg1;
- (id)notifyView;
- (void)setNotifyView:(id)arg1;
- (id)delegate;
- (id /* block */)parentRefreshBlock;
- (void)setParentRefreshBlock:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
