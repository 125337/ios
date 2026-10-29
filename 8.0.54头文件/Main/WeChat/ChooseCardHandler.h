@interface ChooseCardHandler : MMObject <WCCardChooseViewControllerDelegate, IPreEnterWechatLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
}
- (void)cancelChooseCard;
- (void)startChooseCard:(id)arg1;
- (void)cancelHandleAndReturn3rdApp:(int)arg1 importInfo:(id)arg2;
- (void)onPreEnterWechatDone;
- (void)chooseCard;
- (void)onChooseSuccess:(id)arg1;
- (void)onChooseCancel;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (void).cxx_destruct;
@end

