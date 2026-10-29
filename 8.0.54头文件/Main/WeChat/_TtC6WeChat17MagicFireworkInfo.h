@interface _TtC6WeChat17MagicFireworkInfo : _TtC6WeChat10MEBaseMeta
{
     fireworkType; // +0x40
     fireworkText; // +0x48
     fireworkEmojiKey; // +0x58
     hasFireworkTrail; // +0x68
     randomSeed; // +0x6c
}
- (long long)fireworkType;
- (void)setFireworkType:(long long)arg1;
- (id)fireworkText;
- (void)setFireworkText:(id)arg1;
- (id)fireworkEmojiKey;
- (void)setFireworkEmojiKey:(id)arg1;
- (BOOL)hasFireworkTrail;
- (void)setHasFireworkTrail:(BOOL)arg1;
- (unsigned int)randomSeed;
- (void)setRandomSeed:(unsigned int)arg1;
- (id)initWithId:(id)arg1 timestamp:(unsigned long long)arg2 fireworkType:(long long)arg3 fireworkText:(id)arg4 fireworkEmojiKey:(id)arg5 hasFireworkTrail:(BOOL)arg6 randomSeed:(unsigned int)arg7 frame:(CGRect)arg8;
- (id)toDictionary;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

