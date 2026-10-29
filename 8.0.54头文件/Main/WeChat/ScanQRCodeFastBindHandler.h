@interface ScanQRCodeFastBindHandler : ScanQRCodeUrlPrefixHandler <MMUseCaseCallback>
- (void)dealloc;
- (void)handleUrl:(id)arg1;
- (id)matchingPrefix;
- (void)call:(id)arg1;
@end

