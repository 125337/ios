@interface TingPlayAppMinimizeStayStatics : NSObject
{
    unsigned long long _currState; // +0x8
    unsigned long long _fullStayTime; // +0x10
    unsigned long long _autoFoldStayTime; // +0x18
    unsigned long long _manualFoldStayTime; // +0x20
    unsigned long long _baseTimestamp; // +0x28
}
- (id)init;
- (void)setCurrState:(unsigned long long)arg1;
- (void)__calIncrementStayTimeForCurrState;
- (id)reportParams;
- (unsigned long long)currState;
- (unsigned long long)fullStayTime;
- (void)setFullStayTime:(unsigned long long)arg1;
- (unsigned long long)autoFoldStayTime;
- (void)setAutoFoldStayTime:(unsigned long long)arg1;
- (unsigned long long)manualFoldStayTime;
- (void)setManualFoldStayTime:(unsigned long long)arg1;
- (unsigned long long)baseTimestamp;
- (void)setBaseTimestamp:(unsigned long long)arg1;
@end
