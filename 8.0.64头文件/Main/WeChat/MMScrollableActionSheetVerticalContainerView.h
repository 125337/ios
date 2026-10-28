@interface MMScrollableActionSheetVerticalContainerView : MMUIView <MMScrollableActionSheetVerticalRowViewDelegate, MMScrollableActionSheetCustomHeaderViewInterface, MMScrollableActionSheetCustomFooterViewInterface>
{
    double _topPadding; // +0x8
    double _bottomPadding; // +0x10
    double _cachedCustomHeaderViewHeight; // +0x18
    double _cachedCustomFooterViewHeight; // +0x20
    id <MMScrollableActionSheetVerticalContainerViewDelegate> _delegate; // +0x28
    NSMutableArray * _rowInfoList; // +0x30
    NSMutableDictionary * _rowType2RowViewMap; // +0x38
}
- (id)initWithDelegate:(id)arg1;
- (void)reset;
- (void)setVerticalRowInfoList:(id)arg1;
- (void)addOrUpdateVerticalRowInfo:(id)arg1;
- (void)setNeedRecalcuateCustomHeaderViewHeight;
- (double)calcuateCustomHeaderViewHeight;
- (double)calcuateCustomFooterViewHeight;
- (long long)getRowInfoIndexWithRowType:(unsigned int)arg1;
- (id)generateRowViewForRowInfo:(id)arg1;
- (void)sortRowInfoList;
- (void)layoutSubviews;
- (double)layoutVerticalRowViews;
- (void)onTappedRowInfo:(id)arg1;
- (double)topPadding;
- (void)setTopPadding:(double)arg1;
- (double)bottomPadding;
- (void)setBottomPadding:(double)arg1;
- (double)cachedCustomHeaderViewHeight;
- (void)setCachedCustomHeaderViewHeight:(double)arg1;
- (double)cachedCustomFooterViewHeight;
- (void)setCachedCustomFooterViewHeight:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rowInfoList;
- (void)setRowInfoList:(id)arg1;
- (id)rowType2RowViewMap;
- (void)setRowType2RowViewMap:(id)arg1;
- (void).cxx_destruct;
@end
