@interface WCTimeLineAdFinderTopicView : WCContentItemBaseView <WCAdSliderCardViewDelegate, MMWebImageViewDelegate>
{
    WCAdSliderCardView * _sliderCard; // +0x38
    MMUIButton * _topicInfoBar; // +0x40
    MMUILabel * _relationTextLabel; // +0x48
}
+ (double)heightForMedia:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)contentItemWillDisplay;
- (void)initSliderCard:(id)arg1;
- (id)createSliderCard:(id)arg1;
- (void)initTopicInfo:(id)arg1;
- (void)initRelationInfo:(id)arg1;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)updateDataInDetail:(id)arg1;
- (void)onSliderCardClick:(long long)arg1 clickType:(long long)arg2;
- (void)onSliderCardExposure:(long long)arg1;
- (void)onAutoSlideFrom:(long long)arg1 to:(long long)arg2;
- (void)onTopicInfoBarClick;
- (void)clickToJump;
- (id)fetchMediaId;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)sliderCard;
- (void)setSliderCard:(id)arg1;
- (id)topicInfoBar;
- (void)setTopicInfoBar:(id)arg1;
- (id)relationTextLabel;
- (void)setRelationTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

