@interface MMHeadImageAnnotation : MMObject <QAnnotation>
{
    UserPositionItem * _userPositionItem; // +0x8
    MMHeadImageAnnotationView * _annotationView; // +0x10
    BOOL _showCallout; // +0x18
}
- (id)initWithUserPostionItem:(id)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (void)setHeading:(double)arg1;
- (void)setShowCallout:(BOOL)arg1 Animated:(BOOL)arg2;
- (id)userPositionItem;
- (void)setUserPositionItem:(id)arg1;
- (id)annotationView;
- (void)setAnnotationView:(id)arg1;
- (BOOL)showCallout;
- (void).cxx_destruct;
@end
