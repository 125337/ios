@interface LA23BinaryReporter : NSObject
+ (id)generateUploadId;
+ (id)chunksFromBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)chunksFromStdString:(const void *)arg1;
+ (id)chunksFromUInt16Array:(const unsigned short *)arg1 count:(unsigned long long)arg2;
+ (void)report:(id)arg1 code:(const unsigned short *)arg2 length:(unsigned int)arg3;
@end
