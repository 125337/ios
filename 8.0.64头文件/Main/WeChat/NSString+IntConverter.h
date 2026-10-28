@interface NSString (IntConverter)
+ (id)stringFromUInt64:(unsigned long long)arg1;
+ (id)stringFromUInt32:(unsigned int)arg1;
- (unsigned long long)uInt64Value;
- (unsigned int)uInt32Value;
@end
