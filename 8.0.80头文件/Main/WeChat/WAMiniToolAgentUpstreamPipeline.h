@interface WAMiniToolAgentUpstreamPipeline : NSObject
{
    NSString * _hostAppId; // +0x8
    WAAgentVoIPSession * _voipSession; // +0x10
}
- (id)initWithHostAppId:(id)arg1 voipSession:(id)arg2;
- (BOOL)sendCreateSessionEvent;
- (BOOL)sendTurnEventWithConvoId:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (id)hostAppId;
- (void)setHostAppId:(id)arg1;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (void).cxx_destruct;
@end
