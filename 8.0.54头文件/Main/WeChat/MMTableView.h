@interface MMTableView : UITableView
{
    id <MMTableViewDelegate> m_delegateProxy; // +0x8
    BOOL cancelButtonTouchsTrack; // +0x10
    Class cancelTouchsTrackClass; // +0x18
    UIView * _footerView; // +0x20
    UIView * _footerViewBackground; // +0x28
    UIColor * _tailColor; // +0x30
    BOOL m_dontDrawFooterLine; // +0x38
    CGPoint m_lastSetContentOffset; // +0x40
    MMTableViewGestureHelper * _gestureHelper; // +0x50
    UIPanGestureRecognizer * _dragGesture; // +0x58
    BOOL _bTriggerRecEnabled; // +0x60
    CGPoint _beginRecOffset; // +0x68
    BOOL _isMainView; // +0x78
    BOOL _isHideExtraFooterLine; // +0x79
    BOOL _bForceContentInsetAdjustAutomatic; // +0x7a
    BOOL _enableContentInsetForAdjustAutomatic; // +0x7b
    BOOL _isReloadingData; // +0x7c
    BOOL _forbidFixSearchBarHeaderView; // +0x7d
    BOOL _enableCustomCellSelectedStatus; // +0x7e
    BOOL _shouldSelectedCellRecoverAnimated; // +0x7f
    id <MMTableViewDelegate> m_delegate; // +0x80
    MMTableViewIndexView * _indexView; // +0x88
    double _topInsetUnderContentViewY; // +0x90
    double _dragNotifyOffset; // +0x98
    UIView * _tailView; // +0xa0
    NSIndexPath * _singleSelectedIndexPath; // +0xa8
    GradientMaskBottomView * _maskedBottomView; // +0xb0
    _TtC7WCUIKit21AnimateProgressRunner * _progressRunner; // +0xb8
}
+ (id /* block */)zz_createWithStyle;
+ (id /* block */)zz_create;
+ (double)topPaddingForPlainTableSectionHeaderView;
+ (double)heightForPlainTableSectionHeaderView;
+ (id)genPlainTableSectionHeaderView:(double)arg1 title:(id)arg2;
+ (id)genPlainTableSectionHeaderView:(double)arg1 title:(id)arg2 backgroundColor:(id)arg3;
+ (id)genNoPaddingPlainTableSectionHeaderView:(double)arg1 title:(id)arg2;
- (id)zz_setup;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)reloadData;
- (void)reloadTailColor;
- (void)reloadIndexView;
- (void)reloadTailView;
- (long long)firstSectionIndex;
- (void)setContentSize:(CGSize)arg1;
- (void)reloadDataAnimated;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)fitVisionOSTransparentBackground;
- (void)setDragNotifyOffset:(double)arg1;
- (void)removeDragGesture;
- (void)initDragGesture;
- (void)handleDragGesture:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)setContentInsetTop:(double)arg1 andBottom:(double)arg2;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (UIEdgeInsets)contentInset;
- (void)setScrollIndicatorInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)scrollIndicatorInsets;
- (void)drawFooterLine:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)addSubview:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)useMMTableViewIndexViewWithDelegate:(id)arg1;
- (void)setBForceContentInsetAdjustAutomatic:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (double)tableAreaHeight;
- (void)safeAreaInsetsDidChange;
- (void)showGradientBottomMaskWithContent:(id)arg1;
- (void)showGradientBottomMaskWithContent:(id)arg1 topPadding:(double)arg2 bottomPadding:(double)arg3;
- (BOOL)hasSearchBarHeader;
- (id)indexPathForSelectedRow;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3;
- (BOOL)cancelButtonTouchsTrack;
- (void)setCancelButtonTouchsTrack:(BOOL)arg1;
- (Class)cancelTouchsTrackClass;
- (void)setCancelTouchsTrackClass:(Class)arg1;
- (id)tailColor;
- (void)setTailColor:(id)arg1;
- (BOOL)isMainView;
- (void)setIsMainView:(BOOL)arg1;
- (id)indexView;
- (void)setIndexView:(id)arg1;
- (BOOL)isHideExtraFooterLine;
- (void)setIsHideExtraFooterLine:(BOOL)arg1;
- (BOOL)bForceContentInsetAdjustAutomatic;
- (BOOL)enableContentInsetForAdjustAutomatic;
- (void)setEnableContentInsetForAdjustAutomatic:(BOOL)arg1;
- (double)topInsetUnderContentViewY;
- (void)setTopInsetUnderContentViewY:(double)arg1;
- (BOOL)isReloadingData;
- (double)dragNotifyOffset;
- (id)tailView;
- (void)setTailView:(id)arg1;
- (BOOL)forbidFixSearchBarHeaderView;
- (void)setForbidFixSearchBarHeaderView:(BOOL)arg1;
- (BOOL)enableCustomCellSelectedStatus;
- (void)setEnableCustomCellSelectedStatus:(BOOL)arg1;
- (id)singleSelectedIndexPath;
- (void)setSingleSelectedIndexPath:(id)arg1;
- (BOOL)shouldSelectedCellRecoverAnimated;
- (void)setShouldSelectedCellRecoverAnimated:(BOOL)arg1;
- (id)maskedBottomView;
- (void)setMaskedBottomView:(id)arg1;
- (id)progressRunner;
- (void)setProgressRunner:(id)arg1;
- (void).cxx_destruct;
@end

