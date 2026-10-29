@interface WCADCanvasEggAnimationRandomSprite : WCADCanvasEggAnimationElementInfo
{
    unsigned long long _spriteDuration; // +0x10
    NSString * _spriteImageUrl; // +0x18
    long long _spriteType; // +0x20
    long long _spriteSizeType; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)fromAdInfo:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (unsigned long long)spriteDuration;
- (void)setSpriteDuration:(unsigned long long)arg1;
- (id)spriteImageUrl;
- (void)setSpriteImageUrl:(id)arg1;
- (long long)spriteType;
- (void)setSpriteType:(long long)arg1;
- (long long)spriteSizeType;
- (void)setSpriteSizeType:(long long)arg1;
- (void).cxx_destruct;
@end

