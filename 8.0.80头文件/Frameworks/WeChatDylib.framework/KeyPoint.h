@interface KeyPoint : NSObject
{
    KeyPoint native; // +0x8
    float _size; // +0x24
    float _angle; // +0x28
    float _response; // +0x2c
    int _octave; // +0x30
    int _classId; // +0x34
    Point2f * _pt; // +0x38
}
+ (id)fromNative:(void *)arg1;
- (void *)nativeRef;
- (id)init;
- (id)initWithX:(float)arg1 y:(float)arg2 size:(float)arg3 angle:(float)arg4 response:(float)arg5 octave:(int)arg6 classId:(int)arg7;
- (id)initWithX:(float)arg1 y:(float)arg2 size:(float)arg3 angle:(float)arg4 response:(float)arg5 octave:(int)arg6;
- (id)initWithX:(float)arg1 y:(float)arg2 size:(float)arg3 angle:(float)arg4 response:(float)arg5;
- (id)initWithX:(float)arg1 y:(float)arg2 size:(float)arg3 angle:(float)arg4;
- (id)initWithX:(float)arg1 y:(float)arg2 size:(float)arg3;
- (id)clone;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)pt;
- (void)setPt:(id)arg1;
- (float)size;
- (void)setSize:(float)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (float)response;
- (void)setResponse:(float)arg1;
- (int)octave;
- (void)setOctave:(int)arg1;
- (int)classId;
- (void)setClassId:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
