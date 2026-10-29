@interface EmoticonTabRecommendMgr : MMUserService <IExptServiceExt, MMServiceProtocol, IMsgExt>
{
    EmoticonMsgDeleteReport * _emoticonMsgDeleteReport; // +0x8
    EmoticonRecommendTabConfig * _emoticonRecommendTabConfig; // +0x10
    EmoticonRecommendSectionConfig * _emoticonRecommendSectionConfig; // +0x18
}
- (id)init;
- (id)getTabRecommendData;
- (void)removeItemWithProductId:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (id)getStringWithSuperNode:(XmlReaderNode_t *)arg1 withKey:(const char *)arg2;
- (void)parseRecommendTabConfig:(id)arg1;
- (void)parseRecommendSectionConfig:(id)arg1;
- (void)loadRecommendSectionConfig;
- (BOOL)enableEmoticonRecommendSection;
- (BOOL)enableEmoticonRecommendSectionLocalModel;
- (BOOL)enableEmoticonRecommendTab;
- (BOOL)enableEmoticonRecommendLocalModel;
- (BOOL)enableEmoticonRecommendPlayGif;
- (BOOL)enableEmoticonCustomPlayGif;
- (BOOL)enableEmoticonParallelDownload;
- (void)onExptItemListChange;
- (void)testXml;
- (id)emoticonMsgDeleteReport;
- (void)setEmoticonMsgDeleteReport:(id)arg1;
- (id)emoticonRecommendTabConfig;
- (void)setEmoticonRecommendTabConfig:(id)arg1;
- (id)emoticonRecommendSectionConfig;
- (void)setEmoticonRecommendSectionConfig:(id)arg1;
- (void).cxx_destruct;
@end
