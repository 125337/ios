@interface WCCanvasGroupListComponent : WCCanvasComponent <UIScrollViewDelegate, scrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate>
{
    BOOL _needRelayout; // +0x8
    BOOL _shouldFixSearchCanvas; // +0x9
    BOOL _carouselRunningFlag; // +0xa
    BOOL _componentAppearedFlag; // +0xb
    BOOL _componentBackgroundFlag; // +0xc
    BOOL _componentDraggingFlag; // +0xd
    BOOL _turnPageAnimatingFlag; // +0xe
    unsigned int _m_iCurIndex; // +0x10
    UIView * _m_blackMask; // +0x18
    MMScrollView * _m_scrollView; // +0x20
    WCCanvasAdPageIndicator * _pageIndicator; // +0x28
    NSMutableArray * _m_arrTable; // +0x30
    UILabel * _m_pageLabel; // +0x38
    long long _pageLabelCurrentPage; // +0x40
    WCCanvasArrowRightIcon * _arrowRightIcon; // +0x48
    MMTimer * _autoCarouselTimer; // +0x50
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
+ (double)calcHeightForTableViewWithGroup:(id)arg1 maxWidth:(double)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)clearStatus;
- (void)resetScrollView;
- (void)animationShowWithIndex:(unsigned long long)arg1;
- (void)addItemToScrollView;
- (BOOL)shouldShowRightDirectionIcon:(int)arg1;
- (BOOL)shouldForbidDelegateShowArrowDown;
- (BOOL)shouldShowDownDirectionIcon;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (id)fetchFirstComponentForType:(int)arg1;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setPageCtrlTo:(unsigned int)arg1;
- (void)setPageCtrlColorFor:(unsigned int)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)initArrowRightIcon;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)notifyWillAppearPage:(long long)arg1;
- (void)notifyFullyAppearPage:(long long)arg1;
- (void)notifyDisappearPage:(long long)arg1;
- (void)componentReportAddExposureCountWithPage:(long long)arg1;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (id)m_blackMask;
- (id)m_scrollView;
- (id)pageIndicator;
- (id)m_pageLabel;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)getPreloadWebViewBottomInScrollGroupComponent;
- (BOOL)hasPreloadWebViewInScrollGroupComponent;
- (long long)getDataIndexFromViewIndex:(long long)arg1;
- (long long)getViewIndexFromDataIndex:(long long)arg1;
- (void)adjustScrollView;
- (void)tryStartAutoCarousel;
- (void)stopAutoCarousel;
- (void)turnPageImmediatelyAndInitTimer;
- (void)turnPage;
- (void)updatePageIndicatorByScrollView;
- (void)setPageIndicatorFrame;
- (void)setM_blackMask:(id)arg1;
- (void)setM_scrollView:(id)arg1;
- (void)setPageIndicator:(id)arg1;
- (unsigned int)m_iCurIndex;
- (void)setM_iCurIndex:(unsigned int)arg1;
- (id)m_arrTable;
- (void)setM_arrTable:(id)arg1;
- (void)setM_pageLabel:(id)arg1;
- (long long)pageLabelCurrentPage;
- (void)setPageLabelCurrentPage:(long long)arg1;
- (id)arrowRightIcon;
- (void)setArrowRightIcon:(id)arg1;
- (BOOL)needRelayout;
- (void)setNeedRelayout:(BOOL)arg1;
- (BOOL)shouldFixSearchCanvas;
- (void)setShouldFixSearchCanvas:(BOOL)arg1;
- (id)autoCarouselTimer;
- (void)setAutoCarouselTimer:(id)arg1;
- (BOOL)carouselRunningFlag;
- (void)setCarouselRunningFlag:(BOOL)arg1;
- (BOOL)componentAppearedFlag;
- (void)setComponentAppearedFlag:(BOOL)arg1;
- (BOOL)componentBackgroundFlag;
- (void)setComponentBackgroundFlag:(BOOL)arg1;
- (BOOL)componentDraggingFlag;
- (void)setComponentDraggingFlag:(BOOL)arg1;
- (BOOL)turnPageAnimatingFlag;
- (void)setTurnPageAnimatingFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
