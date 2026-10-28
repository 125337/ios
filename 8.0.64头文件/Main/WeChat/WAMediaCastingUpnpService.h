@interface WAMediaCastingUpnpService : NSObject <WAMediaCastingUpnpDiscoveryDelegate, WAMediaCastingUpnpServicePollDelegate>
{
    BOOL _isLive; // +0x8
    BOOL _shouldResumePollingWhenAppear; // +0x9
    id <WAMediaCastingUpnpServiceDelegate> _delegate; // +0x10
    unsigned long long _videoPlayerState; // +0x18
    WAMediaCastingUpnpDevice * _currentDevice; // +0x20
    WAMediaCastingUpnpDiscovery * _discovery; // +0x28
    WAMediaCastingUpnpServicePoll * _poll; // +0x30
    unsigned long long _transportInfoRetryCount; // +0x38
    NSString * _currentURI; // +0x40
    WAMediaCastingUpnpServiceCallback * _callback; // +0x48
}
+ (id)service;
+ (void)runOnMainQueue:(id /* block */)arg1;
- (void)dealloc;
- (void)search;
- (void)cancelSearch;
- (void)cancelRequestCallbackAndStopPolling;
- (void)playWithURI:(id)arg1 startPosition:(double)arg2 isLive:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)playWithCompletion:(id /* block */)arg1;
- (void)pauseWithCompletion:(id /* block */)arg1;
- (void)stopWithCompletion:(id /* block */)arg1;
- (void)seekWithPosition:(double)arg1 completion:(id /* block */)arg2;
- (void)setVolume:(double)arg1 completion:(id /* block */)arg2;
- (void)handlePlayComplete:(id)arg1;
- (void)handleSeekComplete:(id)arg1;
- (void)handleStopComplete:(id)arg1;
- (void)handlePauseComplete:(id)arg1;
- (void)handleTransportInfoReturn:(unsigned long long)arg1 error:(id)arg2;
- (void)handlePositionInfoReturn:(double)arg1 duration:(double)arg2 error:(id)arg3;
- (void)handlePollRetryCountLimit;
- (void)handleMediaInfoReturn:(id)arg1 error:(id)arg2;
- (void)exit;
- (void)handleVideoAppear;
- (void)handleVideoDisappear;
- (void)WAMediaCastingUpnpDiscoveryDidStart:(id)arg1;
- (void)WAMediaCastingUpnpDiscoveryDidFinished:(id)arg1;
- (void)WAMediaCastingUpnpDiscoveryDidDeviceChanged:(id)arg1;
- (void)pollShouldBegin:(id)arg1;
- (id)discovery;
- (id)poll;
- (id)callback;
- (BOOL)isSearching;
- (void)setCurrentDevice:(id)arg1;
- (void)setVideoPlayerState:(unsigned long long)arg1;
- (void)stopPoll;
- (void)startPoll;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)videoPlayerState;
- (id)currentDevice;
- (void)setDiscovery:(id)arg1;
- (void)setPoll:(id)arg1;
- (unsigned long long)transportInfoRetryCount;
- (void)setTransportInfoRetryCount:(unsigned long long)arg1;
- (id)currentURI;
- (void)setCurrentURI:(id)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
- (void)setCallback:(id)arg1;
- (BOOL)shouldResumePollingWhenAppear;
- (void)setShouldResumePollingWhenAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
