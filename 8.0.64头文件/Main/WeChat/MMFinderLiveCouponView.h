@interface MMFinderLiveCouponView : MMUIView <MMFinderLiveCouponViewProtocol>
{
    BOOL _actionButtonHidden; // +0x8
    BOOL _isAnchor; // +0x9
    id <MMFinderLiveCouponViewDelegate> _delegate; // +0x10
    MMFinderLiveCouponItem * _couponItem; // +0x18
    UIView * _leftContainer; // +0x20
    UILabel * _discountLabel; // +0x28
    UILabel * _discountDescLabel; // +0x30
    UIView * _centerContainer; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _remainLabel; // +0x48
    UILabel * _descLabel; // +0x50
    MMUIButton * _actionButton; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 isAnchor:(BOOL)arg2;
- (void)fillWithCouponItem:(id)arg1;
- (void)setupDiscountLabel:(id)arg1;
- (void)setupCenterLabel:(id)arg1;
- (void)setupActionButton:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLeftContent;
- (void)layoutCenterContent;
- (void)layoutRightContent;
- (void)setActionButtonHidden:(BOOL)arg1;
- (void)updateActionButton:(BOOL)arg1 active:(BOOL)arg2 title:(id)arg3;
- (void)onActionButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)actionButtonHidden;
- (id)couponItem;
- (void)setCouponItem:(id)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (id)leftContainer;
- (void)setLeftContainer:(id)arg1;
- (id)discountLabel;
- (void)setDiscountLabel:(id)arg1;
- (id)discountDescLabel;
- (void)setDiscountDescLabel:(id)arg1;
- (id)centerContainer;
- (void)setCenterContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)remainLabel;
- (void)setRemainLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
