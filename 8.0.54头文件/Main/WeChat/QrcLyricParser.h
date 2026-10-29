@interface QrcLyricParser : NSObject
{
    Lyric * _qrcLyric; // +0x8
    id /* block */ _sentenceFilterBlock; // +0x10
}
+ (id)getSentencesWithQrcFilePath:(id)arg1;
+ (BOOL)hasValidSentencesWithQrcFilePath:(id)arg1;
- (void)loadFile:(id)arg1;
- (void)loadFile:(id)arg1 error:(id *)arg2;
- (void)loadFile:(id)arg1 isTolerant:(BOOL)arg2 error:(id *)arg3;
- (void)loadStr:(id)arg1;
- (void)loadStr:(id)arg1 error:(id *)arg2;
- (void)loadStr:(id)arg1 isTolerant:(BOOL)arg2 error:(id *)arg3;
- (void)parseLyricContent:(id)arg1;
- (id)newlineStr:(id)arg1;
- (int)lengthOfNewlineStr:(id)arg1;
- (void)parseSentence:(id)arg1;
- (void)parseLineToSentence:(id)arg1;
- (void)parseLineToSentenceFromQQMusic:(id)arg1;
- (void)splitBySpaceCharacter;
- (void)fillEmptySegmentsIfNeed;
- (BOOL)_isDigitString:(id)arg1;
- (id)qrcLyric;
- (void)setQrcLyric:(id)arg1;
- (id /* block */)sentenceFilterBlock;
- (void)setSentenceFilterBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

