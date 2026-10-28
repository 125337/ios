@interface ChatBotVoIPMgr : MMUserService <ChatbotUICPP2NativeCallerBase, IAUAudioDeviceExt, ChatbotVideoUnitDelegate, IWAAgentServiceExt, CNetworkStatusExt, MMServiceProtocol>
{
    BOOL _enableMiniTaskPageChatCache; // +0x8
    int _recordingRoomScene; // +0xc
    ChatBotBaseVoIPViewController * _mainVoIPVC; // +0x10
    ChatbotUICPP2NativeCallerCallback * _cppCallback; // +0x18
    ChatbotUICPP2NativeCaller * _nativeController; // +0x20
    XImageViewRenderer * _localViewRenderer; // +0x28
    ChatbotAudioUnit * _audioUnit; // +0x30
    ChatbotVideoUnit * _videoUnit; // +0x38
    double _currentScale; // +0x40
}
+ (id)genJoinRoomParamsByRoomInfo:(id)arg1;
- (void)registerAff;
- (void)unregisterAff;
- (void)sendRUDPCmdMsg:(id)arg1 targetId:(int)arg2;
- (void)talkSuccAsync:(unsigned long long)arg1 roomID:(unsigned long long)arg2 openScene:(int)arg3;
- (void)callEndAsync:(unsigned long long)arg1 roomID:(unsigned long long)arg2;
- (void)setCallback:(id)arg1;
- (void)onRecvRUDPAsync:(unsigned long long)arg1 cmdID:(int)arg2 content:(id)arg3;
- (void)onTTSBeginAsync:(unsigned long long)arg1 roundInfo:(id)arg2;
- (void)onTTSEndAsync:(unsigned long long)arg1 roundInfo:(id)arg2;
- (void)onRecvMsgAsync:(unsigned long long)arg1 msgInfo:(id)arg2;
- (void)onRecvStreamTextAsync:(unsigned long long)arg1 text:(id)arg2;
- (void)onRecvQuestionInfoAsync:(unsigned long long)arg1 questionInfo:(id)arg2;
- (void)onRecvWeAppNotifyClientMsgAsync:(unsigned long long)arg1 notifyMsg:(id)arg2;
- (void)onRecvWeAppCdpAsync:(unsigned long long)arg1 cdp:(id)arg2 callId:(id)arg3 context:(id)arg4;
- (void)onRecvWeAppProccessMsgAsync:(unsigned long long)arg1 proccessMsg:(id)arg2;
- (void)onRecvCommonFunctionCallDataAsync:(unsigned long long)arg1 functionCallInput:(id)arg2;
- (void)onRecvPOIRequestAsync:(unsigned long long)arg1 authText:(id)arg2 isFirstReq:(BOOL)arg3 callId:(id)arg4 context:(id)arg5;
- (void)onSocialHistoryUpdateAsync:(unsigned long long)arg1 updateInfo:(id)arg2;
- (void)onRecvAiSpeakingInfoAsync:(unsigned long long)arg1 downlinkSideInfo:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (BOOL)enableMiniTaskPageChat;
- (id)createAsstVC:(unsigned int)arg1;
- (double)getCurrentScale;
- (void)joinRoomWithParams:(id)arg1 openScene:(int)arg2;
- (void)joinRoomWithParams:(id)arg1 roomInfo:(id)arg2 openScene:(int)arg3;
- (void)switchNewRoomWithParams:(id)arg1;
- (void)hangupAndJoinNewRoomWithParams:(id)arg1 groupId:(id)arg2 roomInfoPB:(id)arg3;
- (void)setMute:(BOOL)arg1 scene:(int)arg2 withTransferCtx:(id)arg3;
- (void)setMute:(BOOL)arg1 scene:(int)arg2 withTransferCtx:(id)arg3 roomIdentifier:(id)arg4;
- (void)hangup:(int)arg1;
- (void)startVideoDevice:(unsigned int)arg1;
- (void)stopVideoDevice;
- (int)getNetWorkType;
- (BOOL)checkSpecialMode:(id)arg1;
- (void)changeToSpecialModel:(id)arg1 modelName:(id)arg2;
- (BOOL)isChattingWithAI;
- (BOOL)needShowActiveSocialRoomRedDot;
- (void)ResetActiveSocialRoomRedDot;
- (void)checkAndUpdateMainFrameLeftTopBtn;
- (void)fetchSocialHistoryForNotifyData:(id)arg1;
- (void)onFlipCamera;
- (double)maxZoomFactor;
- (void)zoomFactor:(double)arg1;
- (BOOL)getIfFrontCamera;
- (void)changeIntoFullDuplexMode;
- (void)changeInfoHalfDuplexMode;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (int)CameraDataCallback:(int)arg1 frmData:(char *)arg2 frmIndex:(unsigned long long)arg3 imageWidth:(unsigned int)arg4 imageHeight:(unsigned int)arg5 rgbaTexture:(id)arg6;
- (void)checkCameraDataNeedSendToServer:(id /* block */)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3;
- (id)getRoomIdentifier;
- (void)setFlipX:(BOOL)arg1;
- (void)setCameraScale:(double)arg1;
- (id)transferMessageWrap:(id)arg1;
- (id)genPlaygroundCardInfoWithMsg:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)openDefaultRoomForHardware;
- (void)openMic:(int)arg1;
- (void)closeMic:(int)arg1;
- (void)onLogCdpDownWithSessionId:(id)arg1 cmdId:(id)arg2 cmdTaskId:(id)arg3 cmdMethod:(id)arg4;
- (void)onLogCdpUpWithSessionId:(id)arg1 cmdId:(id)arg2 cmdTaskId:(id)arg3 cmdMethod:(id)arg4 retCode:(int)arg5;
- (void)onRequestCdpWithBase64String:(id)arg1 callId:(id)arg2 context:(id)arg3;
- (void)sendPOI:(CLLocationCoordinate2D)arg1 isSuccess:(BOOL)arg2 needAuth:(BOOL)arg3 callId:(id)arg4 context:(id)arg5;
- (int)sendVideoData:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (id)mainVoIPVC;
- (void)setMainVoIPVC:(id)arg1;
- (id)cppCallback;
- (void)setCppCallback:(id)arg1;
- (id)nativeController;
- (void)setNativeController:(id)arg1;
- (id)localViewRenderer;
- (void)setLocalViewRenderer:(id)arg1;
- (id)audioUnit;
- (void)setAudioUnit:(id)arg1;
- (id)videoUnit;
- (void)setVideoUnit:(id)arg1;
- (int)recordingRoomScene;
- (void)setRecordingRoomScene:(int)arg1;
- (double)currentScale;
- (void)setCurrentScale:(double)arg1;
- (BOOL)enableMiniTaskPageChatCache;
- (void)setEnableMiniTaskPageChatCache:(BOOL)arg1;
- (void).cxx_destruct;
@end
