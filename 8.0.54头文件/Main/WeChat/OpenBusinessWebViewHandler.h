@interface OpenBusinessWebViewHandler : MMObject <IPreEnterWechatLogicExt>
{
    unsigned int _type; // +0x8
    OpenApiParameter * _parameter; // +0x10
}
- (void)startHandleWithOpenParam:(id)arg1;
- (void)doOpenWebview;
- (id)translateToInternalWebviewUrlString;
- (void)onPreEnterWechatDone;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

