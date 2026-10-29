@interface ZstdUtil : NSObject
+ (id)compressData:(id)arg1;
+ (id)compressData:(id)arg1 withOption:(unsigned long long)arg2;
+ (id)decompressData:(id)arg1;
+ (BOOL)compressFile:(id)arg1 toPath:(id)arg2;
+ (BOOL)compressFile:(id)arg1 toPath:(id)arg2 withOption:(unsigned long long)arg3;
+ (BOOL)decompressFile:(id)arg1 toPath:(id)arg2;
@end

