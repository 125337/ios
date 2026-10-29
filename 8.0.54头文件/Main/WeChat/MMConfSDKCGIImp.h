@interface MMConfSDKCGIImp : NSObject <PBMessageObserverDelegate>
{
    NSString * _currentRequestAppId; // +0x8
    id /* block */ _currentGetAuthCodeCGICallback; // +0x10
    id /* block */ _currentGetSDKUserInfoCGICallback; // +0x18
    id /* block */ _currentSendBannerMsgCGICallback; // +0x20
    id /* block */ _currentScreenSharingSecurityCheckCGICallback; // +0x28
}
- (void)cgiGetAuthCode:(unsigned int)arg1 callback:(id /* block */)arg2;
- (void)cgiGetSDKUserInfo:(unsigned int)arg1 sdkUserList:(id)arg2 groupId:(id)arg3 callback:(id /* block */)arg4;
- (void)cgiSendBannerMsg:(unsigned int)arg1 groupid:(id)arg2 roomId:(long long)arg3 fromUserName:(id)arg4 fromSdkUserName:(id)arg5 bannerMsg:(id)arg6 callback:(id /* block */)arg7;
- (void)cgiReportLog:(id)arg1 sdkGroupId:(id)arg2 fromUserName:(id)arg3 fromSdkUserName:(id)arg4 reportList:(id)arg5;
- (void)cgiScreenSharingSecurityCheck:(unsigned int)arg1 groupid:(id)arg2 sdkGroupId:(id)arg3 fromUserName:(id)arg4 fromSdkUserName:(id)arg5 roomId:(long long)arg6 sharingFileMd5:(id)arg7 callback:(id /* block */)arg8;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)sendRequestWithoutPBW:(id)arg1 Retry:(int)arg2;
- (void)cgiSendCloudIlinkRequest:(unsigned int)arg1 request:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end

