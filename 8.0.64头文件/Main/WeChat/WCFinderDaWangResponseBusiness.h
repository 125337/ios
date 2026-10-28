@interface WCFinderDaWangResponseBusiness : NSObject
{
    BOOL _needFreeFlow; // +0x8
    NSString * _freeFlowType; // +0x10
    NSString * _freeFlowLogoContent; // +0x18
    NSString * _appId; // +0x20
}
- (BOOL)needFreeFlow;
- (void)setNeedFreeFlow:(BOOL)arg1;
- (id)freeFlowType;
- (void)setFreeFlowType:(id)arg1;
- (id)freeFlowLogoContent;
- (void)setFreeFlowLogoContent:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end
