@interface MMFinderLiveShopGoodsManageSectionHeaderView : MMUIView
{
    BOOL _shouldHideFlashSale; // +0x8
    BOOL _shouldHideOthersExceptFlashSale; // +0x9
    NSString * _title; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUIButton * _flashSaleButton; // +0x20
    MMUIButton * _manageButton; // +0x28
    MMUIButton * _addGoodsButton; // +0x30
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x38
}
- (void)update;
- (id)initWithCoordinator:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setShouldHideFlashSale:(BOOL)arg1;
- (void)setShouldHideOthersExceptFlashSale:(BOOL)arg1;
- (void)layoutSubviews;
- (id)addButtonWithImage:(id)arg1 text:(id)arg2 action:(SEL)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
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
