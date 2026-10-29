@interface MMLiveFaceDecodeTask : NSObject
{
    NSData * _encodedData; // +0x8
    double _dataRecvTime; // +0x10
}
+ (BOOL)checkParamValidForEncodedData:(id)arg1;
+ (id)decode:(id)arg1;
+ (char *)getDecodedRGBATexBufFromJbigBuf:(char *)arg1 length:(int)arg2 dstWidth:(unsigned long long *)arg3 dstHeight:(unsigned long long *)arg4;
+ (char *)transferTexBufFromAlphaToRGBA:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)initWithEncodedData:(id)arg1;
- (id)encodedData;
- (void)setEncodedData:(id)arg1;
- (double)dataRecvTime;
- (void)setDataRecvTime:(double)arg1;
- (void).cxx_destruct;
@end

