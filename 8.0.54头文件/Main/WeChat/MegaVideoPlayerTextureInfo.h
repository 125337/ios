@interface MegaVideoPlayerTextureInfo : NSObject
{
    NSNumber * _playerId; // +0x8
    NSNumber * _textureId; // +0x10
    NSNumber * _textureWidth; // +0x18
    NSNumber * _textureHeight; // +0x20
}
+ (id)makeWithPlayerId:(id)arg1 textureId:(id)arg2 textureWidth:(id)arg3 textureHeight:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)playerId;
- (void)setPlayerId:(id)arg1;
- (id)textureId;
- (void)setTextureId:(id)arg1;
- (id)textureWidth;
- (void)setTextureWidth:(id)arg1;
- (id)textureHeight;
- (void)setTextureHeight:(id)arg1;
- (void).cxx_destruct;
@end

