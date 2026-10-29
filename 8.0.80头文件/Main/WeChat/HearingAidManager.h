@interface HearingAidManager : MMUserService <MMServiceProtocol>
- (unsigned long long)getLocalMode;
- (unsigned long long)getOldMode;
- (unsigned long long)getRemoteMode;
- (BOOL)setMode:(unsigned long long)arg1;
- (BOOL)isOn;
- (BOOL)isXLabEnable;
- (unsigned long long)getHAidDeviceType;
- (void)showAudioInterruptionWording;
- (void)dataReport:(id)arg1;
- (float)getXLabThreshold;
- (float)getXLabVolume;
@end
