@interface WCLanTransferServerService : MMUserService <WCLanTransferSSSDelegate, MMServiceProtocol>
{
    WCLanTransferSSSQueue * _sssQueue; // +0x8
    NSObject<OS_dispatch_queue> * _lanTransferServerQueue; // +0x10
    NSMutableDictionary * _serverTaskInfo; // +0x18
}
+ (BOOL)canUseLanTransfer:(id)arg1;
- (id)init;
- (void)checkOldTaskInfo;
- (id)lanTransferServerQueue;
- (id)sssQueue;
- (id)addMessageWrap:(id)arg1;
- (void)onLanTransferSSS:(id)arg1 sendSuccess:(BOOL)arg2;
- (void)setSssQueue:(id)arg1;
- (void)setLanTransferServerQueue:(id)arg1;
- (id)serverTaskInfo;
- (void)setServerTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end

