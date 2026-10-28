@interface EmoticonTabRecommendMgr : MMUserService <MMServiceProtocol, IMsgExt>
- (id)init;
- (id)getTabRecommendData;
- (void)removeItemWithProductId:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)getStringWithSuperNode:(XmlReaderNode_t *)arg1 withKey:(const char *)arg2;
- (void)testXml;
@end
