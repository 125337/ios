@interface OpenWebviewHandler : MMObject <IPreEnterWechatLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
}
- (void)startHandleWithOpenParam:(id)arg1;
- (void)doOpenWebview;
- (id)translateToInternalWebviewUrlString;
- (id)encodeUrl:(id)arg1;
- (void)onPreEnterWechatDone;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (void).cxx_destruct;
@end

