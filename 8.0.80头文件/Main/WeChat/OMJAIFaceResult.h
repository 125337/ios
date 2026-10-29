@interface OMJAIFaceResult : NSObject
{
    float _age; // +0x8
    long long _faceID; // +0x10
    unsigned long long _gender; // +0x18
}
- (id)initWithFaceID:(long long)arg1 age:(float)arg2 gender:(unsigned long long)arg3;
- (long long)faceID;
- (void)setFaceID:(long long)arg1;
- (float)age;
- (void)setAge:(float)arg1;
- (unsigned long long)gender;
- (void)setGender:(unsigned long long)arg1;
@end
