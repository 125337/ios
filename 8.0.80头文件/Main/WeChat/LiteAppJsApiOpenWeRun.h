@interface LiteAppJsApiOpenWeRun : LiteAppJsApi <contactVerifyLogicDelegate>
{
    CContactVerifyLogic * m_oLogic; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)contactAddContactOk:(id)arg1;
- (void)onContactVerifyFail;
- (void).cxx_destruct;
@end
