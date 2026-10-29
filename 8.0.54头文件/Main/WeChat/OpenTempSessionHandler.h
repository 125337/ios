@interface OpenTempSessionHandler : MMObject <IPreEnterWechatLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
}
- (void)startHandleWithParamter:(id)arg1;
- (void)doOpenTempSession;
- (id)translateToInternalTempSessionUrlString;
- (void)onPreEnterWechatDone;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (void).cxx_destruct;
@end

