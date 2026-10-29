@interface MMFinderLiveRedPacketLogic : NSObject <WCFinderLiveExt, WCRedEnvelopesSendControlLogicDelegate, WCRedEnvelopesLiveStreamReceiveControlLogicDelegate>
{
    BOOL _canSendRedPackets; // +0x8
    BOOL _canReceiveRedPackets; // +0x9
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveRedPacketLogicDelegate> _delegate; // +0x18
    NSArray * _bindingRoomContacts; // +0x20
    NSMutableDictionary * _redPacketDictionary; // +0x28
    NSMutableDictionary * _redPacketQueueDictionary; // +0x30
    NSMutableDictionary * _stagingSendInfoDictionary; // +0x38
}
+ (id)currentLogic;
+ (void)setCurrentLogic:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)_init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)setBindingRoomContacts:(id)arg1;
- (id)currentLiveTask;
- (id)redPacketQueueForSenderMicId:(id)arg1;
- (void)handleWithNewRedPacketItem:(id)arg1;
- (void)displayNewRedPacketItem:(id)arg1;
- (void)appendCommentWithRedPacketSendInfo:(id)arg1;
- (void)appendCommentWithRedPacketReceiveInfo:(id)arg1;
- (id)myUsername;
- (id)handleWithRedPacketInfo:(id)arg1;
- (void)handleWithSendRedPacketInfo:(id)arg1;
- (void)handleWithReceiveRedPacketInfo:(id)arg1;
- (void)onGetFinderLiveRedPacketsWithTaskId:(id)arg1 redPacketInfos:(id)arg2;
- (void)onGetFinderLiveAppMessageWithTaskId:(id)arg1 sendRedPacketInfo:(id)arg2;
- (void)onGetFinderLiveAppMessageWithTaskId:(id)arg1 receiveRedPacketInfo:(id)arg2;
- (void)sendRedPacket;
- (BOOL)isViewControllerVisible;
- (void)openRedPacketWithItem:(id)arg1;
- (void)showRedPacketDetailWithReceiveInfo:(id)arg1;
- (void)openRedPacketWithCommentItem:(id)arg1;
- (void)showRedPacketDetailWithCommentItem:(id)arg1;
- (void)openRedPacketWithMessage:(id)arg1;
- (void)OnWCRedEnvelopesSendControlLogicPaySuccess:(id)arg1;
- (void)OnWCRedEnvelopesLiveStreamReceiveControlLogicReceiveDone:(unsigned long long)arg1 messageWrap:(id)arg2;
- (id)taskId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bindingRoomContacts;
- (BOOL)canSendRedPackets;
- (void)setCanSendRedPackets:(BOOL)arg1;
- (BOOL)canReceiveRedPackets;
- (void)setCanReceiveRedPackets:(BOOL)arg1;
- (id)redPacketDictionary;
- (void)setRedPacketDictionary:(id)arg1;
- (id)redPacketQueueDictionary;
- (void)setRedPacketQueueDictionary:(id)arg1;
- (id)stagingSendInfoDictionary;
- (void)setStagingSendInfoDictionary:(id)arg1;
- (void).cxx_destruct;
@end

