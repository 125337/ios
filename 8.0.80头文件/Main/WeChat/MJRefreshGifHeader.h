@interface MJRefreshGifHeader : MJRefreshStateHeader
{
    UIImageView * _gifView; // +0x30
    NSMutableDictionary * _stateImages; // +0x38
    NSMutableDictionary * _stateDurations; // +0x40
}
- (id)gifView;
- (id)stateImages;
- (id)stateDurations;
- (id)setImages:(id)arg1 duration:(double)arg2 forState:(long long)arg3;
- (id)setImages:(id)arg1 forState:(long long)arg2;
- (void)prepare;
- (void)setPullingPercent:(double)arg1;
- (void)placeSubviews;
- (void)setState:(long long)arg1;
- (id)flipsHorizontallyInOppositeLayoutDirectionViews;
- (void)setStateImages:(id)arg1;
- (void)setStateDurations:(id)arg1;
- (void).cxx_destruct;
@end
