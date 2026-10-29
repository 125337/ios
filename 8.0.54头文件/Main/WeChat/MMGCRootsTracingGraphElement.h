@interface MMGCRootsTracingGraphElement : NSObject
{
    BOOL _isAppSymbol; // +0x8
    NSArray * _namePath; // +0x10
    id _object; // +0x18
    MMGCRootsTracingGraphConfiguration * _configuration; // +0x20
    NSString * _lastClassName; // +0x28
}
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 configuration:(id)arg2;
- (id)initWithObject:(id)arg1 configuration:(id)arg2 namePath:(id)arg3;
- (id)allRetainedObjects;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)objectAddress;
- (id)classNameOrNull;
- (Class)objectClass;
- (id)namePath;
- (id)object;
- (void)setObject:(id)arg1;
- (id)configuration;
- (id)lastClassName;
- (void)setLastClassName:(id)arg1;
- (BOOL)isAppSymbol;
- (void)setIsAppSymbol:(BOOL)arg1;
- (void).cxx_destruct;
@end

