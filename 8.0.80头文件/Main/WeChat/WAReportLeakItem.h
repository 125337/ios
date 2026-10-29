@interface WAReportLeakItem : WAReportBaseItem
{
    BOOL _isGame; // +0x8
    unsigned int _closeReason; // +0xc
    unsigned long long _leakType; // +0x10
}
+ (id)createWithInstanceId:(id)arg1 appId:(id)arg2 username:(id)arg3 appVersion:(unsigned long long)arg4 appState:(unsigned long long)arg5 libVersion:(unsigned int)arg6 libCustomVersion:(id)arg7 weappScene:(unsigned long long)arg8 isGame:(BOOL)arg9 closeReason:(unsigned int)arg10 leakType:(unsigned long long)arg11 nickName:(id)arg12;
- (int)reportID;
- (id)reportString;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
- (unsigned int)closeReason;
- (void)setCloseReason:(unsigned int)arg1;
- (unsigned long long)leakType;
- (void)setLeakType:(unsigned long long)arg1;
@end
