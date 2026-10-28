@interface WCFinderLiveStarterSwitchModeView : UIView
{
    BOOL _isPortrait; // +0x8
    double _leftMargin; // +0x10
    double _rightMargin; // +0x18
    id /* block */ _redDotQueryBlock; // +0x20
    id /* block */ _redDotExposeBlock; // +0x28
    id /* block */ _redDotClickBlock; // +0x30
    id <WCFinderLiveStarterSwitchModeDelegate> _delegate; // +0x38
    NSArray * _itemArray; // +0x40
    NSArray * _cellArray; // +0x48
    UIScrollView * _scrollView; // +0x50
    WCFinderLiveStarterSwitchModeItem * _item; // +0x58
}
- (void)createCellArray;
- (id)getCellWithItem:(id)arg1 originX:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)playAnimation;
- (void)updateCellWithItem:(id)arg1 index:(long long)arg2 originX:(double)arg3;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (double)getCollectionViewCellWidthAtIndexPath:(id)arg1;
- (double)itemMargin;
- (double)videoContainerViewPadding;
- (id)scrollView;
- (void)initWithLiveStarterSwitchModeItem:(id)arg1;
- (void)selectWithLiveModeSubItem:(id)arg1;
- (BOOL)isPortrait;
- (void)setIsPortrait:(BOOL)arg1;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg1;
- (double)rightMargin;
- (void)setRightMargin:(double)arg1;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (id /* block */)redDotExposeBlock;
- (void)setRedDotExposeBlock:(id /* block */)arg1;
- (id /* block */)redDotClickBlock;
- (void)setRedDotClickBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)cellArray;
- (void)setCellArray:(id)arg1;
- (void)setScrollView:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
