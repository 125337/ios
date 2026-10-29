@interface MMFinderLiveCustomPIPMinimizeIndicatorContainerView : UIView
{
    MMLiveTaskId * _liveTaskId; // +0x8
    MMFinderLivePIPMinimizeIndicatorView * _ktvIndicatorView; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)configBasicAttributes;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutKTVIndicatorView;
- (void)createKTVIndicatorView;
- (void)displayKTVIndicator;
- (void)hideIndicators;
- (void)forceRefreshUI;
- (void)hideIndicatorsExcept:(id)arg1;
- (void)removeAllSubViews;
- (void)hideKTVIndicator;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)ktvIndicatorView;
- (void)setKtvIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end

