@interface HandleScanResultHandler : BaseOpenSDKHandler <GetA8KeyLogicDelegate>
{
    GetA8KeyLogic * _geta8KeyLogic; // +0x8
}
- (void)realHandleReqAfterermissionValidation;
- (id)getExtTaransLinkParams;
- (id)getScanResult;
- (BOOL)handleProlieScanResult:(id)arg1;
- (void).cxx_destruct;
@end
