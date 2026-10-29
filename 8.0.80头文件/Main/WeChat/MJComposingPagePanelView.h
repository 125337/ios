@interface MJComposingPagePanelView : MJComposingPanelView <MJPageViewDataSource, MJPageViewDelegate>
{
    id <MJComposingPagePanelViewDelegate> _delegate; // +0x8
    MJPageView * _pageView; // +0x10
    CGSize _laidOutPageViewSize; // +0x18
}
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1 contentView:(id)arg2 pageView:(id)arg3;
- (void)setupViews;
- (void)scrollToPreviousShowingPage;
- (BOOL)scrollToPageWithEditContentType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (BOOL)scrollToPageWithSupportedSegmentType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (BOOL)scrollToPageWithTabAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (long long)numberOfPagesInPageView:(id)arg1;
- (id)pageView:(id)arg1 titleItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentItemAtIndex:(long long)arg2;
- (void)pageView:(id)arg1 didAppearPageAtIndex:(long long)arg2;
- (void)pageView:(id)arg1 didDisappearPageAtIndex:(long long)arg2;
- (void)pageView:(id)arg1 didSelectTitleItemAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (CGSize)laidOutPageViewSize;
- (void)setLaidOutPageViewSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
