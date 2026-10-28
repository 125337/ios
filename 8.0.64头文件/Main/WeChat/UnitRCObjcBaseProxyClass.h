@interface UnitRCObjcBaseProxyClass : UnitRCObjcBaseClass
- (id)strongRC;
- (id)weakRC;
- (id)toObjc:(const void *)arg1 rcType:(unsigned int)arg2;
- (BOOL)isUnitRCProxy;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@end
