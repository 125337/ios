@interface WCCanvasComponentFullScreenImageInfo : MMObject <NSCoding>
{
    int _scaleType; // +0x8
    NSString * _fullScreenImageUrl; // +0x10
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fullScreenImageUrl;
- (void)setFullScreenImageUrl:(id)arg1;
- (int)scaleType;
- (void)setScaleType:(int)arg1;
- (void).cxx_destruct;
@end
