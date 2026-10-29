@interface BSAffDataConverter : NSObject
+ (id)convertAffMsgInfoDataToMsgWrap:(id)arg1;
+ (BizMainSessionBoxRedDotInfo)convertBoxRedDotInfoDataToBizRedDotInfo:(id)arg1;
+ (id)convertAffMainSessionBoxInfo2BESessionBoxInfo:(BizMainSessionBoxRedDotInfo)arg1;
+ (id)convertAffMsgInfoToMsgWrap:(BizMsgInfo)arg1;
+ (id)convertAffMsgInfoDataListToMsgWrapList:(id)arg1;
+ (BizMsgInfo)convertMsgWrapToAffMsgInfo:(id)arg1 isNewMsg:(BOOL)arg2 isRedDotMsg:(BOOL)arg3;
+ (BizMsgItem)convertReaderWrapToMsgItem:(id)arg1;
+ (BizLiveXmlObject)covertFinderLiveData:(id)arg1;
@end

