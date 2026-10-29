@interface AVAudioRouteManager : NSObject
{
    BOOL _hasExtenalOutput; // +0x8
    NSString * _settingPortType; // +0x10
    AVAudioSessionPortDescription * _curOutputPort; // +0x18
    NSString * _curPortType; // +0x20
    id <AVAudioRouteManagerDelegate> _delegate; // +0x28
    MMTimer * _m_actingTimer; // +0x30
    unsigned long long _scene; // +0x38
}
- (id)initWithScene:(unsigned long long)arg1;
- (void)setAudioStatus:(BOOL)arg1 isCaller:(BOOL)arg2;
- (void)setAudioStatusOfSpeaker:(BOOL)arg1;
- (void)initAudioRoute;
- (BOOL)checkIfHasExternalOutput:(id)arg1;
- (void)timerCheckAudioFunction;
- (void)clearActingTimer;
- (void)clearAndStop;
- (void)changeAudioToPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)updatePortType:(id)arg1 reasonValue:(unsigned long long)arg2;
- (BOOL)hasExtenalOutput;
- (void)setHasExtenalOutput:(BOOL)arg1;
- (id)settingPortType;
- (void)setSettingPortType:(id)arg1;
- (id)curOutputPort;
- (void)setCurOutputPort:(id)arg1;
- (id)curPortType;
- (void)setCurPortType:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_actingTimer;
- (void)setM_actingTimer:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

