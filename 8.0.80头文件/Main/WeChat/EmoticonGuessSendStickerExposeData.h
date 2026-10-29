@interface EmoticonGuessSendStickerExposeData : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _loadEmojiDuration; // +0x10
    NSArray * _contextSegResult; // +0x18
    unsigned long long _contextFetchCount; // +0x20
    NSString * _guessEmojiList; // +0x28
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)loadEmojiDuration;
- (void)setLoadEmojiDuration:(unsigned long long)arg1;
- (id)contextSegResult;
- (void)setContextSegResult:(id)arg1;
- (unsigned long long)contextFetchCount;
- (void)setContextFetchCount:(unsigned long long)arg1;
- (id)guessEmojiList;
- (void)setGuessEmojiList:(id)arg1;
- (void).cxx_destruct;
@end
