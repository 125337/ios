@interface ScanQRCodeTransferUrlHandler : ScanQRCodeUrlPrefixHandler <WCBaseControlMgrExt>
- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)arg1;
- (id)matchingPrefix;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
@end

