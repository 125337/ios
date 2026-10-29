@interface MMFinderLiveConnectMicSeatNameLabel : UIView
{
    UILabel * _label; // +0x8
    NSString * _seatName; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateSeatName:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)seatName;
- (void)setSeatName:(id)arg1;
- (void).cxx_destruct;
@end
