@interface BTCanvasItemDataParser : NSObject
+ (id)canvasIdWithBizType:(unsigned int)arg1 bizId:(id)arg2;
+ (id)parseDataFromMsg:(id)arg1;
+ (id)parseAdDataFromJsonStr:(id)arg1;
+ (id)parseRecommendDataFromMsg:(id)arg1;
+ (id)parseRecCardWrapper:(id)arg1;
+ (id)parseDataFromRecoFlowMsg:(id)arg1;
+ (id)getCanvasIdFromRecCardWrapper:(id)arg1;
@end
