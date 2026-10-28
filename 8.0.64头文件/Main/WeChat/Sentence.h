@interface Sentence : NSObject <NSCopying>
{
    long long _since; // +0x8
    long long _startTime; // +0x10
    long long _duration; // +0x18
    NSMutableArray * _charactersArray; // +0x20
    NSString * _text; // +0x28
    NSMutableDictionary * _textWithDic; // +0x30
    NSMutableArray * _segmentsArray; // +0x38
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (id)charactersArray;
- (void)setCharactersArray:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (long long)since;
- (void)setSince:(long long)arg1;
- (id)textWidthDic;
- (void)setTextWidthDic:(id)arg1;
- (id)segmentsArray;
- (void)setSegmentsArray:(id)arg1;
- (void).cxx_destruct;
@end
