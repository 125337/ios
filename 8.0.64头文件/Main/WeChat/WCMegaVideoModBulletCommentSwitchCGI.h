@interface WCMegaVideoModBulletCommentSwitchCGI : WCFinderBaseCgi
{
    BOOL _commentSwitch; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSString * _userName; // +0x20
    NSString * _videoId; // +0x28
}
- (id)initWithUserName:(id)arg1 videoId:(id)arg2 commentSwitch:(BOOL)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (BOOL)commentSwitch;
- (void)setCommentSwitch:(BOOL)arg1;
- (void).cxx_destruct;
@end
