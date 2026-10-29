@interface MMFinderLiveCreateLotteryTableHeaderView : UIView
{
    UIView * _headerBgView; // +0x8
    MMUIButton * _addCreateLotteryButton; // +0x10
    id /* block */ _addCreateLotteryBlock; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)getHeaderView;
- (void)layoutSubviews;
- (void)createLotteryClick;
- (void)layoutUI;
- (id)headerBgView;
- (void)setHeaderBgView:(id)arg1;
- (id)addCreateLotteryButton;
- (void)setAddCreateLotteryButton:(id)arg1;
- (id /* block */)addCreateLotteryBlock;
- (void)setAddCreateLotteryBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

