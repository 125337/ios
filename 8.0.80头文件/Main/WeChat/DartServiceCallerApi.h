@interface DartServiceCallerApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)flutterBackupInitModelWithCompletion:(id /* block */)arg1;
- (void)flutterBackupStartTaskPackageId:(long long)arg1 isBackup:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)flutterBackupStopAllTaskWithCompletion:(id /* block */)arg1;
- (void)flutterBSInitNotifyDataNotifyData:(id)arg1 completion:(id /* block */)arg2;
- (void)flutterBSClearNotifyCacheWithCompletion:(id /* block */)arg1;
- (void)flutterBSUpdateContactContactData:(id)arg1 completion:(id /* block */)arg2;
- (void)setEnableAmoebaDebugViewEnable:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)flutterLiveShopShelfPrefetchLiveId:(id)arg1 objectId:(id)arg2 anchorUsername:(id)arg3 isAnchor:(BOOL)arg4 isAssistant:(BOOL)arg5 liveCookies:(id)arg6 ecExtraInfoBuffer:(id)arg7 cgiContext:(id)arg8 completion:(id /* block */)arg9;
- (void)flutterLiveShopShelfPrefetchClearLiveId:(id)arg1 anchorUsername:(id)arg2 completion:(id /* block */)arg3;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
