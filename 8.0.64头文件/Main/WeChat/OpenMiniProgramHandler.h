@interface OpenMiniProgramHandler : MMObject <IPreEnterWechatLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
}
- (void)startHandle:(id)arg1;
- (void)doOpenMiniProgram;
- (id)translateToInternalWebviewUrlString;
- (id)encodeUrl:(id)arg1;
- (void)onPreEnterWechatDone;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (void).cxx_destruct;
@end
