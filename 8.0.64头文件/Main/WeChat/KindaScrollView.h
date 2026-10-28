@interface KindaScrollView : KindaLayout <UIScrollViewDelegate, MMKScrollView>
{
    BOOL _m_shouldShowScrollBar; // +0xa8
    KindaUIScrollView * _m_scrollView; // +0xb0
    MMKScrollViewOnScrollCallback * _callback; // +0xb8
}
- (id)init;
- (void)setScrollWhenViewSizeEnough:(BOOL)arg1;
- (BOOL)getScrollWhenViewSizeEnough;
- (id)getView;
- (void)setShowScrollBar:(BOOL)arg1;
- (BOOL)getShowScrollBar;
- (id)getContent;
- (void)setOnScrollCallback:(id)arg1;
- (void)scrollTo:(id)arg1 xOffset:(float)arg2 yOffset:(float)arg3 animated:(BOOL)arg4;
- (void)setContentInsect:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)addView:(id)arg1;
- (void)removeView:(id)arg1;
- (void)setScrollToDimissKeyboardEnabled:(BOOL)arg1;
- (BOOL)getScrollToDimissKeyboardEnabled;
- (id)getContentOffset;
- (void)setContentOffset:(id)arg1;
- (void)setContentOffset:(id)arg1 animated:(BOOL)arg2;
- (void)setContent:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)m_scrollView;
- (void)setM_scrollView:(id)arg1;
- (BOOL)m_shouldShowScrollBar;
- (void)setM_shouldShowScrollBar:(BOOL)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
