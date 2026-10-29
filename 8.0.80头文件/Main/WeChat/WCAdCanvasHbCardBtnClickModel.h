@interface WCAdCanvasHbCardBtnClickModel : WCAdChannelReportExtendInfoModel
{
    int _btnType; // +0x8
    NSString * _canvasId; // +0x10
    NSString * _twistCardId; // +0x18
    WCCanvasComponentRedEnvelopStatusInfo * _hbCard; // +0x20
}
- (int)btnType;
- (void)setBtnType:(int)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)twistCardId;
- (void)setTwistCardId:(id)arg1;
- (id)hbCard;
- (void)setHbCard:(id)arg1;
- (void).cxx_destruct;
@end
