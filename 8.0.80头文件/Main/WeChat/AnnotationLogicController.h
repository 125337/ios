@interface AnnotationLogicController : MMObject
{
    NSMutableDictionary * _annotationDic; // +0x8
    QMapView * _mapView; // +0x10
    MMAddressAnnotation * _addressAnnotation; // +0x18
}
- (id)initWithMapView:(id)arg1;
- (id)allUsernames;
- (id)allAnnotations;
- (id)addFriendAnnotation:(id)arg1;
- (id)getFriendAnnotationWithUsername:(id)arg1;
- (void)removeFriendAnnotationWithUsername:(id)arg1;
- (void)removeAllFriendAnnoations;
- (id)getUserLocation;
- (id)addMyselfAnnotationWithHeading:(double)arg1;
- (id)getMyselfAnnotation;
- (void)removeMyselfAnnotation;
- (id)addAddressAnnotation:(id)arg1;
- (id)getAddressAnnotation;
- (void)removeAddressAnnotation;
- (void)setAllHeadAnnotationShowCallout:(BOOL)arg1 Animated:(BOOL)arg2;
- (void)removeAllHeadAnnotationCalloutAnimation;
- (void)removeAllFriendAnnotationCalloutAnimation;
- (void)onlyShowMe;
- (struct)getConvexRegion:(BOOL)arg1;
- (void).cxx_destruct;
@end
