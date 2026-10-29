@interface WCListVideoCellView : WCListBaseCellView
{
    UIView * m_tailView; // +0x98
}
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
+ (id)titleWithDataItem:(id)arg1;
+ (id)trimDescWithDataItem:(id)arg1;
- (double)maxLabelWidth;
- (double)tailViewHeight;
- (void)initTailView;
- (void)initView;
- (void)onClickEvent;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void).cxx_destruct;
@end

