@interface BTRecoFlowTopicBigPictureCell : BTRecoFlowTopicHeaderCell
{
    MMWebImageView * _coverView; // +0x8
    NSMutableArray * _webImageViewList; // +0x10
}
- (id)coverView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)webImageViewList;
- (void)updateWithAggregationTitle:(id)arg1 recommendTag:(id)arg2 recommendWording:(id)arg3 itemMessage:(id)arg4 cellWidth:(double)arg5 friendSeenHeadImgUrl:(id)arg6 iconType:(unsigned int)arg7;
- (void)setCoverView:(id)arg1;
- (void)setWebImageViewList:(id)arg1;
- (void).cxx_destruct;
@end

