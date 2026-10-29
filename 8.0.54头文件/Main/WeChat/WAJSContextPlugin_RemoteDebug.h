@interface WAJSContextPlugin_RemoteDebug : WAJSContextPluginBase
{
    double _panelWidth; // +0x8
    NSMutableArray * _printItemList; // +0x10
    CADisplayLink * _updateTimer; // +0x18
    WARemoteDebugPanelView * _panelView; // +0x20
    WARemoteDebugMaskView * _maskView; // +0x28
    BOOL _isDisplay; // +0x30
    unsigned int _noConfirmedCount; // +0x34
    unsigned int _noSendCount; // +0x38
    unsigned int _sendCount; // +0x3c
    unsigned int _recvCount; // +0x40
    NSString * _sendLength; // +0x48
    NSString * _recvLength; // +0x50
    NSString * _connectString; // +0x58
    NSString * _serverString; // +0x60
    NSString * _maskString; // +0x68
}
- (void)dealloc;
- (id)init;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)initPanelView;
- (void)initMaskView;
- (void)onStopButtonChanged:(id)arg1;
- (void)consoleLog:(id)arg1 isSendout:(BOOL)arg2;
- (void)showMaskView:(id)arg1 isButtonHidden:(BOOL)arg2;
- (void)dismissMaskView;
- (void)didRotate:(id)arg1;
- (void)initUpdateTimer;
- (void)destoryUpdateTimer;
- (void)updatePanelView;
- (BOOL)isDisplay;
- (void)setIsDisplay:(BOOL)arg1;
- (unsigned int)noConfirmedCount;
- (void)setNoConfirmedCount:(unsigned int)arg1;
- (unsigned int)noSendCount;
- (void)setNoSendCount:(unsigned int)arg1;
- (id)sendLength;
- (void)setSendLength:(id)arg1;
- (unsigned int)sendCount;
- (void)setSendCount:(unsigned int)arg1;
- (id)recvLength;
- (void)setRecvLength:(id)arg1;
- (unsigned int)recvCount;
- (void)setRecvCount:(unsigned int)arg1;
- (id)connectString;
- (void)setConnectString:(id)arg1;
- (id)serverString;
- (void)setServerString:(id)arg1;
- (id)maskString;
- (void)setMaskString:(id)arg1;
- (void).cxx_destruct;
@end

