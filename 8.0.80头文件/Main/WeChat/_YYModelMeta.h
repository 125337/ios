@interface _YYModelMeta : NSObject
{
    YYClassInfo * _classInfo; // +0x8
    NSDictionary * _mapper; // +0x10
    NSArray * _allPropertyMetas; // +0x18
    _YYModelPropertyMapperNode * _mapperNode; // +0x20
    NSArray * _keyPathPropertyMetas; // +0x28
    NSArray * _multiKeysPropertyMetas; // +0x30
    unsigned long long _keyMappedCount; // +0x38
    unsigned long long _nsType; // +0x40
    BOOL _hasCustomWillTransformFromDictionary; // +0x48
    BOOL _hasCustomTransformFromDictionary; // +0x49
    BOOL _hasCustomTransformToDictionary; // +0x4a
    BOOL _hasCustomClassFromDictionary; // +0x4b
}
+ (id)metaWithClass:(Class)arg1 configTag:(id)arg2;
- (id)initWithClass:(Class)arg1 configTag:(id)arg2;
- (id)getParentDicOfPath:(id)arg1 inDic:(id)arg2 needGenerate:(BOOL)arg3;
- (id)genPropertyMapperByDic:(id)arg1;
- (void).cxx_destruct;
@end
