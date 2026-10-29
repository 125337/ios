@interface BTRecoFlowMsgBigPicCell : BTRecoFlowMsgCell
{
    UILabel * _videoDurationLabel; // +0x8
    CAGradientLayer * _maskLayer; // +0x10
}
- (void)updateWithItemMsg:(id)arg1 cellWidth:(double)arg2;
- (CGSize)bigPlayButtonSize;
- (void)layoutSubviews;
- (void)configurateMediaIcon:(id)arg1;
- (void)configureCoverMaskLayer:(id)arg1;
- (void)configureTitleParams:(id)arg1;
- (void)removeCoverMaskLayer;
- (id)videoDurationLabel;
- (void)initMaskLayer;
- (BOOL)shouldShowTitleAboveCoverViewWithItemMsg:(id)arg1;
- (id)accessibilityLabel;
- (void)setVideoDurationLabel:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end

