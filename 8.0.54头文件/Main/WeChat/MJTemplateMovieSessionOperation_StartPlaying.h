@interface MJTemplateMovieSessionOperation_StartPlaying : MJTemplateMovieSessionOperation
{
    NSString * _specificSegmentId; // +0x8
    struct _timeRange; // +0x10
}
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 timeRange:(struct)arg3 completionHandler:(id /* block */)arg4;
- (void)start;
- (id)boundTemplateId;
- (void)_startPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)specificSegmentId;
- (void)setSpecificSegmentId:(id)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (void).cxx_destruct;
@end

