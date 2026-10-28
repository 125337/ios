@interface TRKLyricSentence : NSObject
{
    long long _since; // +0x8
    long long _startTime; // +0x10
    long long _duration; // +0x18
    NSArray * _characters; // +0x20
    NSArray * _segments; // +0x28
    NSString * _text; // +0x30
}
- (id)initWithSentence:(id)arg1;
- (long long)since;
- (void)setSince:(long long)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (id)characters;
- (void)setCharacters:(id)arg1;
- (id)segments;
- (void)setSegments:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void).cxx_destruct;
@end
