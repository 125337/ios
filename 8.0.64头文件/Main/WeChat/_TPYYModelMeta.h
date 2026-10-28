@interface _TPYYModelMeta : NSObject
{
    TPYYClassInfo * _classInfo; // +0x8
    NSDictionary * _mapper; // +0x10
    NSArray * _allPropertyMetas; // +0x18
    NSArray * _keyPathPropertyMetas; // +0x20
    NSArray * _multiKeysPropertyMetas; // +0x28
    unsigned long long _keyMappedCount; // +0x30
    unsigned long long _nsType; // +0x38
    BOOL _hasCustomWillTransformFromDictionary; // +0x40
    BOOL _hasCustomTransformFromDictionary; // +0x41
    BOOL _hasCustomTransformToDictionary; // +0x42
    BOOL _hasCustomClassFromDictionary; // +0x43
}
+ (id)metaWithClass:(Class)arg1;
- (id)initWithClass:(Class)arg1;
- (void).cxx_destruct;
@end
