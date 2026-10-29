@interface TPPlayerStateStrategy : NSObject
{
    TPPlayerStateWrapper * _stateWrapper; // +0x8
}
- (id)initWithStateWrapper:(id)arg1;
- (BOOL)isValidStateToCall:(unsigned long long)arg1;
- (BOOL)isValidStateToCallBack:(unsigned long long)arg1;
- (BOOL)isValidStateToCallPrepare;
- (BOOL)isValidStateToCallSetDataSource;
- (BOOL)isValidStateToCallSetParams;
- (BOOL)isValidStateToCallSetView;
- (BOOL)isValidStateToCallStart;
- (BOOL)isValidStateToCallPause;
- (BOOL)isValidStateToCallStop;
- (BOOL)isValidStateToCallReset;
- (BOOL)isValidStateToCallSeek;
- (BOOL)isValidStateToCallSwitchDefinition;
- (BOOL)isValidStateToCallSelectTrack;
- (BOOL)isValidStateToCallDeselectTrack;
- (BOOL)isValidStateToCallSelectProgram;
- (BOOL)isValidStateToCallGetDuration;
- (BOOL)isValidStateToCallGetPosition;
- (BOOL)isValidStateToCallGetVideoSize;
- (BOOL)isValidStateToCallGetState;
- (BOOL)isValidStateToCallGetBufferPercent;
- (BOOL)isValidStateToCallRelease;
- (BOOL)isValidStateToCallGetDemuxerOffsetInFile;
- (BOOL)isValidStateToCallGetDynamicStatisticParams;
- (BOOL)isValidStateToCallGetGeneralPlayFlowParams;
- (BOOL)isValidStateToCallGetDynamicStatisticParamsAndReset;
- (BOOL)isValidStateToCallbackOnPreared;
- (BOOL)isValidStateToCallbackOnComplete;
- (BOOL)isValidStateToCallbackOnInfo;
- (BOOL)isValidStateToCallbackOnError;
- (BOOL)isValidStateToCallbackOnVideoSizeChanged;
- (BOOL)isValidStateToCallbackOnDataOutput;
- (BOOL)isValidStateToCallbackOnSeekComplete;
- (id)stateWrapper;
- (void)setStateWrapper:(id)arg1;
- (void).cxx_destruct;
@end

