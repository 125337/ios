@interface IlinkLogService : MMRootService <MMServiceProtocol>
{
    NSString * app_dir_; // +0x8
    IlinkLogCallback * log_callback_; // +0x10
}
+ (id)iLinkPath;
- (void)makeSureLogReady;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void).cxx_destruct;
@end

