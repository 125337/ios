@interface WCCanvasDownloadScrollListComponent : WCCanvasComponent <UIScrollViewDelegate, scrollViewDelegate>
{
    BOOL _m_isAnimating; // +0x8
    BOOL _m_hasScroll; // +0x9
    UIView * _m_bgMask; // +0x10
    MMScrollView * _m_scrollView; // +0x18
    NSMutableArray * _m_arrCanvasComponent; // +0x20
    CGPoint _m_curOffset; // +0x28
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
+ (double)calcMaxHeightWithGroup:(id)arg1 maxWidth:(double)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)clearStatus;
- (void)resetScrollView;
- (void)animationShowWithIndex:(unsigned long long)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (id)fetchFirstComponentForType:(int)arg1;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)notifyWhenScrollViewDidScrollOrDidEndDecelerating:(id)arg1;
- (void)notifyWillAppearScrollView:(CGPoint)arg1;
- (void)notifyDisappearScrollView:(CGPoint)arg1;
- (void)notifyAppearOrDisappearWhenScrollWithLastOffset:(CGPoint)arg1 curOffset:(CGPoint)arg2;
- (id)m_bgMask;
- (id)m_scrollView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setM_bgMask:(id)arg1;
- (void)setM_scrollView:(id)arg1;
- (BOOL)m_isAnimating;
- (void)setM_isAnimating:(BOOL)arg1;
- (CGPoint)m_curOffset;
- (void)setM_curOffset:(CGPoint)arg1;
- (BOOL)m_hasScroll;
- (void)setM_hasScroll:(BOOL)arg1;
- (id)m_arrCanvasComponent;
- (void)setM_arrCanvasComponent:(id)arg1;
- (void).cxx_destruct;
@end
