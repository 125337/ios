@interface QTileOverlayInternalPath : NSObject
{
    int _language; // +0x8
    long long _x; // +0x10
    long long _y; // +0x18
    long long _z; // +0x20
}
- (id)initWithBitmapTileID:(MapBitmapTileID *)arg1;
- (long long)x;
- (void)setX:(long long)arg1;
- (long long)y;
- (void)setY:(long long)arg1;
- (long long)z;
- (void)setZ:(long long)arg1;
- (int)language;
- (void)setLanguage:(int)arg1;
@end
