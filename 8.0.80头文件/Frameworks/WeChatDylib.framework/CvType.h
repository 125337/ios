@interface CvType : NSObject
+ (int)makeType:(int)arg1 channels:(int)arg2;
+ (int)channels:(int)arg1;
+ (int)depth:(int)arg1;
+ (BOOL)isInteger:(int)arg1;
+ (int)typeSizeBits:(int)arg1;
+ (int)rawTypeSize:(int)arg1;
+ (char)typeMnenomic:(int)arg1;
+ (int)ELEM_SIZE:(int)arg1;
+ (id)typeToString:(int)arg1;
@end
