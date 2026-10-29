@interface MMConfSDKCGIImp : NSObject <PBMessageObserverDelegate>
{
    id /* block */ _currentGetSDKUserInfoCGICallback; // +0x8
    id /* block */ _currentScreenSharingSecurityCheckCGICallback; // +0x10
}
- (void)cgiGetSDKUserInfo:(unsigned long long)arg1 sdkUserList:(id)arg2 groupId:(id)arg3 callback:(id /* block */)arg4;
- (void)cgiReportLog:(id)arg1 sdkGroupId:(id)arg2 fromUserName:(id)arg3 fromSdkUserName:(id)arg4 reportList:(id)arg5;
- (void)cgiScreenSharingSecurityCheck:(unsigned long long)arg1 groupid:(id)arg2 sdkGroupId:(id)arg3 fromUserName:(id)arg4 fromSdkUserName:(id)arg5 roomId:(long long)arg6 sharingFileMd5:(id)arg7 callback:(id /* block */)arg8;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)sendRequestWithoutPBW:(id)arg1 Retry:(int)arg2;
- (void)cgiSendCloudIlinkRequest:(unsigned long long)arg1 request:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
