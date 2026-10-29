@interface MMLiveBubbleECShowBoxSeckillItemView : UIView
{
    MMLiveBubbleECShowBoxItemsGroupsComponentInfo_SeckillItem * _seckill; // +0x8
    UIColor * _textColor; // +0x10
    MMUILabel * _prefixLabel; // +0x18
    MMUILabel * _countdownLabel; // +0x20
    NSTimer * _timer; // +0x28
    double _itemHeight; // +0x30
}
- (id)initWithSeckill:(id)arg1 height:(double)arg2;
- (void)dealloc;
- (void)startTimer;
- (void)refreshCountdown;
- (void)layoutContents;
- (id)seckill;
- (void)setSeckill:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)prefixLabel;
- (void)setPrefixLabel:(id)arg1;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (void).cxx_destruct;
@end
