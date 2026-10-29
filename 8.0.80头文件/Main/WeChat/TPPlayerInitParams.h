@interface TPPlayerInitParams : NSObject
{
    long long _playerId; // +0x8
    long long _width; // +0x10
    long long _height; // +0x18
}
+ (id)makeWithPlayerId:(long long)arg1 width:(long long)arg2 height:(long long)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
@end
