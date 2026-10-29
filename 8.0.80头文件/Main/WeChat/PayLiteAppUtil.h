@interface PayLiteAppUtil : NSObject <MMLiteAppExt>
{
    NSString * _appid; // +0x8
    NSString * _page; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)checkAndPreloadLiteApp:(id)arg1 page:(id)arg2;
- (void)onLiteAppUpdateFinish:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (void).cxx_destruct;
@end
