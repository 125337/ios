@interface EcsKfProductCardMessageCellView : CommonMessageCellView
{
    long long _currentMsgSvrId; // +0xb8
    unsigned long long _refreshToken; // +0xc0
    UILabel * _titleLabel; // +0xc8
    NSMutableArray * _itemViews; // +0xd0
    NSMutableArray * _operationButtons; // +0xd8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)increaseRefreshToken;
- (void)layoutContentView;
- (void)renderProductCard;
- (double)renderTitleAtY:(double)arg1 padding:(double)arg2;
- (double)renderProductsAtY:(double)arg1 padding:(double)arg2;
- (void)renderOperationButtonsAtY:(double)arg1 padding:(double)arg2;
- (void)updateOperationButtonSeparator:(id)arg1 padding:(double)arg2;
- (void)updateOperationButtonArrow:(id)arg1 padding:(double)arg2;
- (void)ensureItemViewCount:(unsigned long long)arg1;
- (void)ensureOperationButtonCount:(unsigned long long)arg1;
- (void)onTouchUpInside;
- (void)onProductItemClicked:(id)arg1;
- (void)onOperationButtonClicked:(id)arg1;
- (void)showTapHighlightInView:(id)arg1;
- (void)openWithJumpInfo:(id)arg1;
- (void)openURL:(id)arg1;
- (id)operationMenuItems;
- (BOOL)canShowMoreMenuItem;
- (void)onAppear;
- (long long)currentMsgSvrId;
- (void)setCurrentMsgSvrId:(long long)arg1;
- (unsigned long long)refreshToken;
- (void)setRefreshToken:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)operationButtons;
- (void)setOperationButtons:(id)arg1;
- (void).cxx_destruct;
@end
