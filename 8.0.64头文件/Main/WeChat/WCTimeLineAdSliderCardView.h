@interface WCTimeLineAdSliderCardView : WCContentItemBaseView <WCAdSliderCardViewDelegate, WCAdSliderCardProductViewDelegate, WCAdSliderCardOpeningAnimationViewDelegate>
{
    WCAdSliderCardView * _sliderCard; // +0x38
    WCAdSliderCardProductView * _productView; // +0x40
    WCAdSliderCardOpeningAnimationView * _openingAnimationView; // +0x48
}
+ (double)heightForMedia:(id)arg1;
+ (BOOL)hasProductInfo:(id)arg1;
+ (BOOL)hasOpeningAnimation:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)initSliderCard;
- (id)createSliderCard:(id)arg1;
- (void)initProductView;
- (void)initOpeningAnimationView;
- (void)contentItemWillDisplay;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)onSliderCardClick:(long long)arg1 clickType:(long long)arg2;
- (void)onSliderCardSlideJump;
- (void)onSliderCardExposure:(long long)arg1;
- (void)onAutoSlideFrom:(long long)arg1 to:(long long)arg2;
- (void)onSliderCardSlideWithDuration:(unsigned long long)arg1;
- (void)onSliderCardWillChangeIndex:(long long)arg1;
- (void)onProductBarClick:(long long)arg1;
- (void)onOpeningAnimationDisplayFinished;
- (id)fetchMediaId;
- (id)sliderCardLogic;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (id)sliderCard;
- (void)setSliderCard:(id)arg1;
- (id)productView;
- (void)setProductView:(id)arg1;
- (id)openingAnimationView;
- (void)setOpeningAnimationView:(id)arg1;
- (void).cxx_destruct;
@end
