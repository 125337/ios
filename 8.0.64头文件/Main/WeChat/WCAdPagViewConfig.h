@interface WCAdPagViewConfig : NSObject
{
    int _scaleMode; // +0x8
    int _repeatCount; // +0xc
}
- (id)description;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (int)repeatCount;
- (void)setRepeatCount:(int)arg1;
@end
