@interface WCStoryPageControl : UIPageControl
{
    UIColor * _normalPageColor; // +0x8
    UIColor * _currentPageColor; // +0x10
    UIColor * _highlightedPageColor; // +0x18
    unsigned long long _hightlightIndexMask; // +0x20
    NSMutableArray * _pageDotsForIOS14Plus; // +0x28
}
+ (id)pageControlWithPageCount:(unsigned long long)arg1 normalPageColor:(id)arg2 currentPageColor:(id)arg3 highlightedPageColor:(id)arg4;
- (id)initWithPageCount:(unsigned long long)arg1 normalPageColor:(id)arg2 currentPageColor:(id)arg3 highlightedPageColor:(id)arg4;
- (void)setNumberOfPages:(long long)arg1;
- (void)setHightlightIndexMask:(unsigned long long)arg1;
- (BOOL)highlightedPageAtIndexs:(id)arg1;
- (BOOL)highlightedPageAtIndex:(unsigned long long)arg1;
- (BOOL)highlightedAllPage;
- (BOOL)unHighlightedPageAtIndex:(unsigned long long)arg1;
- (BOOL)unHighlightedAllPage;
- (unsigned long long)firstHighlightedIndex;
- (BOOL)isHighlightedAtIndex:(unsigned long long)arg1;
- (BOOL)hasHighlightedIndex;
- (void)deletePageAtIndex:(unsigned long long)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)updateDots;
- (void)layoutSubviews;
- (void)updatePageDots:(long long)arg1 dotViews:(id)arg2;
- (void)updateDotFrame:(id)arg1 index:(int)arg2;
- (void)setupPageDotsForIOS14Plus;
- (void)layoutPageDotsForIOS14Plus;
- (void)resetDotIndicator;
- (id)normalPageColor;
- (void)setNormalPageColor:(id)arg1;
- (id)currentPageColor;
- (void)setCurrentPageColor:(id)arg1;
- (id)highlightedPageColor;
- (void)setHighlightedPageColor:(id)arg1;
- (unsigned long long)hightlightIndexMask;
- (id)pageDotsForIOS14Plus;
- (void)setPageDotsForIOS14Plus:(id)arg1;
- (void).cxx_destruct;
@end
