@interface WSSimilarEmotCell : MMTableViewCell <WSSimilarEmotItemDelegate>
{
    id <WSSimilarEmotCellDelegate> _delegate; // +0x8
    unsigned long long _startIndex; // +0x10
    NSMutableArray * _itemViewList; // +0x18
    NSArray * _itemModels; // +0x20
}
+ (double)itemWidthWithCellWidth:(double)arg1;
+ (double)itemGapPerLine:(double)arg1;
+ (long long)itemCountPerLine:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configSimilarItems:(id)arg1 itemViewWidth:(double)arg2;
- (void)layoutSubviews;
- (void)handleItemClick:(id)arg1 model:(id)arg2;
- (void)handleItemLongPress:(id)arg1 model:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)startIndex;
- (void)setStartIndex:(unsigned long long)arg1;
- (id)itemViewList;
- (void)setItemViewList:(id)arg1;
- (id)itemModels;
- (void)setItemModels:(id)arg1;
- (void).cxx_destruct;
@end

