@interface _TPYYModelPropertyMeta : NSObject
{
    NSString * _name; // +0x8
    unsigned long long _type; // +0x10
    unsigned long long _nsType; // +0x18
    BOOL _isCNumber; // +0x20
    Class _cls; // +0x28
    Class _genericCls; // +0x30
    SEL _getter; // +0x38
    SEL _setter; // +0x40
    BOOL _isKVCCompatible; // +0x48
    BOOL _isStructAvailableForKeyedArchiver; // +0x49
    BOOL _hasCustomClassFromDictionary; // +0x4a
    NSString * _mappedToKey; // +0x50
    NSArray * _mappedToKeyPath; // +0x58
    NSArray * _mappedToKeyArray; // +0x60
    TPYYClassPropertyInfo * _info; // +0x68
    _TPYYModelPropertyMeta * _next; // +0x70
}
+ (id)metaWithClassInfo:(id)arg1 propertyInfo:(id)arg2 generic:(Class)arg3;
- (void).cxx_destruct;
@end

