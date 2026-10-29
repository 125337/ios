@interface BTRecommendCardDataParser : NSObject
+ (id)parseRecommendXmlContent:(id)arg1 recReason:(id)arg2 resortBuffer:(id)arg3;
+ (id)parseRecommendXmlContent:(id)arg1 msgSvrId:(unsigned long long)arg2 createTime:(unsigned int)arg3 recReason:(id)arg4 resortBuffer:(id)arg5;
+ (void)parseBizAccountRecommendFromXmlNode:(XmlReaderNode_t *)arg1 recCardWrapper:(id)arg2 createTime:(unsigned int)arg3;
+ (BOOL)parseBizRecommendExptFromXmlNode:(XmlReaderNode_t *)arg1 recCardWrapper:(id)arg2 createTime:(unsigned int)arg3;
+ (void)parseStyle0RecCardFromNotifyNode:(XmlReaderNode_t *)arg1 currentRecCardWrapper:(id)arg2;
+ (void)parseReaderStyleRecCardFromNotifyNode:(XmlReaderNode_t *)arg1 currentRecCardWrapper:(id)arg2;
+ (id)parseBizInfoArrFromNotifyNode:(XmlReaderNode_t *)arg1;
+ (id)parseAppMsgArrFromBizAccountNode:(XmlReaderNode_t *)arg1;
+ (void)parseFinderCardFromNotifyNode:(XmlReaderNode_t *)arg1 currentRecCardWrapper:(id)arg2;
+ (id)parseWrapMsgToRecommendSectionData:(id)arg1;
+ (id)parseRecCardWrapperToRecommendSectionData:(id)arg1;
+ (void)parseStyle0RecommendSectionDataWithRecCardWrapper:(id)arg1 currMsgData:(id)arg2;
+ (void)parseRecommendAriticleSectionDataWithRecCardWrapper:(id)arg1 currMsgData:(id)arg2;
+ (id)getAccountDataArrFromBizInfoArr:(id)arg1;
+ (id)getAppMsgArrFromPbToModel:(id)arg1;
+ (void)parseFinderRecommendSectionDataWithRecCardWrapper:(id)arg1 currMsgData:(id)arg2;
@end

