@interface VoIPFirstMessageStatisticsService : MMUserService <MMServiceProtocol>
{
    BOOL _isReceivedNewsSyncMessagesOnce; // +0x8
    BOOL _isHandledOnce; // +0x9
    int _statisticsRoomId; // +0xc
    double _launchTimestamp; // +0x10
}
- (void)didLaunchWhenApplicaionEnterForeground;
- (void)receiveIfIsInviteMessage:(BOOL)arg1;
- (void)handleInviteMessage:(id)arg1;
- (void)applicationWillSuspend;
- (id)init;
- (void)dealloc;
- (int)statisticsRoomId;
- (void)setStatisticsRoomId:(int)arg1;
- (double)launchTimestamp;
- (void)setLaunchTimestamp:(double)arg1;
- (BOOL)isReceivedNewsSyncMessagesOnce;
- (void)setIsReceivedNewsSyncMessagesOnce:(BOOL)arg1;
- (BOOL)isHandledOnce;
- (void)setIsHandledOnce:(BOOL)arg1;
@end
