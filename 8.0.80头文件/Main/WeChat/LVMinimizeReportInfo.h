@interface LVMinimizeReportInfo : NSObject
{
    NSString * _sourceContextId; // +0x8
    NSString * _sourceTabContextId; // +0x10
    long long _sourceCommentScene; // +0x18
    NSDictionary * _sourceExtraParams; // +0x20
    NSDate * _startTime; // +0x28
    NSString * _playSessionId; // +0x30
    double _skipRealPlayTime; // +0x38
}
- (id)sourceContextId;
- (void)setSourceContextId:(id)arg1;
- (id)sourceTabContextId;
- (void)setSourceTabContextId:(id)arg1;
- (long long)sourceCommentScene;
- (void)setSourceCommentScene:(long long)arg1;
- (id)sourceExtraParams;
- (void)setSourceExtraParams:(id)arg1;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (id)playSessionId;
- (void)setPlaySessionId:(id)arg1;
- (double)skipRealPlayTime;
- (void)setSkipRealPlayTime:(double)arg1;
- (void).cxx_destruct;
@end
