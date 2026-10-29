@interface BizTLPlayerInfo : NSObject
{
    BizTLTextureInfo * _textureInfo; // +0x8
    NSNumber * _playerId; // +0x10
}
+ (id)makeWithTextureInfo:(id)arg1 playerId:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)textureInfo;
- (void)setTextureInfo:(id)arg1;
- (id)playerId;
- (void)setPlayerId:(id)arg1;
- (void).cxx_destruct;
@end

