@interface MMFinderLiveCameraCastMgr : MMUserService <MMFinderLiveCameraCastingWireLessChannelDelegate, MMFinderLiveTaskCameraCastingDelegate, MMServiceProtocol>
{
    BOOL _isSendQueueRunning; // +0x8
    MMFinderLiveCameraCastingWireLessChannel * _wirlessDataChannel; // +0x10
    NSDictionary * _castingInfo; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
    MMFinderLiveStartParamsModel * _startParamsModel; // +0x28
    MMLiveCameraCastingAdapter * _castingAadpater; // +0x30
    UINavigationController * _navigationController; // +0x38
    struct * _sendBuffer; // +0x40
    NSObject<OS_dispatch_queue> * _sendQueue; // +0x48
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (long long)startWirlessCameraCastTask:(id)arg1 navigationController:(id)arg2;
- (id)dataChannel;
- (void)tryToConnect:(id)arg1;
- (void)enterFinderLive:(id)arg1 isUpdate:(BOOL)arg2;
- (void)stopCameraCast;
- (void)didConnectToHost;
- (void)didDisconnect:(long long)arg1;
- (void)didReadData:(id)arg1;
- (void)recvCmdData;
- (void)didOutputEncodeVideoData:(id)arg1;
- (void)onCameraCastShutDown;
- (void)onLastLiveViewControllerDismissed:(BOOL)arg1;
- (void)createSendBuffer;
- (void)clearSendBuffer;
- (void)startSendThread;
- (void)stopSendThread;
- (void)sendQueueMain;
- (id)wirlessDataChannel;
- (void)setWirlessDataChannel:(id)arg1;
- (id)castingInfo;
- (void)setCastingInfo:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)startParamsModel;
- (void)setStartParamsModel:(id)arg1;
- (id)castingAadpater;
- (void)setCastingAadpater:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (struct *)sendBuffer;
- (void)setSendBuffer:(struct *)arg1;
- (id)sendQueue;
- (void)setSendQueue:(id)arg1;
- (BOOL)isSendQueueRunning;
- (void)setIsSendQueueRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end
