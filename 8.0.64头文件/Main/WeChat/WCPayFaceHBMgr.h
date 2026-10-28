@interface WCPayFaceHBMgr : MMUserService <MMServiceProtocol, MMResourceMgrExt, IStrangerContactMgrExt, WCPayFaceHBPayLogicDelegate, WCPayFaceHBGetLogicDelegate>
{
    WCPayFaceHBPayLogic * m_faceHBPayLogic; // +0x8
    WCPayFaceHBGetLogic * m_faceHBGetLogic; // +0x10
}
- (id)init;
- (void)onServiceInit;
- (void)saveMount:(unsigned long long)arg1 Count:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)deleteResource;
- (void)checkResouce;
- (id)getRootPath;
- (id)getConfigPath;
- (id)getResourcePath;
- (id)getTmpPath;
- (id)dataForResource:(id)arg1 ofType:(id)arg2;
- (unsigned long long)getBigAmount;
- (void)startFaceHBPayLogic:(id)arg1;
- (void)OnFaceHBPayLogicCancel;
- (void)startFaceHBGetLogic:(id)arg1 withQRCode:(id)arg2 withQRCodeHandle:(id)arg3;
- (void)OnFaceHBGetLogicCancel;
- (id)getContactFromUserName:(id)arg1;
- (void)mergeFaceHBReceiverInfo:(id)arg1 withOldInfo:(id)arg2;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void).cxx_destruct;
@end
