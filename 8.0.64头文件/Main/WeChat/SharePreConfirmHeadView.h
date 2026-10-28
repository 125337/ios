@interface SharePreConfirmHeadView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isFakeContact; // +0x8
    BOOL _clickEnabled; // +0x9
    id /* block */ _onClickHeadImageOrUserName; // +0x10
    id /* block */ _onViewMsgContent; // +0x18
    id /* block */ _onScroll; // +0x20
    UIView * _topGradientMaskView; // +0x28
    MMTableView * _tableView; // +0x30
    UIView * _bottomGradientMaskView; // +0x38
    CAGradientLayer * _topGradientLayer; // +0x40
    CAGradientLayer * _bottomGradientLayer; // +0x48
    double _tableViewTopShowY; // +0x50
    double _tableViewBottomShowY; // +0x58
    NSArray * _arrContacts; // +0x60
}
- (id)initWithContacts:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFitWidth:(double)arg1;
- (void)setContentToTableFooter:(id)arg1;
- (BOOL)footerViewTotalVisible;
- (void)initView;
- (void)initGradientView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (BOOL)isFakeContact;
- (void)setIsFakeContact:(BOOL)arg1;
- (BOOL)clickEnabled;
- (void)setClickEnabled:(BOOL)arg1;
- (id /* block */)onClickHeadImageOrUserName;
- (void)setOnClickHeadImageOrUserName:(id /* block */)arg1;
- (id /* block */)onViewMsgContent;
- (void)setOnViewMsgContent:(id /* block */)arg1;
- (id /* block */)onScroll;
- (void)setOnScroll:(id /* block */)arg1;
- (id)topGradientMaskView;
- (void)setTopGradientMaskView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomGradientMaskView;
- (void)setBottomGradientMaskView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (double)tableViewTopShowY;
- (void)setTableViewTopShowY:(double)arg1;
- (double)tableViewBottomShowY;
- (void)setTableViewBottomShowY:(double)arg1;
- (id)arrContacts;
- (void)setArrContacts:(id)arg1;
- (void).cxx_destruct;
@end
