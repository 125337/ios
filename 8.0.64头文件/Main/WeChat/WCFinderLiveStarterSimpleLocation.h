@interface WCFinderLiveStarterSimpleLocation : MMUIView
{
    BOOL _isLandscape; // +0x8
    unsigned long long _type; // +0x10
    id <LiveStarterSimpleLocationDelegate> _delegate; // +0x18
    MMUIImageView * _leftImageView; // +0x20
    MMUIButton * _locationButton; // +0x28
    MMUILabel * _locationLabel; // +0x30
    MMUIImageView * _arrowImageView; // +0x38
    WCFinderLiveStarterSimpleBottomLocation * _bottomLocation; // +0x40
    UIView * _separateLineUnderDesc; // +0x48
    WCLocationInfo * _poiInfo; // +0x50
    LbsLifeData * _lbsLifeData; // +0x58
}
- (id)initWithDelegate:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateLandscape:(BOOL)arg1;
- (void)locationClick:(id)arg1;
- (void)updatePOIViewWith:(id)arg1;
- (id)getShowCityWithWCLocationInfo:(id)arg1;
- (id)locationLabel;
- (id)locationButton;
- (id)arrowImageView;
- (id)bottomLocation;
- (id)separateLineUnderDesc;
- (id)leftImageView;
- (void)updateCurrentType;
- (BOOL)updateSimpleLocationLBSLife:(id)arg1;
- (BOOL)showBottomLocation;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setLeftImageView:(id)arg1;
- (void)setLocationButton:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setBottomLocation:(id)arg1;
- (void)setSeparateLineUnderDesc:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)lbsLifeData;
- (void)setLbsLifeData:(id)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (void).cxx_destruct;
@end
