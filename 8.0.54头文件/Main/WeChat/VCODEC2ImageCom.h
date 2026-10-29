@interface VCODEC2ImageCom : NSObject
+ (unsigned long long)decodeVCODEC2ImageFile:(id)arg1 toUIImage:(id *)arg2;
+ (id)decodeVCODEC2ImageFile:(id)arg1;
+ (unsigned long long)decodeVCODEC2ImageFile:(id)arg1 toUIImage:(id *)arg2 toJPGQuality:(int *)arg3;
+ (id)constructImg:(void *)arg1 width:(int)arg2 height:(int)arg3;
@end

