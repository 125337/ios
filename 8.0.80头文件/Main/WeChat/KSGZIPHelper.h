@interface KSGZIPHelper : NSObject
+ (id)uncompressZippedData:(id)arg1;
+ (int)uncompressZippedDataFromFile:(id)arg1 toFile:(id)arg2;
+ (int)uncompressZippedDataFromSource:(__sFILE *)arg1 toDestination:(__sFILE *)arg2;
+ (id)compressData:(id)arg1;
+ (int)compressDataFromFile:(id)arg1 toFile:(id)arg2;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (int)compressDataFromSource:(__sFILE *)arg1 toDestination:(__sFILE *)arg2;
@end
