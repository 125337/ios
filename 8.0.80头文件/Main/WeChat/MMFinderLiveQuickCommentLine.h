@interface MMFinderLiveQuickCommentLine : UIView
{
    double _maxWidth; // +0x8
    NSMutableArray * _itemViewArr; // +0x10
}
- (void)layoutSubviews;
- (BOOL)tryInsertItemView:(id)arg1;
- (id)itemViewArr;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setItemViewArr:(id)arg1;
- (void).cxx_destruct;
@end
