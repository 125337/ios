@interface PickLocationManager : MMObject
{
    BOOL _disablePoiDirectionDesc; // +0x8
    unsigned int _scene; // +0xc
    id <MMPickLocationDataActionDelegate> _actionDelegate; // +0x10
    NSString * _roughAddress; // +0x18
    NSString * _address; // +0x20
    NSString * _province; // +0x28
    NSString * _city; // +0x30
    NSString * _district; // +0x38
    NSString * _subAddr; // +0x40
    NSString * _poiId; // +0x48
    double _distanceToLandmark; // +0x50
    QIndoorInfo * _indoorInfo; // +0x58
    QPoiInfo * _selectPoiInfo; // +0x60
    unsigned long long _selectedPoiIndex; // +0x68
    long long _selectedSearchIndex; // +0x70
    MMPOIAnnotation * _lastSelectedSearchAnnotation; // +0x78
    MMPOIAnnotation * _selectedSearchAnnotation; // +0x80
    POIItem * _userLocationItem; // +0x88
    MMPOIAnnotation * _myPoiAnnotation; // +0x90
    NSMutableArray * _m_poiAnnotationList; // +0x98
    NSMutableArray * _m_searchAnnotationList; // +0xa0
    NSMutableArray * _m_displayAnnotationList; // +0xa8
    POIItem * _myPoiItem; // +0xb0
    MMLocatingCoordinateLogic * _locatingLogic; // +0xb8
    CLLocationCoordinate2D _coordinate; // +0xc0
}
+ (id)createAnnotationForPOIItem:(id)arg1;
+ (double)getDistanceBetween:(CLLocationCoordinate2D)arg1 AndTarget:(CLLocationCoordinate2D)arg2;
+ (CLLocationCoordinate2D)centerForAnnotations:(id)arg1;
+ (id)filterAnnotations:(id)arg1 NearAnnotation:(id)arg2;
+ (BOOL)isDisplayDisBetween:(id)arg1 AndAnnotations:(id)arg2 inMapView:(id)arg3 LimitIn:(double)arg4 IgnoreSamePOIDistance:(double)arg5;
+ (double)getMapPointPerCGPointForAnnotation:(id)arg1 AndAnnotations:(id)arg2 UnderZoomLevel:(double)arg3 IgnoreSamePOIDistance:(double)arg4;
+ (double)maxDistanceBetweenAnnotations:(id)arg1;
+ (double)getMapPointPerCGPointForAnnotationsWhenConcide:(id)arg1 underZoomLevel:(double)arg2 IgnoreSamePOIDistance:(double)arg3;
+ (BOOL)isCoordinate1:(CLLocationCoordinate2D)arg1 EqualToCoordinate2:(CLLocationCoordinate2D)arg2;
+ (double)zoomLevelForDisplayAnnotations:(id)arg1 Center:(CLLocationCoordinate2D *)arg2 LimitMaxZoomLevel:(BOOL *)arg3 InMapView:(id)arg4;
+ (double)getMaxZoomLevelForEnlargeReclosingDisplayRect:(struct)arg1 RestEdgePaddingDegree:(double)arg2 Center:(CLLocationCoordinate2D *)arg3 InMapView:(id)arg4;
+ (double)adjustDegreeForSearchAnnoations:(id)arg1;
- (id)init;
- (void)addSearchAnnotations:(id)arg1;
- (void)removeSearchAnnotations;
- (void)addDisplayAnnotations:(id)arg1;
- (void)removeDisplayAnnotations;
- (id)searchPOIResultList;
- (unsigned long long)searchPOIResultCount;
- (id)searchPOIItemAt:(unsigned long long)arg1;
- (id)poiAnnotationList;
- (id)searchAnnotationList;
- (unsigned long long)searchAnnotationCount;
- (id)displayAnnotationList;
- (unsigned long long)indexOfDisplayAnnotation:(id)arg1;
- (id)searchResultSearchIDAtIndex:(unsigned long long)arg1;
- (id)poiAnnotationSearchIDAtIndex:(unsigned long long)arg1;
- (id)searchAnnotationAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForSearchAnnotation:(id)arg1;
- (id)getSelectedSearchPOIItem;
- (id)nearbyPOIItemAt:(unsigned long long)arg1;
- (void)addNearbyPOIItem:(id)arg1 searchId:(id)arg2;
- (BOOL)hasContainNearbyPOIItem:(id)arg1;
- (void)resetNearbyPOIItems;
- (void)setSelectedSearchIndex:(long long)arg1;
- (void)resetSearchResultItems;
- (BOOL)isMyPOIItem:(id)arg1;
- (void)updateMyPOIItem;
- (id)getMyPOIItem;
- (id)getSelectedPOIItem;
- (unsigned int)getMyPOIItemIndex;
- (BOOL)isCityEqualToUserLocation:(id)arg1;
- (id)getPOIAnnotationAtIndex:(unsigned long long)arg1;
- (id)getSelectedPOIAnnotation;
- (void)addUserPOIItemWithLatitude:(double)arg1 Longitude:(double)arg2;
- (void)addNearbyPOIAnnotation:(id)arg1;
- (void)addNotCheckInPOIItemWithLatitude:(double)arg1 Longitude:(double)arg2;
- (void)updateUserLocation:(id)arg1 Pronvince:(id)arg2 City:(id)arg3;
- (BOOL)isUserLocationComplete;
- (BOOL)isLocationNearToUserLocationItem:(CLLocationCoordinate2D)arg1;
- (id)createCurrUserLocationAnnotation;
- (void)requestUserAddress:(CLLocationCoordinate2D)arg1 indoorInfo:(id)arg2 lastSelectedPoiInfo:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)shouldUseAddressWithDirection;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)roughAddress;
- (void)setRoughAddress:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)district;
- (void)setDistrict:(id)arg1;
- (id)subAddr;
- (void)setSubAddr:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (double)distanceToLandmark;
- (void)setDistanceToLandmark:(double)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)indoorInfo;
- (void)setIndoorInfo:(id)arg1;
- (id)selectPoiInfo;
- (void)setSelectPoiInfo:(id)arg1;
- (unsigned long long)selectedPoiIndex;
- (void)setSelectedPoiIndex:(unsigned long long)arg1;
- (long long)selectedSearchIndex;
- (id)lastSelectedSearchAnnotation;
- (void)setLastSelectedSearchAnnotation:(id)arg1;
- (id)selectedSearchAnnotation;
- (void)setSelectedSearchAnnotation:(id)arg1;
- (id)userLocationItem;
- (void)setUserLocationItem:(id)arg1;
- (id)myPoiAnnotation;
- (void)setMyPoiAnnotation:(id)arg1;
- (id)m_poiAnnotationList;
- (void)setM_poiAnnotationList:(id)arg1;
- (id)m_searchAnnotationList;
- (void)setM_searchAnnotationList:(id)arg1;
- (id)m_displayAnnotationList;
- (void)setM_displayAnnotationList:(id)arg1;
- (id)myPoiItem;
- (void)setMyPoiItem:(id)arg1;
- (id)locatingLogic;
- (void)setLocatingLogic:(id)arg1;
- (BOOL)disablePoiDirectionDesc;
- (void)setDisablePoiDirectionDesc:(BOOL)arg1;
- (void).cxx_destruct;
@end

