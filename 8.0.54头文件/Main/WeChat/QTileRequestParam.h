@interface QTileRequestParam : NSObject <NSCopying>
{
    int _z; // +0x8
    int _x; // +0xc
    int _y; // +0x10
    int _dataType; // +0x14
    int _tag; // +0x18
    NSString * _url; // +0x20
    NSString * _engineOriginalUrl; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isTileOverlay;
- (id)description;
- (int)z;
- (void)setZ:(int)arg1;
- (int)x;
- (void)setX:(int)arg1;
- (int)y;
- (void)setY:(int)arg1;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (int)tag;
- (void)setTag:(int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)engineOriginalUrl;
- (void)setEngineOriginalUrl:(id)arg1;
- (void).cxx_destruct;
@end

