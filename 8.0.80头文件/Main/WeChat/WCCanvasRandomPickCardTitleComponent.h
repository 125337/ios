@interface WCCanvasRandomPickCardTitleComponent : WCCanvasComponent <WCCanvasRandomPickCardTitleViewDelegate>
{
    NSArray * _cardItems; // +0x8
    WCCanvasRandomPickCardTitleView * _titleView; // +0x10
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)componentWillResumeState:(BOOL)arg1;
- (id)pickCardsInfo;
- (id)titleView;
- (void)randomPickCardTitleResetComponent;
- (void)randomPickCardTitleUpdateLayoutWithAnimated:(BOOL)arg1;
- (void)setVisibleWithAnimated:(BOOL)arg1;
- (id)onTitleViewFetchHighlightedContent;
- (id)cardItems;
- (void)setCardItems:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void).cxx_destruct;
@end
