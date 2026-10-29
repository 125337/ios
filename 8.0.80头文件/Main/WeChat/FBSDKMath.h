@interface FBSDKMath : NSObject
+ (CGPoint)ceilForPoint:(CGPoint)arg1;
+ (CGSize)ceilForSize:(CGSize)arg1;
+ (CGPoint)floorForPoint:(CGPoint)arg1;
+ (CGSize)floorForSize:(CGSize)arg1;
+ (unsigned long long)hashWithCGFloat:(double)arg1;
+ (unsigned long long)hashWithCString:(const char *)arg1;
+ (unsigned long long)hashWithDouble:(double)arg1;
+ (unsigned long long)hashWithFloat:(float)arg1;
+ (unsigned long long)hashWithInteger:(unsigned long long)arg1;
+ (unsigned long long)hashWithInteger:(unsigned long long)arg1 andInteger:(unsigned long long)arg2;
+ (unsigned long long)hashWithIntegerArray:(unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (unsigned long long)hashWithLong:(unsigned long long)arg1;
+ (unsigned long long)hashWithPointer:(const void *)arg1;
@end
