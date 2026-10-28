@interface TPAssetDataRange : NSObject
{
    long long _offset; // +0x8
    long long _length; // +0x10
}
- (long long)max;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (long long)length;
- (void)setLength:(long long)arg1;
@end
