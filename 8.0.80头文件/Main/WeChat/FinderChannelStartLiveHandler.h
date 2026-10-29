@interface FinderChannelStartLiveHandler : OpenFinderBaseHandler
{
    NSString * _liveJsonInfo; // +0x8
    NSString * _openId; // +0x10
}
- (void)createOpenUrl;
- (void)onAuthDidSuccess;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
- (void)sendStartChannelLiveResp:(id)arg1;
- (void)showFailErrorMsg:(id)arg1 title:(id)arg2 respErrMsg:(id)arg3 respErrCode:(int)arg4;
- (id)liveJsonInfo;
- (void)setLiveJsonInfo:(id)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (void).cxx_destruct;
@end
