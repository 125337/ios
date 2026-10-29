@interface RotatedRect : NSObject
{
    RotatedRect native; // +0x8
    Point2f * _center; // +0x20
    Size2f * _size; // +0x28
    double _angle; // +0x30
}
+ (id)fromNative:(void *)arg1;
- (void *)nativeRef;
- (id)init;
- (id)initWithCenter:(id)arg1 size:(id)arg2 angle:(double)arg3;
- (id)initWithVals:(id)arg1;
- (void)set:(id)arg1;
- (id)points;
- (id)boundingRect;
- (id)clone;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)center;
- (void)setCenter:(id)arg1;
- (id)size;
- (void)setSize:(id)arg1;
- (double)angle;
- (void)setAngle:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
