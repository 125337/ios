@interface TPSubtitleData : NSObject
{
    NSString * _subtitleData; // +0x8
    long long _durationMs; // +0x10
    long long _startPositionMs; // +0x18
    long long _trackIndex; // +0x20
}
- (id)initWithData:(id)arg1 durationMs:(long long)arg2 startPositionMs:(long long)arg3 trackIndex:(long long)arg4;
- (id)subtitleData;
- (long long)durationMs;
- (long long)startPositionMs;
- (long long)trackIndex;
- (void).cxx_destruct;
@end
