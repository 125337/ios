@interface LyricItem : NSObject
{
    NSString * _lyric; // +0x8
    double _startTime; // +0x10
}
+ (id)makeWithLyric:(id)arg1 startTime:(double)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)lyric;
- (void)setLyric:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void).cxx_destruct;
@end
