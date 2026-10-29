@interface WCAdCommonInteractionReportModel : WCAdChannelReportExtendInfoModel
{
    int _result; // +0x8
    double _maxAcceleration; // +0x10
}
- (int)result;
- (void)setResult:(int)arg1;
- (double)maxAcceleration;
- (void)setMaxAcceleration:(double)arg1;
@end
