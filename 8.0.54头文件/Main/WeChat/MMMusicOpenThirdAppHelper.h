@interface MMMusicOpenThirdAppHelper : MMObject
{
    id <MMMusicOpenThirdAppHelperDataSource> _dataSource; // +0x8
    id <MMMusicOpenThirdAppHelperDelegate> _delegate; // +0x10
}
- (void)tryOpenThirdAppWithMusicInfo:(id)arg1 andSource:(unsigned long long)arg2;
- (void)tryOpenMembershipWithAppId:(id)arg1 mid:(id)arg2 completion:(id /* block */)arg3;
- (void)tryOpenMembershipWithMusicInfo:(id)arg1 ticket:(id)arg2;
- (void)tryOpenMembershipWithAppId:(id)arg1 ticket:(id)arg2;
- (void)openQQMusicAppWithMusicInfo:(id)arg1 source:(unsigned long long)arg2 downloadURL:(id)arg3;
- (void)openMusicAppWithScheme:(id)arg1 source:(unsigned long long)arg2 downloadURL:(id)arg3;
- (void)open3rdAppByReqWithMusicInfo:(id)arg1 source:(unsigned long long)arg2 downloadURL:(id)arg3;
- (void)open3rdAppToAppStore:(unsigned long long)arg1 downloadURL:(id)arg2;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

