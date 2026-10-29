@interface WCAdShakeActionResultModel : WCAdChannelReportExtendInfoModel
{
    int _result; // +0x8
    double _maxAcceleration; // +0x10
    NSString * _twistCardId; // +0x18
    WCCanvasComponentRedEnvelopStatusInfo * _hbCard; // +0x20
}
- (int)result;
- (void)setResult:(int)arg1;
- (double)maxAcceleration;
- (void)setMaxAcceleration:(double)arg1;
- (id)twistCardId;
- (void)setTwistCardId:(id)arg1;
- (id)hbCard;
- (void)setHbCard:(id)arg1;
- (void).cxx_destruct;
@end

