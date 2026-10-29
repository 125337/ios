@interface IlinkServiceToMultiTalkMgrMsg : NSObject
{
    BOOL _isMicMute; // +0x8
    BOOL _isSpeakerOn; // +0x9
    BOOL _localVideoClosed; // +0xa
    BOOL _remoteVideoClosed; // +0xb
    BOOL _isLockScreen; // +0xc
    BOOL _isConnected; // +0xd
    BOOL _hasExtenalOutput; // +0xe
    NSArray * _members; // +0x10
    MMConfSDKMemberMgr * _confSDKMemberMgr; // +0x18
    NSString * _portType; // +0x20
}
- (id)members;
- (void)setMembers:(id)arg1;
- (id)confSDKMemberMgr;
- (void)setConfSDKMemberMgr:(id)arg1;
- (BOOL)isMicMute;
- (void)setIsMicMute:(BOOL)arg1;
- (BOOL)isSpeakerOn;
- (void)setIsSpeakerOn:(BOOL)arg1;
- (BOOL)localVideoClosed;
- (void)setLocalVideoClosed:(BOOL)arg1;
- (BOOL)remoteVideoClosed;
- (void)setRemoteVideoClosed:(BOOL)arg1;
- (BOOL)isLockScreen;
- (void)setIsLockScreen:(BOOL)arg1;
- (BOOL)isConnected;
- (void)setIsConnected:(BOOL)arg1;
- (id)portType;
- (void)setPortType:(id)arg1;
- (BOOL)hasExtenalOutput;
- (void)setHasExtenalOutput:(BOOL)arg1;
- (void).cxx_destruct;
@end
