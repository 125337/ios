@interface WCTimeLineAdSphereCardView : WCContentItemBaseView <WCAdvertiseSphereViewDelegate>
{
    WCAdvertiseSphereView * _sphereView; // +0x38
    SightIconView * _sightIconView; // +0x40
    double _currentProgress; // +0x48
    UIImageView * _weAppLogo; // +0x50
    UILabel * _weAppTips; // +0x58
}
+ (double)heightForMedia:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (id)fetchCurrentSnapshot;
- (id)fetchOriginSnapshot;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDecelerating;
- (void)tryToStartSphereMonitoring;
- (void)tryToStopSphereMonitoring;
- (void)tryToResetSphereMotionData;
- (void)addMediaViewForItem:(id)arg1;
- (void)addSpherePhotoViewWithMediaItem:(id)arg1;
- (void)addTopRight360Icon;
- (void)addTitleAndDescriptionForItem:(id)arg1;
- (void)genWeAppLogoAndTip;
- (id)genLabelWithFont:(double)arg1 text:(id)arg2;
- (void)resourceLoading;
- (void)resourceDidLoad;
- (void)resourceDidFailed;
- (id)getBackGroundColorWhenLoading;
- (void)resourceLoadingWithProgress:(double)arg1;
- (void)initSightIconView;
- (void)tryToResumeLoadingView;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onFullCoverButtonClicked;
- (void)onPanGestureEnd;
- (id)sphereView;
- (void)setSphereView:(id)arg1;
- (id)sightIconView;
- (void)setSightIconView:(id)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (id)weAppLogo;
- (void)setWeAppLogo:(id)arg1;
- (id)weAppTips;
- (void)setWeAppTips:(id)arg1;
- (void).cxx_destruct;
@end
