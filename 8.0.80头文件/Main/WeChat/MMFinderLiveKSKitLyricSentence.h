@interface MMFinderLiveKSKitLyricSentence : NSObject
{
    BOOL _isSegCanSplit; // +0x8
    int _startTime; // +0xc
    int _duration; // +0x10
    unsigned long long _initSegmentsCnt; // +0x18
    unsigned long long _initWordsCnt; // +0x20
    NSMutableArray * _lyricSegmentList; // +0x28
}
+ (id)parseLyricSentence:(id)arg1;
- (id)init;
- (void)initDefaultDatas;
- (void)addLyricSegment:(id)arg1;
- (id)getLyricSegmentList;
- (void)removeLyricSegments:(id)arg1;
- (unsigned long long)getCurrLyricWordsCnt;
- (void)updateInitSegmentsAndWordsCnt;
- (int)endTime;
- (id)description;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (BOOL)isSegCanSplit;
- (void)setIsSegCanSplit:(BOOL)arg1;
- (unsigned long long)initSegmentsCnt;
- (void)setInitSegmentsCnt:(unsigned long long)arg1;
- (unsigned long long)initWordsCnt;
- (void)setInitWordsCnt:(unsigned long long)arg1;
- (id)lyricSegmentList;
- (void)setLyricSegmentList:(id)arg1;
- (void).cxx_destruct;
@end
