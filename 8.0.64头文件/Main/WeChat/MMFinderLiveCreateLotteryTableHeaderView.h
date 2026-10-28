@interface MMFinderLiveCreateLotteryTableHeaderView : UIView
{
    BOOL _noneData; // +0x8
    UIView * _headerBgView; // +0x10
    MMLiveShopShelfDragBar * _dragBar; // +0x18
    MMUIButton * _rightButton; // +0x20
    MMUILabel * _leftLabel; // +0x28
    id /* block */ _addCreateLotteryBlock; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateNoneData:(BOOL)arg1;
- (void)getHeaderView;
- (void)layoutSubviews;
- (void)createLotteryClick;
- (void)layoutUI;
- (id)dragBar;
- (id)rightButton;
- (id)leftLabel;
- (BOOL)noneData;
- (void)setNoneData:(BOOL)arg1;
- (id)headerBgView;
- (void)setHeaderBgView:(id)arg1;
- (void)setDragBar:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setLeftLabel:(id)arg1;
- (id /* block */)addCreateLotteryBlock;
- (void)setAddCreateLotteryBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
