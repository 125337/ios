@interface QBASIDataDecompressor : NSObject
{
    BOOL streamReady; // +0x8
    z_stream_s zStream; // +0x10
}
+ (id)decompressor;
+ (id)uncompressData:(id)arg1 error:(id *)arg2;
+ (BOOL)uncompressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)inflateErrorWithCode:(int)arg1;
- (void)dealloc;
- (id)setupStream;
- (id)closeStream;
- (id)uncompressBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)streamReady;
@end
