@interface iLinkStreamServiceMgr : MMUserService <CNetworkStatusExt, MMServiceProtocol>
{
    SessionConfig * _sessionConfig; // +0x8
    NSMutableDictionary * _dicILinkStreamObj; // +0x10
    NSMutableDictionary * _cacheChannels; // +0x18
}
+ (void)uninit;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)_clearData;
- (void)updateContextConfig;
- (void)updateILinkStreamSession:(id)arg1;
- (id)channelWithBizType:(int)arg1;
- (void)releaseCachedChannelWithBizType:(int)arg1;
- (id)createiLinkStreamWithBizType:(int)arg1 businessScene:(unsigned int)arg2 pollingData:(id)arg3 onReceviceResult:(id /* block */)arg4 onError:(id /* block */)arg5;
- (id)createiLinkDownStreamWithBizType:(int)arg1 businessScene:(unsigned int)arg2 pollingData:(id)arg3 streamTicket:(id)arg4 onReceviceResult:(id /* block */)arg5 onError:(id /* block */)arg6 onEnd:(id /* block */)arg7;
- (BOOL)sendRequest:(id)arg1 toiLinkStream:(id)arg2 isFinal:(BOOL)arg3;
- (void)releaseiLinkStream:(id)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (int)getNetworkType;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)sessionConfig;
- (void)setSessionConfig:(id)arg1;
- (id)dicILinkStreamObj;
- (void)setDicILinkStreamObj:(id)arg1;
- (id)cacheChannels;
- (void)setCacheChannels:(id)arg1;
- (void).cxx_destruct;
@end
