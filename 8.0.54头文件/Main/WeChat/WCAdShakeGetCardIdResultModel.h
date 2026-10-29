@interface WCAdShakeGetCardIdResultModel : WCAdChannelReportExtendInfoModel
{
    int _result; // +0x8
    int _encoreShake; // +0xc
}
- (int)result;
- (void)setResult:(int)arg1;
- (int)encoreShake;
- (void)setEncoreShake:(int)arg1;
@end

