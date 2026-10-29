@interface NewXmlToolCallMgr : MMUserService <MMServiceProtocol, IMsgExt>
+ (id)sharedInstance;
+ (BOOL)canUseInSafemode;
- (id)init;
- (void)onServiceInit;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)parseXmlParams:(id)arg1;
- (XmlReaderNode_t *)findToolCallNode:(CXmlReader *)arg1;
- (id)buildResultFromNewXmlToolCallNode:(XmlReaderNode_t *)arg1 toolCallNode:(XmlReaderNode_t *)arg2;
- (void)setValueForKey:(id)arg1 fromNode:(XmlReaderNode_t *)arg2 childName:(const char *)arg3 toDict:(id)arg4;
- (id)textFromNode:(XmlReaderNode_t *)arg1 childName:(const char *)arg2;
- (id)parseParamsFromNode:(XmlReaderNode_t *)arg1;
- (void)executeOperation:(id)arg1 withParams:(id)arg2;
- (void)reportXmlOperationWithRequestId:(id)arg1 succ:(BOOL)arg2 operationType:(long long)arg3 opDataDict:(id)arg4;
- (id)buildFontSizeReportData:(unsigned int)arg1;
- (void)refreshPage:(id)arg1;
- (void)changeFontSize:(id)arg1 requestId:(id)arg2;
- (void)onEnterCustomerHelperSession;
@end
