@interface UDRCdnDownloadService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _dicDownloadingItem; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
- (void)onServiceInit;
- (void)cdnDownloadUDR:(id)arg1 resource:(id)arg2 scene:(long long)arg3 extInfo:(id)arg4 fullPkg:(BOOL)arg5;
- (void).cxx_destruct;
@end
