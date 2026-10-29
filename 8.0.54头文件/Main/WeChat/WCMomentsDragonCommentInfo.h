@interface WCMomentsDragonCommentInfo : NSObject <PBCoding, NSCoding>
{
    unsigned int _fireworkType; // +0x8
    unsigned int _fireworkSeed; // +0xc
    NSString * _fireworkText; // +0x10
    NSString * _fireworkEmojiKey; // +0x18
}
+ (id)dragonCommentInfoFromServerObject:(id)arg1;
+ (id)dragonCommentInfoFromServerBuffer:(id)arg1;
+ (void)PBArrayAdd_fireworkType;
+ (void)PBArrayAdd_fireworkText;
+ (void)PBArrayAdd_fireworkEmojiKey;
+ (void)PBArrayAdd_fireworkSeed;
+ (void)initialize;
- (id)toServerObject;
- (id)toServerBuffer;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)fireworkID;
- (unsigned int)fireworkType;
- (void)setFireworkType:(unsigned int)arg1;
- (id)fireworkText;
- (void)setFireworkText:(id)arg1;
- (id)fireworkEmojiKey;
- (void)setFireworkEmojiKey:(id)arg1;
- (unsigned int)fireworkSeed;
- (void)setFireworkSeed:(unsigned int)arg1;
- (void).cxx_destruct;
@end

