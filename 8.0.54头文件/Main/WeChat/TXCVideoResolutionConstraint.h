@interface TXCVideoResolutionConstraint : NSObject
{
    long long _originEncodeBitrate; // +0x8
    NSValue * _originEncodeResolution; // +0x10
}
- (CGSize)adjustResolutionWithScreenResolution:(CGSize)arg1;
- (long long)originEncodeBitrate;
- (void)setOriginEncodeBitrate:(long long)arg1;
- (id)originEncodeResolution;
- (void)setOriginEncodeResolution:(id)arg1;
- (void).cxx_destruct;
@end

