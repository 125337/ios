@interface MMFinderLiveKSKitLyricSegment : NSObject
{
    int _startTime; // +0x8
    int _duration; // +0xc
    int _endTime; // +0x10
    NSMutableArray * _lyricWordList; // +0x18
}
+ (id)parseLyricSegment:(id)arg1 sentence:(id)arg2 wordBeginIndex:(unsigned long long)arg3;
+ (id)parseLyricSentence:(id)arg1;
- (id)init;
- (void)initDefaultDatas;
- (id)getLyricWordList;
- (void)addLyricWord:(id)arg1;
- (unsigned long long)lyricWordsCnt;
- (void)removeLyricWords:(id)arg1;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (int)endTime;
- (id)lyricWordList;
- (void)setLyricWordList:(id)arg1;
- (void).cxx_destruct;
@end

