@interface WCTimeLineAdBiddingSliderCardView : WCTimeLineAdSliderCardView <WCAdSliderCardViewDelegate>
+ (double)heightForMedia:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)createSliderCard:(id)arg1;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (long long)cardType;
- (BOOL)hasCardBorder;
- (void)onSliderCardExposure:(long long)arg1;
@end
