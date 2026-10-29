@interface WARemoteDebugger : NSObject <WARemoteDebugChannelDelegate, WCStateMachineDelegate, WARemoteDebugSendQueueDelegate, WARemoteDebugRecvQueueDelegate, WAJSCoreServiceRemoteDelegate>
{
    BOOL _hasConnected; // +0x8
    unsigned int _channelType; // +0xc
    unsigned int _debugType; // +0x10
    unsigned int _supportCompressAlgo; // +0x14
    unsigned int _todoReconnectCount; // +0x18
    unsigned int _doneReconnectCount; // +0x1c
    unsigned int _evaluateID; // +0x20
    unsigned int _alertBitset; // +0x24
    unsigned int _maskBitset; // +0x28
    WAAppTask * _task; // +0x30
    WCStateMachine * _stateMachine; // +0x38
    WARemoteDebugChannel * _channel; // +0x40
    NSString * _roomID; // +0x48
    NSString * _pkgInfo; // +0x50
    WKWebView * _webView; // +0x58
    NSMutableDictionary * _uuid2SendoutTimestapMap; // +0x60
    WARemoteDebug_BaseReq * _baseReq; // +0x68
    WARemoteDebugSendQueue * _sendQueue; // +0x70
    WARemoteDebugRecvQueue * _recvQueue; // +0x78
    double _heartBeatTimestamp; // +0x80
    MMTimer * _heartBeatTimer; // +0x88
    MMTimer * _eventMessageTimer; // +0x90
    MMTimer * _speedTimer; // +0x98
    NSMutableDictionary * _jscID2IDWrapMap; // +0xa0
    NSString * _connectJSCID; // +0xa8
}
- (void)dealloc;
- (id)init;
- (void)setupStateMachine;
- (void)beginDebugWithRoomID:(id)arg1 pkgInfo:(id)arg2 channelType:(unsigned int)arg3 debugType:(unsigned int)arg4 proxyPort:(unsigned int)arg5 supportCompressAlgo:(unsigned int)arg6;
- (void)onNotSupportedConfirm;
- (void)alterEndReason:(id)arg1;
- (void)onRemoteDebugWillEnd;
- (void)endDebugAndClostTask;
- (void)endDebug;
- (BOOL)hasLocalJSCore;
- (void)disConnect;
- (void)performReconnectLater;
- (void)onReconnectConfirm;
- (void)onReconnectCancel;
- (void)reConnect;
- (void)loginWithTick:(id)arg1;
- (void)onLoginResp:(id)arg1;
- (void)checkHeartBeatTimestamp;
- (void)updateHeartBeatTimestamp;
- (void)heartBeat;
- (void)onHeartBeatResp:(id)arg1;
- (void)joinRoom;
- (void)onJoinRoomResp:(id)arg1;
- (void)quitRoom;
- (void)onQuitRoomResp:(id)arg1;
- (void)syncMessageWithMinSeq:(unsigned int)arg1 maxSeq:(unsigned int)arg2;
- (void)onSyncMessageResp:(id)arg1;
- (void)remoteEvaluateJavascript:(id)arg1;
- (void)remoteSetupContextWithConfigureJS:(id)arg1 publibVersion:(unsigned int)arg2 publibMD5:(id)arg3 threeJSMD5:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)remoteCallInterfaceResult:(id)arg1 callID:(unsigned int)arg2;
- (void)remoteDomEvent:(id)arg1 webViewID:(unsigned int)arg2;
- (void)sendNewDebuggerMessage:(id)arg1;
- (void)sendNewDebuggerCustomMessage:(id)arg1 payload:(id)arg2;
- (void)remoteAddJSCoreIDWrap:(id)arg1;
- (void)remoteRemoveJSCoreIDWrap:(id)arg1;
- (void)remoteAddJSCString:(id)arg1 jscName:(id)arg2;
- (void)remoteRemoteJSCString:(id)arg1;
- (void)remoteNetworkRequest:(id)arg1 taskID:(id)arg2 header:(id)arg3;
- (void)enSendQueueOnMainThread:(id)arg1;
- (void)enSendQueue:(id)arg1;
- (void)onCallInterface:(id)arg1;
- (void)onEvaluateJavascriptResult:(id)arg1;
- (void)onBreakpoint:(id)arg1;
- (void)updateMaskView;
- (BOOL)isGameDebugBitBreakpoint;
- (void)onPing:(id)arg1;
- (void)onDomOp:(id)arg1;
- (void)onChromeDevtools:(id)arg1;
- (void)onCustomMessage:(id)arg1;
- (void)onConnectJSContext:(id)arg1;
- (void)sendPbReq:(id)arg1 frameCmd:(unsigned int)arg2;
- (void)checkEventMessageTimeout;
- (void)handleClearDisconnect;
- (void)handleDisconnectWithCode:(long long)arg1;
- (void)fetchLoginTicket;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onChannelConnected;
- (void)onChannelDisconnected;
- (void)onChannelReciveString:(id)arg1;
- (void)onChannelReciveData:(id)arg1;
- (void)consoleLog:(id)arg1 isSendout:(BOOL)arg2;
- (BOOL)checkDataFormat:(id)arg1 baseResp:(id)arg2;
- (void)setupMessageTypeLookup;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (void)updateSpeed;
- (void)initHeartBeatTimer;
- (void)destoryHeartBeatTimer;
- (void)initEventMessageTimer;
- (void)destoryEventMessageTimer;
- (void)initSpeedTimer;
- (void)destorySpeedTimer;
- (void)fillSendDebugMsgReq:(id)arg1;
- (void)sendFrameData:(id)arg1 consoleLog:(id)arg2;
- (void)updateNoConfirmedCount:(unsigned int)arg1 noSendCount:(unsigned int)arg2;
- (void)resendCountReachThreshold;
- (void)onResendConfirm;
- (void)onResendCancel;
- (void)serverStateChange:(id)arg1;
- (void)recvSyncMessagesFromMinSeq:(unsigned int)arg1 toMaxSeq:(unsigned int)arg2;
- (void)recvHandleMessage:(id)arg1;
- (void)recvAccumulateCountReachThreshold;
- (id)waServiceMD5;
- (id)task;
- (void)setTask:(id)arg1;
- (id)stateMachine;
- (void)setStateMachine:(id)arg1;
- (unsigned int)channelType;
- (void)setChannelType:(unsigned int)arg1;
- (unsigned int)debugType;
- (void)setDebugType:(unsigned int)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)roomID;
- (void)setRoomID:(id)arg1;
- (id)pkgInfo;
- (void)setPkgInfo:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (unsigned int)supportCompressAlgo;
- (void)setSupportCompressAlgo:(unsigned int)arg1;
- (id)uuid2SendoutTimestapMap;
- (void)setUuid2SendoutTimestapMap:(id)arg1;
- (unsigned int)todoReconnectCount;
- (void)setTodoReconnectCount:(unsigned int)arg1;
- (unsigned int)doneReconnectCount;
- (void)setDoneReconnectCount:(unsigned int)arg1;
- (unsigned int)evaluateID;
- (void)setEvaluateID:(unsigned int)arg1;
- (id)baseReq;
- (void)setBaseReq:(id)arg1;
- (id)sendQueue;
- (void)setSendQueue:(id)arg1;
- (id)recvQueue;
- (void)setRecvQueue:(id)arg1;
- (double)heartBeatTimestamp;
- (void)setHeartBeatTimestamp:(double)arg1;
- (id)heartBeatTimer;
- (void)setHeartBeatTimer:(id)arg1;
- (id)eventMessageTimer;
- (void)setEventMessageTimer:(id)arg1;
- (id)speedTimer;
- (void)setSpeedTimer:(id)arg1;
- (unsigned int)alertBitset;
- (void)setAlertBitset:(unsigned int)arg1;
- (unsigned int)maskBitset;
- (void)setMaskBitset:(unsigned int)arg1;
- (id)jscID2IDWrapMap;
- (void)setJscID2IDWrapMap:(id)arg1;
- (id)connectJSCID;
- (void)setConnectJSCID:(id)arg1;
- (BOOL)hasConnected;
- (void)setHasConnected:(BOOL)arg1;
- (void).cxx_destruct;
@end

