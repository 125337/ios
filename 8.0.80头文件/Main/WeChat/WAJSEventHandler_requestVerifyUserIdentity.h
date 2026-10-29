@interface WAJSEventHandler_requestVerifyUserIdentity : WAJSEventHandler_BaseEvent <WCPayPayJSApiLogicParamDelegate>
{
    NSMutableDictionary * _dic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)getWCPayPayParam;
- (id)getTinyappUserName;
- (id)getTinyappPath;
- (id)dic;
- (void)setDic:(id)arg1;
- (void).cxx_destruct;
@end
