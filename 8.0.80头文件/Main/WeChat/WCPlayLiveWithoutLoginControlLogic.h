@interface WCPlayLiveWithoutLoginControlLogic : WCBaseControlLogic <WCPlayLiveWithoutLoginGetQRCodeDelegate, WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate>
{
    BOOL _isInCheckQRCodeStatus; // +0x20
    WCPlayLiveWithoutLoginGetQRCodeCGI * _getQRCodeCGI; // +0x28
    WCPlayLiveWithoutLoginCheckQRCodeStatusCGI * _checkQRCodeCGI; // +0x30
    WCPlayLiveWithoutLoginQRCodeViewController * _playLiveWithoutLoginQRCodeViewController; // +0x38
    WCPlayLiveWithoutLoginViewController * _playerVc; // +0x40
    double _nextCheckStatusTime; // +0x48
    MMTimer * _timer; // +0x50
    NSString * _qrcodeToken; // +0x58
    FinderLiveContact * _anchorLiveContact; // +0x60
    FinderLiveInfo * _liveInfo; // +0x68
    id /* block */ _refreshTokenCompletion; // +0x70
}
- (void)dealloc;
- (void)startCheckQRCodeStatusTimeInterval:(double)arg1;
- (void)startCheckQRCodeStatus;
- (void)startGetQRCode;
- (void)onCheckQRCodeStatusSuccuss:(id)arg1 nextPollingTs:(double)arg2 liveContact:(id)arg3 liveInfo:(id)arg4;
- (void)onCheckQRCodeStatusFail;
- (void)onGetQRCodeSuccuss:(id)arg1 image:(id)arg2 token:(id)arg3;
- (void)onGetQRCodeFail;
- (void)showPlayLiveWithoutLoginQRCode;
- (void)checkQRCodeStatusAfterGetQRCodeToken;
- (id)getQRCodeCGI;
- (id)checkQRCodeCGI;
- (void)setGetQRCodeCGI:(id)arg1;
- (void)setCheckQRCodeCGI:(id)arg1;
- (id)playLiveWithoutLoginQRCodeViewController;
- (void)setPlayLiveWithoutLoginQRCodeViewController:(id)arg1;
- (id)playerVc;
- (void)setPlayerVc:(id)arg1;
- (double)nextCheckStatusTime;
- (void)setNextCheckStatusTime:(double)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)isInCheckQRCodeStatus;
- (void)setIsInCheckQRCodeStatus:(BOOL)arg1;
- (id)qrcodeToken;
- (void)setQrcodeToken:(id)arg1;
- (id)anchorLiveContact;
- (void)setAnchorLiveContact:(id)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id /* block */)refreshTokenCompletion;
- (void)setRefreshTokenCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
