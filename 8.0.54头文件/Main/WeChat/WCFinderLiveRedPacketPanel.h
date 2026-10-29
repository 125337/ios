@interface WCFinderLiveRedPacketPanel : MMPageSheetBaseView
{
    WCFinderLiveRedPacketItemView * _redPacketItemView; // +0x8
    WCFinderLiveRedPacketItemView * _lotteryItemView; // +0x10
    id /* block */ _liveRedPacketPanelBlock; // +0x18
    UIView * _contentView; // +0x20
    UIView * _headView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)lotteryItemView;
- (id)redPacketItemView;
- (void)lotteryClick;
- (void)redPacketClick;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)headView;
- (id)contentView;
- (void)setRedPacketItemView:(id)arg1;
- (void)setLotteryItemView:(id)arg1;
- (id /* block */)liveRedPacketPanelBlock;
- (void)setLiveRedPacketPanelBlock:(id /* block */)arg1;
- (void)setContentView:(id)arg1;
- (void)setHeadView:(id)arg1;
- (void).cxx_destruct;
@end

