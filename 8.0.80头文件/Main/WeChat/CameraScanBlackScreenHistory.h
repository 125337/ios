@interface CameraScanBlackScreenHistory : NSObject
{
    float _blackRate; // +0x8
    float _avgFirstFrameCost; // +0xc
    long long _scanCount; // +0x10
    long long _blackCount; // +0x18
    long long _maxErrorType; // +0x20
    long long _maxPressType; // +0x28
    long long _recoverCount; // +0x30
}
- (long long)scanCount;
- (void)setScanCount:(long long)arg1;
- (long long)blackCount;
- (void)setBlackCount:(long long)arg1;
- (float)blackRate;
- (void)setBlackRate:(float)arg1;
- (float)avgFirstFrameCost;
- (void)setAvgFirstFrameCost:(float)arg1;
- (long long)maxErrorType;
- (void)setMaxErrorType:(long long)arg1;
- (long long)maxPressType;
- (void)setMaxPressType:(long long)arg1;
- (long long)recoverCount;
- (void)setRecoverCount:(long long)arg1;
@end
