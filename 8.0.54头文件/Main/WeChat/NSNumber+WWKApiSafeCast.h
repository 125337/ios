@interface NSNumber (WWKApiSafeCast) <WCTValueProtocol, WCTColumnCoding>
+ (BOOL)qb_boolValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setBool:(BOOL)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (char)qb_charValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setChar:(char)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (short)qb_shortValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setShort:(short)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (int)qb_intValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setInt:(int)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (long long)qb_longlongValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setLonglong:(long long)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (float)qb_floatValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setFloat:(float)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (double)qb_doubleValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setDouble:(double)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (id)qb_numberWithName:(id)arg1 inAttributes:(id)arg2;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)wwkapi_nilobj;
- (void)qb_setInAttributes:(id)arg1 withName:(id)arg2;
- (double)A;
- (double)sA;
- (double)pt;
- (double)px;
- (id)dataValue;
- (id)numberValue;
- (id)archivedWCTValue;
@end

