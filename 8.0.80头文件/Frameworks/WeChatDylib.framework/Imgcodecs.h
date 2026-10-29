@interface Imgcodecs : NSObject
+ (id)imread:(id)arg1 flags:(int)arg2;
+ (id)imread:(id)arg1;
+ (BOOL)imreadmulti:(id)arg1 mats:(id)arg2 flags:(int)arg3;
+ (BOOL)imreadmulti:(id)arg1 mats:(id)arg2;
+ (BOOL)imreadmulti:(id)arg1 mats:(id)arg2 start:(int)arg3 count:(int)arg4 flags:(int)arg5;
+ (BOOL)imreadmulti:(id)arg1 mats:(id)arg2 start:(int)arg3 count:(int)arg4;
+ (unsigned long long)imcount:(id)arg1 flags:(int)arg2;
+ (unsigned long long)imcount:(id)arg1;
+ (BOOL)imwrite:(id)arg1 img:(id)arg2 params:(id)arg3;
+ (BOOL)imwrite:(id)arg1 img:(id)arg2;
+ (BOOL)imwritemulti:(id)arg1 img:(id)arg2 params:(id)arg3;
+ (BOOL)imwritemulti:(id)arg1 img:(id)arg2;
+ (id)imdecode:(id)arg1 flags:(int)arg2;
+ (BOOL)imencode:(id)arg1 img:(id)arg2 buf:(id)arg3 params:(id)arg4;
+ (BOOL)imencode:(id)arg1 img:(id)arg2 buf:(id)arg3;
+ (BOOL)haveImageReader:(id)arg1;
+ (BOOL)haveImageWriter:(id)arg1;
@end
