@interface MMGCRootsTracingIvarReference : NSObject <MMGCRootsTracingObjectReference>
{
    BOOL _isStrong; // +0x8
    NSString * _name; // +0x10
    unsigned long long _type; // +0x18
    long long _offset; // +0x20
    unsigned long long _index; // +0x28
    objc_ivar * _ivar; // +0x30
}
- (id)initWithIvar:(objc_ivar *)arg1;
- (unsigned long long)_convertEncodingToType:(const char *)arg1;
- (id)description;
- (unsigned long long)indexInIvarLayout;
- (id)objectReferenceFromObject:(id)arg1;
- (id)namePath;
- (id)name;
- (unsigned long long)type;
- (long long)offset;
- (unsigned long long)index;
- (objc_ivar *)ivar;
- (BOOL)isStrong;
- (void)setIsStrong:(BOOL)arg1;
- (void).cxx_destruct;
@end

