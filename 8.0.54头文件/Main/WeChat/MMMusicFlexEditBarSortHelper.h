@interface MMMusicFlexEditBarSortHelper : NSObject
{
    UIScrollView * _scrollView; // +0x8
    BOOL _bSortMode; // +0x10
    UIView * _draggingRealCell; // +0x18
    UIView * _draggingShadowCell; // +0x20
    unsigned long long _initialShadowIndex; // +0x28
    unsigned long long _curShadowIndex; // +0x30
    NSMutableArray * _arrCellInfo; // +0x38
    NSMutableArray * _arrSubView; // +0x40
    MMTimer * _autoScrollTimer; // +0x48
    double _autoScrollDiff; // +0x50
    id <MMMusicFlexEditBarSortHelperDelegate> _delegate; // +0x58
}
- (id)initWithScrollView:(id)arg1;
- (void)commonInit;
- (BOOL)bSortMode;
- (id)arrSubView;
- (id)findCellByLocation:(CGPoint)arg1;
- (void)doInitForSortWithLongPressLocation:(CGPoint)arg1;
- (void)checkResortWithLocation:(CGPoint)arg1;
- (void)autoScrollIfNeedWithLocation:(CGPoint)arg1;
- (void)onAutoScrollTimer;
- (void)sortFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (id)genShadowViewWithRealView:(id)arg1;
- (void)onLongPressGes:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

