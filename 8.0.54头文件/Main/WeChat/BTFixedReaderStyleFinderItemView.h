@interface BTFixedReaderStyleFinderItemView : BTFixedFinderBaseItemView
{
    BTFinderRecommendRedPacketView * _redPacketView; // +0x8
    CAGradientLayer * _maskLayer; // +0x10
}
- (void)setupHeader:(id)arg1;
- (void)setupCoverContainer:(id)arg1;
- (void)layoutCoverContainerView:(id)arg1;
- (id)maskLayer;
- (id)redPacketView;
- (void)setRedPacketView:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end

