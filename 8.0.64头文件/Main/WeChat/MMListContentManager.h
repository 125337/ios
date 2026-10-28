@interface MMListContentManager : NSObject <MMListContentDataSource, MMListContentUIDelegate>
{
    UIColor * _backgroundColor; // +0x8
    double _cornerRadius; // +0x10
    NSMutableArray * _cellArray; // +0x18
    MMListContentView * _listContentView; // +0x20
}
+ (id)commonManager;
- (id)init;
- (id)assembleListView;
- (id)assembleListViewAndClear;
- (id)listContentViewForCells:(id)arg1;
- (id)singleCellViewWithConfig:(id)arg1;
- (void)initCellArrayIfNeeded;
- (void)addCell:(id)arg1;
- (void)addCells:(id)arg1;
- (void)insertCell:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)removeCell:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3;
- (id)labelWithText:(id)arg1;
- (id)subtitleLabelWithText:(id)arg1;
- (id)descriptionLabelWithText:(id)arg1;
- (id)accessoryControlWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 isModeOn:(BOOL)arg4;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)cellArray;
- (void)setCellArray:(id)arg1;
- (id)listContentView;
- (void)setListContentView:(id)arg1;
- (void).cxx_destruct;
@end
