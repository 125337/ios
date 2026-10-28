@interface CameraScanTabView : MMUIView <UIScrollViewDelegate>
{
    BOOL _isForceUpdatingContentOffset; // +0x8
    unsigned long long _currTabIndex; // +0x10
    unsigned long long _lastScrollSwitchBeginTimeStamp; // +0x18
    id <CameraScanTabViewDelegate> _tabViewDelegate; // +0x20
    unsigned long long _initTabIndex; // +0x28
    UIFont * _titleFont; // +0x30
    UIColor * _titleNormalColor; // +0x38
    UIColor * _titleHighlightColor; // +0x40
    double _scrollViewHeight; // +0x48
    NSMutableArray * _tabButtonList; // +0x50
    UIScrollView * _scrollView; // +0x58
    UIView * _indectorView; // +0x60
    unsigned long long _targetTabIndex; // +0x68
    unsigned long long _beginDragTabIndex; // +0x70
    long long _fromTabAction; // +0x78
    NSMutableArray * _voiceOverElements; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)appendWithTitle:(id)arg1 tag:(unsigned long long)arg2;
- (void)showTabButtons;
- (void)scrollSwitchToTabIndex:(long long)arg1 hasShock:(BOOL)arg2 tabAction:(long long)arg3;
- (void)onDidLayout:(CGRect)arg1;
- (unsigned long long)tabButtonsCount;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (BOOL)isTabIndexValid:(long long)arg1;
- (void)setScrollTargetIndex:(unsigned long long)arg1 tabAction:(long long)arg2;
- (void)scrollDidSwitchToTargetIndex;
- (BOOL)isSwitchingToTargetIndex;
- (void)takeShock;
- (void)selectTabIndex:(long long)arg1 hasShock:(BOOL)arg2 tabAction:(long long)arg3;
- (long long)calDotPointTabIndexWithScrollView:(id)arg1;
- (CGPoint)calContentOffsetForTabBtnIndex:(unsigned long long)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onTabButtonClick:(id)arg1;
- (id)voiceOverElements;
- (void)initVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (unsigned long long)currTabIndex;
- (void)setCurrTabIndex:(unsigned long long)arg1;
- (unsigned long long)lastScrollSwitchBeginTimeStamp;
- (id)tabViewDelegate;
- (void)setTabViewDelegate:(id)arg1;
- (unsigned long long)initTabIndex;
- (void)setInitTabIndex:(unsigned long long)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)titleNormalColor;
- (void)setTitleNormalColor:(id)arg1;
- (id)titleHighlightColor;
- (void)setTitleHighlightColor:(id)arg1;
- (double)scrollViewHeight;
- (void)setScrollViewHeight:(double)arg1;
- (id)tabButtonList;
- (void)setTabButtonList:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)indectorView;
- (void)setIndectorView:(id)arg1;
- (unsigned long long)targetTabIndex;
- (void)setTargetTabIndex:(unsigned long long)arg1;
- (unsigned long long)beginDragTabIndex;
- (void)setBeginDragTabIndex:(unsigned long long)arg1;
- (long long)fromTabAction;
- (void)setFromTabAction:(long long)arg1;
- (BOOL)isForceUpdatingContentOffset;
- (void)setIsForceUpdatingContentOffset:(BOOL)arg1;
- (void)setVoiceOverElements:(id)arg1;
- (void).cxx_destruct;
@end
