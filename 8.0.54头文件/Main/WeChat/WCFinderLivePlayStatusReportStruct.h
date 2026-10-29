@interface WCFinderLivePlayStatusReportStruct : NSObject
{
    unsigned int _reportTime; // +0x8
    unsigned int _playStatus; // +0xc
    unsigned int _playTime; // +0x10
    unsigned int _liveScene; // +0x14
    unsigned long long _liveId; // +0x18
    NSString * _streamId; // +0x20
    NSString * _anchorNickname; // +0x28
    NSString * _playUrl; // +0x30
}
- (id)toReport;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)reportTime;
- (void)setReportTime:(unsigned int)arg1;
- (unsigned int)playStatus;
- (void)setPlayStatus:(unsigned int)arg1;
- (unsigned int)playTime;
- (void)setPlayTime:(unsigned int)arg1;
- (unsigned int)liveScene;
- (void)setLiveScene:(unsigned int)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)anchorNickname;
- (void)setAnchorNickname:(id)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (void).cxx_destruct;
@end

