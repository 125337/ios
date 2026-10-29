@interface WCTimeLineAdFinderView : WCContentItemBaseView <WCFinderShareAbstractCell>
{
    SightIconView * _playIconView; // +0x38
    MMWebImageView * _contentImageView; // +0x40
    UIView * _hlView; // +0x48
    CGRect _fromRect; // +0x50
}
+ (double)heightForMedia:(id)arg1;
+ (CGSize)getImageSizeWithWidth:(double)arg1 andHeight:(double)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)contentImageView;
- (id)playIconView;
- (id)hlView;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (void)doShareAnimation;
- (id)getImageUrl:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setContentImageView:(id)arg1;
- (void)setHlView:(id)arg1;
- (CGRect)fromRect;
- (void)setFromRect:(CGRect)arg1;
- (void).cxx_destruct;
@end

