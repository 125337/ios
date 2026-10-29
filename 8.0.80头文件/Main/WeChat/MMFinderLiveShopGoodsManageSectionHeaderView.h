@interface MMFinderLiveShopGoodsManageSectionHeaderView : MMUIView
{
    BOOL _shouldHideFlashSale; // +0x8
    UIScrollView * _scrollView; // +0x10
    NSMutableArray * _headerButtons; // +0x18
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x20
}
- (void)update;
- (id)initWithCoordinator:(id)arg1;
- (void)updateHeaderButtonsIfNeeded;
- (BOOL)checkDifferFromButtons:(id)arg1;
- (void)setupUI;
- (id)generateButtons;
- (void)generateButtonsReport;
- (void)setShouldHideFlashSale:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutButtons;
- (void)layoutButtonsWithEqualDistribution:(long long)arg1;
- (double)calculateTotalWidthForButtonsWithFixedWidth:(long long)arg1;
- (double)layoutButtonsWithFixedWidth:(long long)arg1 calculateOnly:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)shouldHideFlashSale;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)headerButtons;
- (void)setHeaderButtons:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
