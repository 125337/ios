@interface MMDictationTaskV1 : MMDictationTask <SimpleRecordBufferDelegate, MMDictationUploaderDelegate, MMDictationOfflineEngineDelegate, MMDictationOfflineSegmenterDelegate, WCAudioModuleDelegate, AudioRecordCheckerExt, ISysCallCheckExt>
{
    BOOL _useOpusEncoder; // +0x10
    BOOL _didEndCallbackCalled; // +0x11
    BOOL _enableOfflineMode; // +0x12
    BOOL _dualLinkEnabled; // +0x13
    BOOL _offlinePipelineReady; // +0x14
    BOOL _offlinePipelineFailed; // +0x15
    BOOL _onlinePipelineFailed; // +0x16
    BOOL _networkReachableAtStart; // +0x17
    BOOL _offlineEnginePrepared; // +0x18
    BOOL _offlineVADPrepared; // +0x19
    NSString * _resultText; // +0x20
    SimpleAudioRecorder * _recorder; // +0x28
    SilkAudioEncoder * _silkEncoder; // +0x30
    OpusAudioCodec * _opusCodec; // +0x38
    MMDictationUploader * _uploader; // +0x40
    NSMutableArray * _peakPowerArray; // +0x48
    unsigned long long _peakPowerHitCount; // +0x50
    NSDate * _currentStartTime; // +0x58
    NSDate * _currentEndTime; // +0x60
    long long _endFlag; // +0x68
    long long _defaultStopMode; // +0x70
    long long _stopMode; // +0x78
    MMDictationASRMerger * _asrMerger; // +0x80
    MMDictationOfflineSegmenter * _offlineSegmenter; // +0x88
    MMDictationOfflineActivationController * _offlineActivation; // +0x90
    NSMutableData * _pcmFrameCarry; // +0x98
    NSMutableArray * _pendingOfflineFrames; // +0xa0
    unsigned long long _pcmFrameSeq; // +0xa8
}
- (id)description;
- (id)initWithScene:(long long)arg1 sessionId:(id)arg2;
- (void)dealloc;
- (void)didReceiveWillResignActiveNotification:(id)arg1;
- (id)voiceId;
- (void)setDictationExtraData:(id)arg1;
- (BOOL)isRecording;
- (BOOL)isWaitingForEndFlag;
- (void)startRecord;
- (void)stopRecord:(unsigned long long)arg1;
- (void)stopRecord:(unsigned long long)arg1 stopMode:(long long)arg2;
- (void)_notifyTaskDidEnd;
- (id)peakPowerTraceLog;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (float)playPerTimes;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)handleInterruptionBy3rdApp;
- (void)MMDictationUploader:(id)arg1 didGetText:(id)arg2 shouldCover:(BOOL)arg3 endFrameSeq:(unsigned long long)arg4 isFinal:(BOOL)arg5;
- (void)MMDictationUploader:(id)arg1 didEndedByServer:(unsigned int)arg2;
- (void)MMDictationUploader:(id)arg1 onNetError:(long long)arg2;
- (void)offlineEngine:(id)arg1 didEmitPartialText:(id)arg2 segmentId:(id)arg3 endFrameSeq:(unsigned long long)arg4 sessionId:(id)arg5;
- (void)offlineEngine:(id)arg1 didFinalizeSegment:(id)arg2 segmentId:(id)arg3 startFrameSeq:(unsigned long long)arg4 endFrameSeq:(unsigned long long)arg5 sessionId:(id)arg6;
- (void)offlineEngine:(id)arg1 didFailWithError:(long long)arg2 sessionId:(id)arg3;
- (void)_prepareDualLinkIfNeeded;
- (void)_activateOfflinePipelineIfReady;
- (unsigned long long)_consumePCMForDualLink:(id)arg1;
- (void)_disableOfflinePipeline;
- (void)offlineSegmenter:(id)arg1 didStartSpeakingAt:(unsigned long long)arg2 segmentId:(id)arg3;
- (void)offlineSegmenter:(id)arg1 didEndSpeak:(unsigned long long)arg2 segmentId:(id)arg3;
- (void)offlineSegmenter:(id)arg1 didProducePCM:(id)arg2 endFrameSeq:(unsigned long long)arg3 segmentId:(id)arg4;
- (void)offlineSegmenter:(id)arg1 didFailWithError:(long long)arg2;
- (void)InputIsAvailableChanged:(BOOL)arg1;
- (void)BeginInterruption;
- (void)onDetectMicriphoneMuted;
- (id)resultText;
- (void)setResultText:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)silkEncoder;
- (void)setSilkEncoder:(id)arg1;
- (id)opusCodec;
- (void)setOpusCodec:(id)arg1;
- (BOOL)useOpusEncoder;
- (void)setUseOpusEncoder:(BOOL)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (id)peakPowerArray;
- (void)setPeakPowerArray:(id)arg1;
- (unsigned long long)peakPowerHitCount;
- (void)setPeakPowerHitCount:(unsigned long long)arg1;
- (id)currentStartTime;
- (void)setCurrentStartTime:(id)arg1;
- (id)currentEndTime;
- (void)setCurrentEndTime:(id)arg1;
- (long long)endFlag;
- (void)setEndFlag:(long long)arg1;
- (long long)defaultStopMode;
- (void)setDefaultStopMode:(long long)arg1;
- (long long)stopMode;
- (void)setStopMode:(long long)arg1;
- (BOOL)didEndCallbackCalled;
- (void)setDidEndCallbackCalled:(BOOL)arg1;
- (BOOL)enableOfflineMode;
- (void)setEnableOfflineMode:(BOOL)arg1;
- (BOOL)dualLinkEnabled;
- (void)setDualLinkEnabled:(BOOL)arg1;
- (BOOL)offlinePipelineReady;
- (void)setOfflinePipelineReady:(BOOL)arg1;
- (BOOL)offlinePipelineFailed;
- (void)setOfflinePipelineFailed:(BOOL)arg1;
- (BOOL)onlinePipelineFailed;
- (void)setOnlinePipelineFailed:(BOOL)arg1;
- (BOOL)networkReachableAtStart;
- (void)setNetworkReachableAtStart:(BOOL)arg1;
- (id)asrMerger;
- (void)setAsrMerger:(id)arg1;
- (id)offlineSegmenter;
- (void)setOfflineSegmenter:(id)arg1;
- (id)offlineActivation;
- (void)setOfflineActivation:(id)arg1;
- (id)pcmFrameCarry;
- (void)setPcmFrameCarry:(id)arg1;
- (id)pendingOfflineFrames;
- (void)setPendingOfflineFrames:(id)arg1;
- (unsigned long long)pcmFrameSeq;
- (void)setPcmFrameSeq:(unsigned long long)arg1;
- (BOOL)offlineEnginePrepared;
- (void)setOfflineEnginePrepared:(BOOL)arg1;
- (BOOL)offlineVADPrepared;
- (void)setOfflineVADPrepared:(BOOL)arg1;
- (void).cxx_destruct;
@end
