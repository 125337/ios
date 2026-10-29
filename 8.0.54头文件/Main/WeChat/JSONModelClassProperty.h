@interface JSONModelClassProperty : NSObject
{
    BOOL _isIndex; // +0x8
    BOOL _isOptional; // +0x9
    BOOL _isStandardJSONType; // +0xa
    BOOL _isMutable; // +0xb
    NSString * _name; // +0x10
    Class _type; // +0x18
    NSString * _structName; // +0x20
    NSString * _protocol; // +0x28
    SEL _customGetter; // +0x30
    NSMutableDictionary * _customSetters; // +0x38
}
- (id)description;
- (BOOL)isIndex;
- (void)setIsIndex:(BOOL)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (Class)type;
- (void)setType:(Class)arg1;
- (id)structName;
- (void)setStructName:(id)arg1;
- (id)protocol;
- (void)setProtocol:(id)arg1;
- (BOOL)isOptional;
- (void)setIsOptional:(BOOL)arg1;
- (BOOL)isStandardJSONType;
- (void)setIsStandardJSONType:(BOOL)arg1;
- (BOOL)isMutable;
- (void)setIsMutable:(BOOL)arg1;
- (SEL)customGetter;
- (void)setCustomGetter:(SEL)arg1;
- (id)customSetters;
- (void)setCustomSetters:(id)arg1;
- (void).cxx_destruct;
@end

