@interface _YYModelPropertyMeta : NSObject
{
    NSString * _configTag; // +0x8
    NSString * _name; // +0x10
    unsigned long long _type; // +0x18
    unsigned long long _nsType; // +0x20
    BOOL _isCNumber; // +0x28
    Class _cls; // +0x30
    Class _genericCls; // +0x38
    SEL _getter; // +0x40
    SEL _setter; // +0x48
    BOOL _isKVCCompatible; // +0x50
    BOOL _isStructAvailableForKeyedArchiver; // +0x51
    BOOL _hasCustomClassFromDictionary; // +0x52
    NSString * _mappedToKey; // +0x58
    NSArray * _mappedToKeyPath; // +0x60
    NSArray * _mappedToKeyArray; // +0x68
    YYClassPropertyInfo * _info; // +0x70
    _YYModelPropertyMeta * _next; // +0x78
}
+ (id)metaWithClassInfo:(id)arg1 propertyInfo:(id)arg2 generic:(Class)arg3;
- (void).cxx_destruct;
@end
