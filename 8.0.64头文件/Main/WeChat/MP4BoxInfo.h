@interface MP4BoxInfo : NSObject
{
    NSString * _name; // +0x8
    unsigned long long _offset; // +0x10
    unsigned long long _length; // +0x18
}
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)setLength:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
