@interface BrandAffDataConverter : NSObject
+ (id)convertAffMsgInfoDataToMsgWrap:(id)arg1;
+ (id)convertAffMsgInfoToMsgWrap:(BizMsgInfo)arg1;
+ (id)convertAffMsgInfoDataListToMsgWrapList:(id)arg1;
+ (BizMsgInfo)convertMsgWrapToAffMsgInfo:(id)arg1 isNewMsg:(BOOL)arg2 isRedDotMsg:(BOOL)arg3;
+ (BizMsgResortV2Context_SessionBox)convertSessionInfoToSessionBox:(id)arg1;
+ (id)convertTLResortStartInfo:(id)arg1;
+ (id)convertTLResortEndInfo:(id)arg1;
+ (BizMsgItem)convertReaderWrapToMsgItem:(id)arg1;
@end

