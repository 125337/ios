@interface WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel : WCFinderJumpInfoDynamicCarouselViewModel <WCFinderLiveExt>
{
    FinderJumpLiveReservationNecessaryParams * _liveNoticeParams; // +0x8
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x10
}
- (id)initWithFeedContentVM:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3;
- (BOOL)_initLiveNoticeParams;
- (id)defaultActionTitleColor;
- (id)defaultActionBackgroundColor;
- (void)reloadViewProperties;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (id)liveNoticeParams;
- (id)liveNoticeInfo;
- (void).cxx_destruct;
@end

