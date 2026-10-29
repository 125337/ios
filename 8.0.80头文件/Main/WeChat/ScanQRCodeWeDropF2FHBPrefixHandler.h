@interface ScanQRCodeWeDropF2FHBPrefixHandler : ScanQRCodeUrlPrefixHandler
+ (BOOL)handleF2fHongBaoStoreAction:(id)arg1 data:(id)arg2;
- (void)handleUrl:(id)arg1;
- (void)createLiteAppStoreForF2fHongBao:(id)arg1;
- (void)showNotSupportDialog;
- (id)matchingPrefix;
@end
