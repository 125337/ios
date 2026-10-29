@interface WABGAudioMinimizationItemInfo : NSObject
{
    BOOL _isGameApp; // +0x8
    unsigned int _appDebugMode; // +0xc
    unsigned int _enterScene; // +0x10
    NSString * _hostId; // +0x18
    id _hostView; // +0x20
    long long _state; // +0x28
    NSString * _appId; // +0x30
    NSString * _appUsrName; // +0x38
    NSString * _appDisplayName; // +0x40
    UIImage * _coverImage; // +0x48
    long long _style; // +0x50
    id <WABGAudioMinimizationHostPlayerProtocol> _hostPlayer; // +0x58
    id /* block */ _operateAction; // +0x60
}
- (id)hostId;
- (void)setHostId:(id)arg1;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appUsrName;
- (void)setAppUsrName:(id)arg1;
- (id)appDisplayName;
- (void)setAppDisplayName:(id)arg1;
- (unsigned int)appDebugMode;
- (void)setAppDebugMode:(unsigned int)arg1;
- (BOOL)isGameApp;
- (void)setIsGameApp:(BOOL)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)hostPlayer;
- (void)setHostPlayer:(id)arg1;
- (id /* block */)operateAction;
- (void)setOperateAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

