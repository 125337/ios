@interface WCLanTransferClientService : MMUserService <WCLanTransferSSCDelegate, MMServiceProtocol>
{
    WCLanTransferSSCQueue * _sscQueue; // +0x8
    NSObject<OS_dispatch_queue> * _lanTransferClientQueue; // +0x10
    NSMutableDictionary * _clientTaskInfo; // +0x18
}
+ (BOOL)canMsgWrapUseLanTransfer:(id)arg1;
- (id)init;
- (id)lanTransferClientQueue;
- (id)sscQueue;
- (void)checkOldTaskInfo;
- (void)addMessageWrap:(id)arg1;
- (void)stopMessageWrap:(id)arg1;
- (void)onLanTransferSSC:(id)arg1 downloadSuccess:(BOOL)arg2;
- (void)setSscQueue:(id)arg1;
- (void)setLanTransferClientQueue:(id)arg1;
- (id)clientTaskInfo;
- (void)setClientTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end
