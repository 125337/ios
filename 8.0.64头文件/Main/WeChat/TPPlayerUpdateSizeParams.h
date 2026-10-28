@interface TPPlayerUpdateSizeParams : NSObject
{
    long long _playerId; // +0x8
    long long _width; // +0x10
    long long _height; // +0x18
    long long _x; // +0x20
    long long _y; // +0x28
}
+ (id)makeWithPlayerId:(long long)arg1 width:(long long)arg2 height:(long long)arg3 x:(long long)arg4 y:(long long)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (long long)x;
- (void)setX:(long long)arg1;
- (long long)y;
- (void)setY:(long long)arg1;
@end
