@interface BSAffDataConverter : NSObject
+ (id)convertAffMsgInfoDataToMsgWrap:(id)arg1;
+ (BizMainSessionBoxRedDotInfo)convertBoxRedDotInfoDataToBizRedDotInfo:(id)arg1;
+ (id)convertAffMainSessionBoxInfo2BESessionBoxInfo:(BizMainSessionBoxRedDotInfo)arg1;
+ (void)reportEcsBrandTimelineCellUpWithIsNoticeMsg:(BOOL)arg1 msgId:(unsigned long long)arg2 upBoxMsgType:(unsigned int)arg3;
+ (id)convertAffRecFeedsInfoToMsgWrap:(BizMainSessionBoxRedDotInfo)arg1;
+ (id)convertAffMsgInfoToMsgWrap:(BizMsgInfo)arg1;
+ (id)convertAffMsgInfoDataListToMsgWrapList:(id)arg1;
+ (BizMsgInfo)convertMsgWrapToAffMsgInfo:(id)arg1 isNewMsg:(BOOL)arg2 isRedDotMsg:(BOOL)arg3;
+ (BizMsgItem)convertReaderWrapToMsgItem:(id)arg1;
+ (BizLiveXmlObject)covertFinderLiveData:(id)arg1;
+ (BizMsgReSortV2ReqContext_SessionBox)convertSessionInfoToSessionBox:(id)arg1;
@end
