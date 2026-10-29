@interface GCDAsyncWritePacket : NSObject
{
    NSData * buffer; // +0x8
    unsigned long long bytesDone; // +0x10
    long long tag; // +0x18
    double timeout; // +0x20
}
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3;
- (void).cxx_destruct;
@end
