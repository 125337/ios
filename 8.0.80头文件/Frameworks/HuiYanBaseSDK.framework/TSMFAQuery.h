@interface TSMFAQuery : NSObject
{
    NSMutableDictionary * _values; // +0x8
}
+ (id)propertyNamesForSetterAndGetter;
+ (id)classNamesOfResolvedValuesSetterAndGetter;
+ (BOOL)resolvePropertyByName:(id)arg1 forClass:(Class)arg2 withGetter:(SEL)arg3;
+ (BOOL)resolvePropertyByName:(id)arg1 forClass:(Class)arg2 withSetter:(SEL)arg3;
+ (void)resolveValuesSetterAndGetterIfNeededForClass:(Class)arg1;
+ (void)resolveValuesSetterAndGetterIfNeeded;
+ (id)task;
- (id)__objectGetter;
- (void)__objectSetter:(id)arg1;
- (id)__weakObjectGetter;
- (void)__weakObjectSetter:(id)arg1;
- (BOOL)__boolGetter;
- (void)__boolSetter:(BOOL)arg1;
- (char)__charGetter;
- (void)__charSetter:(char)arg1;
- (unsigned char)__ucharGetter;
- (void)__ucharSetter:(unsigned char)arg1;
- (long long)__longGetter;
- (void)__longSetter:(long long)arg1;
- (unsigned long long)__ulongGetter;
- (void)__ulongSetter:(unsigned long long)arg1;
- (int)__intGetter;
- (void)__intSetter:(int)arg1;
- (unsigned int)__uintGetter;
- (void)__uintSetter:(unsigned int)arg1;
- (long long)__longlongGetter;
- (void)__longlongSetter:(long long)arg1;
- (unsigned long long)__ulonglongGetter;
- (void)__ulonglongSetter:(unsigned long long)arg1;
- (float)__floatGetter;
- (void)__floatSetter:(float)arg1;
- (double)__doubleGetter;
- (void)__doubleSetter:(double)arg1;
- (id)init;
- (void)executeWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (void)reset;
- (BOOL)isValuableToRetryForError:(id)arg1;
- (id)values;
- (void)setValues:(id)arg1;
- (void).cxx_destruct;
@end
