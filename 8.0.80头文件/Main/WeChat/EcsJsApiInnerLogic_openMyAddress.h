@interface EcsJsApiInnerLogic_openMyAddress : EcsJsApiInnerLogic <IWCAddressControlLogic>
{
    BOOL _isFromManage; // +0x8
}
- (void)onAddressEditEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)startEditAddress:(id)arg1;
- (BOOL)isFromManage;
- (void)setIsFromManage:(BOOL)arg1;
@end
