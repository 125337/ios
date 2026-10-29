@interface CameraScanCodeVerifyInfo : NSObject
{
    int _sessionVerifyResult; // +0x8
    int _waterMarkVerifyResult; // +0xc
    int _resultSource; // +0x10
    int _originFrame; // +0x14
    NSString * _dataContent; // +0x18
    unsigned long long _originSession; // +0x20
    unsigned long long _originWatermark; // +0x28
    unsigned long long _consumedHwm; // +0x30
}
- (id)dataContent;
- (void)setDataContent:(id)arg1;
- (int)sessionVerifyResult;
- (void)setSessionVerifyResult:(int)arg1;
- (int)waterMarkVerifyResult;
- (void)setWaterMarkVerifyResult:(int)arg1;
- (unsigned long long)originSession;
- (void)setOriginSession:(unsigned long long)arg1;
- (unsigned long long)originWatermark;
- (void)setOriginWatermark:(unsigned long long)arg1;
- (unsigned long long)consumedHwm;
- (void)setConsumedHwm:(unsigned long long)arg1;
- (int)resultSource;
- (void)setResultSource:(int)arg1;
- (int)originFrame;
- (void)setOriginFrame:(int)arg1;
- (void).cxx_destruct;
@end
