@interface JumpToBizWebviewHandler : MMObject <IPreEnterWechatLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
}
- (void)startJumpToBizWebview:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)createWechatJumpToBizWebview;
- (void)cancelJumpToBizWebview;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (void).cxx_destruct;
@end
