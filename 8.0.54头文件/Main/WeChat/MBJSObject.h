@interface MBJSObject : NSObject
- (id)toString;
- (const char *)toRawString;
- (id)toArrayBuffer;
- (const void *)toRawArrayBuffer:(unsigned long long *)arg1;
- (double)toNumber;
- (unsigned int)toUInt32;
- (BOOL)toBoolean;
- (id)toArray;
- (id)toDict;
- (id)get:(id)arg1;
- (void)setObject:(id)arg1 forName:(id)arg2;
- (void)setString:(id)arg1 forName:(id)arg2;
- (void)setNumber:(double)arg1 forName:(id)arg2;
- (void)setBoolean:(BOOL)arg1 forName:(id)arg2;
- (void)setData:(id)arg1 forName:(id)arg2;
- (void)setArray:(id)arg1 forName:(id)arg2;
- (void)setDict:(id)arg1 forName:(id)arg2;
@end

