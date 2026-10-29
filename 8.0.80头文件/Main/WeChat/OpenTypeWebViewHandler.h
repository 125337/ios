@interface OpenTypeWebViewHandler : NSObject <IPreEnterWechatLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
    long long _opentypewebviewSubtype; // +0x10
}
- (void)startHandleWithOpenParam:(id)arg1;
- (void)doOpenWebview;
- (id)encodeUrl:(id)arg1;
- (void)onPreEnterWechatDone;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (long long)opentypewebviewSubtype;
- (void)setOpentypewebviewSubtype:(long long)arg1;
- (void).cxx_destruct;
@end
