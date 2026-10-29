@interface MMEasterEggNewYearActivityReportObject : NSObject
{
    unsigned int _videoTimeInMs; // +0x8
    unsigned int _videoPlayCount; // +0xc
    unsigned int _videoPlayTotalTimeInMs; // +0x10
    NSString * _sessionId; // +0x18
    unsigned long long _materialId; // +0x20
}
- (void)startShowCardView;
- (void)endShowCardView;
- (void)closeViewController;
- (void)reportWithAction:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)materialId;
- (void)setMaterialId:(unsigned long long)arg1;
- (unsigned int)videoTimeInMs;
- (void)setVideoTimeInMs:(unsigned int)arg1;
- (unsigned int)videoPlayCount;
- (void)setVideoPlayCount:(unsigned int)arg1;
- (unsigned int)videoPlayTotalTimeInMs;
- (void)setVideoPlayTotalTimeInMs:(unsigned int)arg1;
- (void).cxx_destruct;
@end

