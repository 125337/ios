@interface MMFinderLiveShopGoodsManageSectionHeaderView : MMUIView
{
    BOOL _shouldHideFlashSale; // +0x8
    BOOL _shouldHideOthersExceptFlashSale; // +0x9
    id <MMFinderLiveShopGoodsManageSectionHeaderViewDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUIButton * _flashSaleButton; // +0x28
    MMUIButton * _manageButton; // +0x30
    MMUIButton * _addGoodsButton; // +0x38
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x40
}
- (void)updateWithCoordinatorAndGoodsCount:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitle:(id)arg1;
- (void)setShouldHideFlashSale:(BOOL)arg1;
- (void)setShouldHideOthersExceptFlashSale:(BOOL)arg1;
- (void)layoutSubviews;
- (id)addButtonWithImage:(id)arg1 text:(id)arg2 action:(SEL)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (BOOL)shouldHideFlashSale;
- (BOOL)shouldHideOthersExceptFlashSale;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)flashSaleButton;
- (void)setFlashSaleButton:(id)arg1;
- (id)manageButton;
- (void)setManageButton:(id)arg1;
- (id)addGoodsButton;
- (void)setAddGoodsButton:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void).cxx_destruct;
@end

