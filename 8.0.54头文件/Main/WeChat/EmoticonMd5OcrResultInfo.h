@interface EmoticonMd5OcrResultInfo : NSObject <PBCoding>
{
    BOOL _isWxamData; // +0x8
    unsigned int _resultVersion; // +0xc
    NSString * _meaning; // +0x10
    NSString * _md5; // +0x18
    EmojiInfoObj * _emojiInfoObj; // +0x20
    unsigned long long _lastUnsafeTime; // +0x28
}
+ (void)PBArrayAdd_resultVersion;
+ (void)PBArrayAdd_meaning;
+ (void)PBArrayAdd_lastUnsafeTime;
+ (void)PBArrayAdd_isWxamData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isResultValid;
- (void)setMeaning:(id)arg1;
- (BOOL)isUnsafe;
- (void)setIsUnsafe:(BOOL)arg1;
- (BOOL)isUnsafeTimeExpiredWithCurTime:(unsigned long long)arg1;
- (BOOL)needRecal;
- (id)meaning;
- (BOOL)isWxamData;
- (void)setIsWxamData:(BOOL)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (unsigned int)resultVersion;
- (void)setResultVersion:(unsigned int)arg1;
- (unsigned long long)lastUnsafeTime;
- (void)setLastUnsafeTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

