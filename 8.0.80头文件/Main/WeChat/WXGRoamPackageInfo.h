@interface WXGRoamPackageInfo : NSObject
{
    BOOL _isLast; // +0x8
    NSData * _data; // +0x10
    unsigned long long _curOffset; // +0x18
}
- (id)data;
- (void)setData:(id)arg1;
- (BOOL)isLast;
- (void)setIsLast:(BOOL)arg1;
- (unsigned long long)curOffset;
- (void)setCurOffset:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
