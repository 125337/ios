@interface _TtC6WeChat18PredownloadService : MMUserService <MMServiceProtocol, IMsgExt>
{
     C2C; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isC2CImageEnabledWithIsChatRoom:(BOOL)arg1;
- (void)OnBeginDownloadImage:(id)arg1 HD:(BOOL)arg2 autoDownload:(BOOL)arg3 behavior:(long long)arg4;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)onUserClickImage:(id)arg1 byChangePage:(BOOL)arg2;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(BOOL)arg2;
- (void)onUserClickFile:(id)arg1;
- (void)onUserClickRequestFile:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

