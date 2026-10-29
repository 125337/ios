@interface BTRecoFlowMsgContentBigCell : BTRecoFlowMsgCell
{
    UILabel * _videoDurationLabel; // +0x8
}
- (void)updateWithItemMsg:(id)arg1 cellWidth:(double)arg2;
- (CGSize)bigPlayButtonSize;
- (void)layoutSubviews;
- (void)configurateMediaIcon:(id)arg1;
- (id)videoDurationLabel;
- (id)accessibilityLabel;
- (void)setVideoDurationLabel:(id)arg1;
- (void).cxx_destruct;
@end

