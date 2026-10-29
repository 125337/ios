@interface MMDictationOfflineSegmenter : NSObject
{
    void * _vadHandle; // +0x8
    unsigned long long _vadBlockSize; // +0x10
    int _previousState; // +0x18
    BOOL _cancelled; // +0x1c
    id <MMDictationOfflineSegmenterDelegate> _delegate; // +0x20
    NSObject<OS_dispatch_queue> * _queue; // +0x28
    NSData * _modelData; // +0x30
    NSData * _cmsData; // +0x38
    NSMutableData * _vadCarry; // +0x40
    NSMutableData * _speechBuffer; // +0x48
    NSString * _sessionId; // +0x50
    NSString * _segmentId; // +0x58
    unsigned long long _segmentIndex; // +0x60
    unsigned long long _lastFrameSeq; // +0x68
}
- (id)init;
- (void)dealloc;
- (void)prepareWithSessionId:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_ensureVAD;
- (void)consumePCMFrame:(id)arg1 frameSeq:(unsigned long long)arg2;
- (void)_processCarryIsEnd:(BOOL)arg1;
- (void)finishWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (void)_flushSpeech;
- (void)_notifyStart;
- (void)_notifyEnd;
- (void)_notifyBatch:(id)arg1;
- (void)_fail:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)modelData;
- (void)setModelData:(id)arg1;
- (id)cmsData;
- (void)setCmsData:(id)arg1;
- (id)vadCarry;
- (void)setVadCarry:(id)arg1;
- (id)speechBuffer;
- (void)setSpeechBuffer:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)segmentId;
- (void)setSegmentId:(id)arg1;
- (unsigned long long)segmentIndex;
- (void)setSegmentIndex:(unsigned long long)arg1;
- (unsigned long long)lastFrameSeq;
- (void)setLastFrameSeq:(unsigned long long)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
