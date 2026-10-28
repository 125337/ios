@interface QMarkerPayload : NSObject
{
    BOOL _forceLoad; // +0x8
    BOOL _visibility; // +0x9
    BOOL _interactive; // +0xa
    BOOL _avoidAnnotation; // +0xb
    BOOL _avoidOtherAnnotations; // +0xc
    int _priority; // +0x10
    int _minScaleLevel; // +0x14
    int _maxScaleLevel; // +0x18
    int _geotype; // +0x1c
    int _iconType; // +0x20
    double _alpha; // +0x28
    NSString * _iconName; // +0x30
    double _angle; // +0x38
    CGPoint _anchor; // +0x40
    struct _coordinate; // +0x50
    CGPoint _scale; // +0x60
}
- (id)init;
- (int)priority;
- (void)setPriority:(int)arg1;
- (int)minScaleLevel;
- (void)setMinScaleLevel:(int)arg1;
- (int)maxScaleLevel;
- (void)setMaxScaleLevel:(int)arg1;
- (BOOL)forceLoad;
- (void)setForceLoad:(BOOL)arg1;
- (BOOL)visibility;
- (void)setVisibility:(BOOL)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (BOOL)interactive;
- (void)setInteractive:(BOOL)arg1;
- (CGPoint)anchor;
- (void)setAnchor:(CGPoint)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (struct)coordinate;
- (void)setCoordinate:(struct)arg1;
- (int)geotype;
- (void)setGeotype:(int)arg1;
- (int)iconType;
- (void)setIconType:(int)arg1;
- (BOOL)avoidAnnotation;
- (void)setAvoidAnnotation:(BOOL)arg1;
- (BOOL)avoidOtherAnnotations;
- (void)setAvoidOtherAnnotations:(BOOL)arg1;
- (double)angle;
- (void)setAngle:(double)arg1;
- (CGPoint)scale;
- (void)setScale:(CGPoint)arg1;
- (void).cxx_destruct;
@end
