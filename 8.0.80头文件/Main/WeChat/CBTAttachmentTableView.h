@interface CBTAttachmentTableView : CBTAttachmentBaseView <CBTShadowTextProvider, CBTMDTableViewDelegate>
{
    CBTMDTableView * _mdTableView; // +0x8
}
- (_NSRange)preferredSelectionLocalRangeForSpan:(id)arg1 localOffset:(unsigned long long)arg2;
- (id)cbt_autoScroller;
- (void)beginAutoScrollWithPointInAttachment:(CGPoint)arg1 callback:(id /* block */)arg2;
- (void)stopAutoScroll;
- (id)cbt_cellCaches;
- (id)cbt_cacheForCellData:(id)arg1 padding:(double)arg2;
- (id)cbt_layoutCache;
- (void)invalidateShadowLayoutCache;
- (CGRect)cbt_cellFrameInAttachmentForRow:(unsigned long long)arg1 column:(unsigned long long)arg2 layoutCache:(id)arg3;
- (CGRect)cbt_collectionVisibleRectInAttachment;
- (void)dumpShadowTextIntoBuilder:(id)arg1 physicalLocation:(unsigned long long)arg2;
- (id)rectsInAttachmentSpaceForSpan:(id)arg1 localSubRange:(_NSRange)arg2;
- (double)cbt_textOriginXForRow:(unsigned long long)arg1 column:(unsigned long long)arg2 cellFrame:(CGRect)arg3;
- (double)cbt_xForBoundaryOffset:(unsigned long long)arg1 cache:(id)arg2 cellFrame:(CGRect)arg3 cellPadding:(double)arg4 cellData:(id)arg5;
- (BOOL)locateShadowPointInAttachment:(CGPoint)arg1 outUserInfo:(id *)arg2 outLocalOffset:(unsigned long long *)arg3;
- (id)initWithAttachment:(id)arg1;
- (void)setupViews;
- (void)initTableView;
- (void)layoutView;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (id)footnoteDefInfoListForTableView:(id)arg1;
- (void)onTableHeightChange:(id)arg1 height:(double)arg2;
- (void)onTableView:(id)arg1 clickLink:(id)arg2;
- (id)mdTableView;
- (void)setMdTableView:(id)arg1;
- (void).cxx_destruct;
@end
