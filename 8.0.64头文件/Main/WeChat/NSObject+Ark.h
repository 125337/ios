@interface NSObject (Ark)
+ (void)addClassWithTypeClassName:(const char *)arg1 memoryType:(unsigned long long)arg2 propertyName:(const char *)arg3;
+ (void)addClassWithTypeClass:(Class)arg1 memoryType:(unsigned long long)arg2 propertyName:(const char *)arg3;
+ (void)addBasicWithTypeName:(const char *)arg1 propertyName:(const char *)arg2;
+ (const char *)getMemoryAttributeWithType:(unsigned long long)arg1;
+ (void)addProperyWithPBFieldInfo:(struct)arg1;
+ (const char *)getTypeNameWithPBFieldInfo:(struct)arg1;
@end
