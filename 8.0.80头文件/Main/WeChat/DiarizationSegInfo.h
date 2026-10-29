@interface DiarizationSegInfo : NSObject
{
    NSString * _speakerTag; // +0x8
    NSString * _text; // +0x10
    long long _beginTimeMs; // +0x18
    long long _endTimeMs; // +0x20
}
+ (id)makeWithSpeakerTag:(id)arg1 text:(id)arg2 beginTimeMs:(long long)arg3 endTimeMs:(long long)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)speakerTag;
- (void)setSpeakerTag:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (long long)beginTimeMs;
- (void)setBeginTimeMs:(long long)arg1;
- (long long)endTimeMs;
- (void)setEndTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end
