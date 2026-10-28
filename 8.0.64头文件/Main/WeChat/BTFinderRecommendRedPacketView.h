@interface BTFinderRecommendRedPacketView : MMUIView
{
    UIImageView * _redPacketImageView; // +0x8
    MMUILabel * _label; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)redPacketImageView;
- (id)label;
- (void)setLabelTextColor:(id)arg1;
- (void)setRedPacketImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
