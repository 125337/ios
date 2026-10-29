@interface OMCAssetFrameRateInfo : NSObject
{
    long long _mediaType; // +0x8
    unsigned long long _frameRate; // +0x10
}
- (id)initWithMediaType:(long long)arg1 frameRate:(unsigned long long)arg2;
- (long long)mediaType;
- (unsigned long long)frameRate;
@end

