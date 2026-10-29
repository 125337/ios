@interface QBASIDataCompressor : NSObject
{
    BOOL streamReady; // +0x8
    z_stream_s zStream; // +0x10
}
+ (id)compressor;
+ (id)compressData:(id)arg1 error:(id *)arg2;
+ (BOOL)compressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)deflateErrorWithCode:(int)arg1;
- (void)dealloc;
- (id)setupStream;
- (id)closeStream;
- (id)compressBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3 shouldFinish:(BOOL)arg4;
- (BOOL)streamReady;
@end

