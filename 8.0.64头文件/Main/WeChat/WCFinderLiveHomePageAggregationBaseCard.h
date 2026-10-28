@interface WCFinderLiveHomePageAggregationBaseCard : UIView
{
    MMWebImageView * _bgImgView; // +0x8
    WCFinderLiveAggregationCard * _card; // +0x10
    id /* block */ _backgroundTapAction; // +0x18
    WCFinderLiveHomePageFeedAggregationCardVM * _feedVM; // +0x20
    id /* block */ _itemActionBlock; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)arg1;
- (BOOL)useImgMode;
- (id)currentGroupEntryBuffer;
- (id)currentGroupJumpBypassBuffer;
- (unsigned long long)currenLoopPageIndex;
- (void)willDisplay;
- (void)didEndDisplay;
- (id)bgImgView;
- (void)setBgImgView:(id)arg1;
- (id)card;
- (void)setCard:(id)arg1;
- (id /* block */)backgroundTapAction;
- (void)setBackgroundTapAction:(id /* block */)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id /* block */)itemActionBlock;
- (void)setItemActionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
