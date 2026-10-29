@interface MMFinderLiveGlobalRankSignRecordInfo : NSObject
{
    MMFinderLiveGlobalRankSignView * _rankSignView; // +0x8
    id /* block */ _invokeCallback; // +0x10
    id /* block */ _autoEndInvokeCallback; // +0x18
    double _maxDuration; // +0x20
}
- (void)startInvokeAnimation;
- (void)endInvokeAnimation;
- (void)autoEndInvoke;
- (id)rankSignView;
- (void)setRankSignView:(id)arg1;
- (id /* block */)invokeCallback;
- (void)setInvokeCallback:(id /* block */)arg1;
- (id /* block */)autoEndInvokeCallback;
- (void)setAutoEndInvokeCallback:(id /* block */)arg1;
- (double)maxDuration;
- (void)setMaxDuration:(double)arg1;
- (void).cxx_destruct;
@end

