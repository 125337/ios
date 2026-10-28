@interface TRTCVideoLayout : NSObject <NSCopying>
{
    int _zOrder; // +0x8
    int _backgroundColor; // +0xc
    long long _fillMode; // +0x10
    NSString * _placeHolderImage; // +0x18
    TRTCUser * _fixedVideoUser; // +0x20
    long long _fixedVideoStreamType; // +0x28
    CGRect _rect; // +0x30
}
- (VideoLayout)convertToCppParams;
- (unsigned int)convertRenderMode:(long long)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (int)zOrder;
- (void)setZOrder:(int)arg1;
- (long long)fillMode;
- (void)setFillMode:(long long)arg1;
- (int)backgroundColor;
- (void)setBackgroundColor:(int)arg1;
- (id)placeHolderImage;
- (void)setPlaceHolderImage:(id)arg1;
- (id)fixedVideoUser;
- (void)setFixedVideoUser:(id)arg1;
- (long long)fixedVideoStreamType;
- (void)setFixedVideoStreamType:(long long)arg1;
- (void).cxx_destruct;
@end
