@interface TSPacket : NSObject
{
    NSData * _data; // +0x8
}
+ (int)uniqueTag;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
