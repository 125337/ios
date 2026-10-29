@interface WCFinderJumpInfoDynamicCarouselLivingViewModel : WCFinderJumpInfoDynamicCarouselViewModel
{
    FinderJumpLiveNecessaryParams * _livingParams; // +0x8
}
- (id)initWithFeedContentVM:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3;
- (BOOL)_initLiveNoticeParams;
- (id)defaultActionTitleColor;
- (id)defaultActionBackgroundColor;
- (void)reloadViewProperties;
- (id)livingParams;
- (void).cxx_destruct;
@end
