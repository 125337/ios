@interface MMFinderLiveCreateLivePOIGuideView : UIView
{
    id <MMFinderLiveCreateLivePOIGuideViewDelegate> _delegate; // +0x8
    id <MMFinderLiveCreateLivePOIGuideViewDataSource> _dataSource; // +0x10
    WCLocationInfo * _poiInfo; // +0x18
    MMUIImageView * _poiIconView; // +0x20
    MMUIImageView * _arrowIconView; // +0x28
    MMUILabel * _locationLabel; // +0x30
    MMUIButton * _locationButton; // +0x38
    MMFinderLiveCreateLiveBottomPOIListBar * _bottomPOIListBar; // +0x40
}
- (id)init;
- (void)initIconView;
- (void)initLocationLabel;
- (void)initLocationButton;
- (void)initBottomPOIListBar;
- (void)layoutSubviews;
- (void)layoutLocationLabel;
- (void)layoutIconviews;
- (void)layoutLocationButton;
- (void)layoutBottomPOIListBarIfNeeded;
- (void)setCurrentPOIInfo:(id)arg1;
- (void)reset;
- (void)updatePOIIconIfNeeded;
- (void)updateLocationLabelContentIfNeeded;
- (void)updateBottomPOIListBarIfNeeded;
- (id)getShowCityWithWCLocationInfo:(id)arg1;
- (void)checkSelfHeightChanged;
- (id)convertLbsLifeToWCLocationInfoWithLbsLife:(id)arg1;
- (void)updateLocationCityInfo:(id)arg1;
- (id)evolvePoiAddressFromLbsLife:(id)arg1;
- (void)onLocationButtonClick:(id)arg1;
- (double)contentHeight;
- (id)lbsLifeData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)poiIconView;
- (void)setPoiIconView:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)locationButton;
- (void)setLocationButton:(id)arg1;
- (id)bottomPOIListBar;
- (void)setBottomPOIListBar:(id)arg1;
- (void).cxx_destruct;
@end
