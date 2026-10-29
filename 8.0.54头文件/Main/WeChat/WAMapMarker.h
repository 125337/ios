@interface WAMapMarker : QMUAnnotation
{
    BOOL _valid; // +0x8
    BOOL _calloutUseCoverView; // +0x9
    BOOL _joinCluster; // +0xa
    WAMapAnnotationView * _annotationView; // +0x10
    QMUClusterAnnotation * _cluster; // +0x18
    long long _markerId; // +0x20
    UIImage * _image; // +0x28
    double _rotate; // +0x30
    double _alpha; // +0x38
    double _zIndex; // +0x40
    UIView * _calloutCoverView; // +0x48
    UIView * _targetCalloutCoverView; // +0x50
    NSDictionary * _callout; // +0x58
    NSDictionary * _label; // +0x60
    NSString * _userData; // +0x68
    NSString * _ariaLabel; // +0x70
    unsigned long long _collisionType; // +0x78
    unsigned long long _collisionTypeCallout; // +0x80
    unsigned long long _collisionTypeLabel; // +0x88
    long long _collisionRelation; // +0x90
    CGSize _size; // +0x98
    CGPoint _anchor; // +0xa8
    CGPoint _calloutAnchor; // +0xb8
}
+ (id)copyCoverView:(id)arg1;
+ (void)collectBaseView:(id)arg1 inArr:(id)arg2;
+ (void)copyLayerProperty:(id)arg1 toView:(id)arg2;
- (void)setValid:(BOOL)arg1;
- (id)createCalloutView;
- (void)tryToCopyCoverViewIfNeed;
- (void)clearCoverView;
- (BOOL)valid;
- (id)annotationView;
- (void)setAnnotationView:(id)arg1;
- (id)cluster;
- (void)setCluster:(id)arg1;
- (long long)markerId;
- (void)setMarkerId:(long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (double)rotate;
- (void)setRotate:(double)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (double)zIndex;
- (void)setZIndex:(double)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (CGPoint)anchor;
- (void)setAnchor:(CGPoint)arg1;
- (CGPoint)calloutAnchor;
- (void)setCalloutAnchor:(CGPoint)arg1;
- (BOOL)calloutUseCoverView;
- (void)setCalloutUseCoverView:(BOOL)arg1;
- (id)calloutCoverView;
- (void)setCalloutCoverView:(id)arg1;
- (id)targetCalloutCoverView;
- (void)setTargetCalloutCoverView:(id)arg1;
- (id)callout;
- (void)setCallout:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)ariaLabel;
- (void)setAriaLabel:(id)arg1;
- (BOOL)joinCluster;
- (void)setJoinCluster:(BOOL)arg1;
- (unsigned long long)collisionType;
- (void)setCollisionType:(unsigned long long)arg1;
- (unsigned long long)collisionTypeCallout;
- (void)setCollisionTypeCallout:(unsigned long long)arg1;
- (unsigned long long)collisionTypeLabel;
- (void)setCollisionTypeLabel:(unsigned long long)arg1;
- (long long)collisionRelation;
- (void)setCollisionRelation:(long long)arg1;
- (void).cxx_destruct;
@end

