@interface MMFICUtilities : NSObject
+ (unsigned long long)FICByteAlign:(unsigned long long)arg1 alignment:(unsigned long long)arg2;
+ (unsigned long long)FICByteAlignForCoreAnimation:(unsigned long long)arg1;
+ (id)FICStringWithUUIDBytes:(struct)arg1;
+ (struct)FICUUIDBytesWithString:(id)arg1;
+ (struct)FICUUIDBytesFromMD5HashOfString:(id)arg1;
+ (int)PageSize;
+ (id)DirectoryPath;
+ (id)dispatchQueue;
@end

