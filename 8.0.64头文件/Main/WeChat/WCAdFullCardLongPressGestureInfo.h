@interface WCAdFullCardLongPressGestureInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    unsigned long long _pressStartTime; // +0x8
    unsigned long long _pressEndTime; // +0x10
    unsigned long long _minimumPressDuration; // +0x18
    unsigned long long _spriteDuration; // +0x20
    NSString * _spriteImageUrl; // +0x28
    long long _spriteType; // +0x30
    long long _spriteSizeType; // +0x38
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isValidForSpriteAnimation;
- (unsigned long long)pressStartTime;
- (void)setPressStartTime:(unsigned long long)arg1;
- (unsigned long long)pressEndTime;
- (void)setPressEndTime:(unsigned long long)arg1;
- (unsigned long long)minimumPressDuration;
- (void)setMinimumPressDuration:(unsigned long long)arg1;
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
