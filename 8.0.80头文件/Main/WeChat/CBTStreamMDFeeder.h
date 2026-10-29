@interface CBTStreamMDFeeder : NSObject
{
    BOOL _receivedEnd; // +0x8
    BOOL _hasEWMAData; // +0x9
    BOOL _isPaused; // +0xa
    BOOL _isStopped; // +0xb
    BOOL _hasOutputNewline; // +0xc
    BOOL _isShowingLoadingIndicator; // +0xd
    id <CBTStreamMDFeederDelegate> _delegate; // +0x10
    CBTStreamMDFeederConfig * _config; // +0x18
    id <CBTStreamMDFeederOutputPolicy> _outputPolicy; // +0x20
    double _feedIntervalEWMA; // +0x28
    double _feedSizeEWMA; // +0x30
    double _feedIntervalVarianceEWMA; // +0x38
    double _currentOutputRatio; // +0x40
    double _lastFeedTime; // +0x48
    double _currentTickInterval; // +0x50
    CBTStreamMDFeeder * _parentFeeder; // +0x58
    id <CBTStreamMDFeederOutput> _output; // +0x60
    NSHashTable * _subFeeders; // +0x68
    NSMutableArray * _charQueue; // +0x70
    MMTimer * _tickTimer; // +0x78
    double _pendingBatchSize; // +0x80
    unsigned long long _pendingCharCount; // +0x88
    unsigned long long _totalFedCharCount; // +0x90
    unsigned long long _totalOutputCharCount; // +0x98
    double _lastOutputTime; // +0xa0
    double _outputCredit; // +0xa8
    CBTStreamMDFeederCharByCharPolicy * _defaultPolicy; // +0xb0
    unsigned long long _loadingIndicatorLength; // +0xb8
    CBTTextAttachment * _loadingIndicatorAttachment; // +0xc0
    double _lastLoadingUpdateTime; // +0xc8
}
- (id)init;
- (id)initWithTextView:(id)arg1;
- (void)dealloc;
- (unsigned long long)queueLength;
- (BOOL)isFeeding;
- (void)mutateQueuedContent:(id /* block */)arg1;
- (void)addOutput:(id)arg1;
- (void)removeOutput;
- (id)createSubFeeder;
- (id)ewmaOwner;
- (void)createSubFeederForAttachmentIfNeeded:(id)arg1;
- (void)feedContent:(id)arg1;
- (BOOL)containsBlockAttachment:(id)arg1;
- (void)feedEnd;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)flush;
- (void)flushQueueOnly;
- (void)startTicking;
- (void)stopTicking;
- (void)restartTicking;
- (void)tick;
- (void)updateRateEstimation:(id)arg1;
- (void)recomputeTickInterval;
- (void)updateLoadingIndicator;
- (void)showLoadingIndicator;
- (void)removeLoadingIndicatorIfNeeded;
- (BOOL)canRemoveTrailingLoadingIndicator;
- (void)notifyFinish;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)outputPolicy;
- (void)setOutputPolicy:(id)arg1;
- (BOOL)receivedEnd;
- (void)setReceivedEnd:(BOOL)arg1;
- (double)feedIntervalEWMA;
- (void)setFeedIntervalEWMA:(double)arg1;
- (double)feedSizeEWMA;
- (void)setFeedSizeEWMA:(double)arg1;
- (double)feedIntervalVarianceEWMA;
- (void)setFeedIntervalVarianceEWMA:(double)arg1;
- (double)currentOutputRatio;
- (void)setCurrentOutputRatio:(double)arg1;
- (BOOL)hasEWMAData;
- (void)setHasEWMAData:(BOOL)arg1;
- (double)lastFeedTime;
- (void)setLastFeedTime:(double)arg1;
- (double)currentTickInterval;
- (void)setCurrentTickInterval:(double)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (id)parentFeeder;
- (void)setParentFeeder:(id)arg1;
- (id)output;
- (void)setOutput:(id)arg1;
- (id)subFeeders;
- (void)setSubFeeders:(id)arg1;
- (id)charQueue;
- (void)setCharQueue:(id)arg1;
- (id)tickTimer;
- (void)setTickTimer:(id)arg1;
- (double)pendingBatchSize;
- (void)setPendingBatchSize:(double)arg1;
- (unsigned long long)pendingCharCount;
- (void)setPendingCharCount:(unsigned long long)arg1;
- (unsigned long long)totalFedCharCount;
- (void)setTotalFedCharCount:(unsigned long long)arg1;
- (unsigned long long)totalOutputCharCount;
- (void)setTotalOutputCharCount:(unsigned long long)arg1;
- (double)lastOutputTime;
- (void)setLastOutputTime:(double)arg1;
- (double)outputCredit;
- (void)setOutputCredit:(double)arg1;
- (BOOL)hasOutputNewline;
- (void)setHasOutputNewline:(BOOL)arg1;
- (id)defaultPolicy;
- (void)setDefaultPolicy:(id)arg1;
- (BOOL)isShowingLoadingIndicator;
- (void)setIsShowingLoadingIndicator:(BOOL)arg1;
- (unsigned long long)loadingIndicatorLength;
- (void)setLoadingIndicatorLength:(unsigned long long)arg1;
- (id)loadingIndicatorAttachment;
- (void)setLoadingIndicatorAttachment:(id)arg1;
- (double)lastLoadingUpdateTime;
- (void)setLastLoadingUpdateTime:(double)arg1;
- (void).cxx_destruct;
@end
