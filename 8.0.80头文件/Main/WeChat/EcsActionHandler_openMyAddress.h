@interface EcsActionHandler_openMyAddress : EcsActionHandler_Base <IWCAddressControlLogic>
{
    BOOL _isFromManage; // +0x8
}
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)onAddressEditEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)startEditAddress:(id)arg1;
- (BOOL)isFromManage;
- (void)setIsFromManage:(BOOL)arg1;
@end
