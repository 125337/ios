@interface GameCenterStatReport : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
- (void)report12909WithWithScene:(long long)arg1 uiArea:(unsigned int)arg2 position:(unsigned int)arg3 action:(long long)arg4 extInfo:(id)arg5;
- (void)stat12909:(id)arg1;
- (void)stat31408:(id)arg1;
- (void)stat13384:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)svrReport:(unsigned int)arg1 withLogExt:(id)arg2;
@end
