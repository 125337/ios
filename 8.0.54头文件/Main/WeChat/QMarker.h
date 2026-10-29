@interface QMarker : QShape <QOverlay>
{
    BOOL _isHidden; // +0x8
    BOOL _enabled; // +0x9
    BOOL _forceLoad; // +0xa
    BOOL _avoidAnnotation; // +0xb
    BOOL _avoidOtherAnnotations; // +0xc
    int _zIndex; // +0x10
    int _markerID; // +0x14
    int _minScaleLevel; // +0x18
    int _maxScaleLevel; // +0x1c
    int _geotype; // +0x20
    NSString * _title; // +0x28
    long long _displayLevel; // +0x30
    double _alpha; // +0x38
    UIImage * _image; // +0x40
    QMarkerManager * _manager; // +0x48
    NSString * _iconPath; // +0x50
    NSString * _imgInstruction; // +0x58
    CGPoint _centerOffset; // +0x60
    CLLocationCoordinate2D _coordinate; // +0x70
}
- (id)init;
- (void)setZIndex:(int)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setCenterOffset:(CGPoint)arg1;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (void)setAlpha:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setDisplayLevel:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (int)zIndex;
- (long long)displayLevel;
- (BOOL)isHidden;
- (BOOL)enabled;
- (CGPoint)centerOffset;
- (double)alpha;
- (id)image;
- (CLLocationCoordinate2D)coordinate;
- (id)manager;
- (void)setManager:(id)arg1;
- (int)markerID;
- (void)setMarkerID:(int)arg1;
- (int)minScaleLevel;
- (void)setMinScaleLevel:(int)arg1;
- (int)maxScaleLevel;
- (void)setMaxScaleLevel:(int)arg1;
- (BOOL)forceLoad;
- (void)setForceLoad:(BOOL)arg1;
- (int)geotype;
- (void)setGeotype:(int)arg1;
- (id)iconPath;
- (void)setIconPath:(id)arg1;
- (BOOL)avoidAnnotation;
- (void)setAvoidAnnotation:(BOOL)arg1;
- (BOOL)avoidOtherAnnotations;
- (void)setAvoidOtherAnnotations:(BOOL)arg1;
- (id)imgInstruction;
- (void)setImgInstruction:(id)arg1;
- (void).cxx_destruct;
@end

