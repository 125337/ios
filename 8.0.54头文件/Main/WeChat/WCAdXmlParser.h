@interface WCAdXmlParser : NSObject
+ (BOOL)SetAdvertiseInfo:(id)arg1 ByAdInfo:(id)arg2;
+ (BOOL)SetAdvertiseInfo:(id)arg1 ByAdInfoXml:(XmlReaderNode_t *)arg2;
+ (BOOL)setAdCanvasExtXml:(id)arg1 ByXmlNode:(XmlReaderNode_t *)arg2;
+ (BOOL)setSKAdItems:(id)arg1 byXmlNode:(XmlReaderNode_t *)arg2;
+ (BOOL)SetAdvertiseXml:(id)arg1 ByAdXml:(id)arg2;
+ (void)setAdCanvasInfo:(id)arg1 byXmlNode:(XmlReaderNode_t *)arg2;
+ (void)setAdCanvasPage:(id)arg1 byXmlNode:(XmlReaderNode_t *)arg2 withSizeType:(long long)arg3 basicWidth:(int)arg4 basicRootFontSize:(int)arg5 widthRoundingType:(long long)arg6 heightRoundingType:(long long)arg7;
+ (void)setCanvasComponentItem:(id)arg1 byXmlNode:(XmlReaderNode_t *)arg2 withSizeType:(long long)arg3 basicWidth:(int)arg4 basicRootFontSize:(int)arg5 widthRoundingType:(long long)arg6 heightRoundingType:(long long)arg7;
+ (void)parseFloatActionBaseInfo:(id)arg1 canvasComponentItem:(id)arg2 fromXmlNode:(XmlReaderNode_t *)arg3 withSizeType:(long long)arg4 basicWidth:(int)arg5 basicRootFontSize:(int)arg6 widthRoundingType:(long long)arg7 heightRoundingType:(long long)arg8;
+ (id)videoFloatBarInfoFromXmlNode:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
+ (id)clickActionInfoFromXmlNode:(XmlReaderNode_t *)arg1 childName:(const char *)arg2;
+ (id)getClickActionInfoFromXmlNode:(XmlReaderNode_t *)arg1;
+ (id)getLiveCheerIconInfoListFromXmlNode:(XmlReaderNode_t *)arg1;
+ (BOOL)ExtractRecommendMetaInfo:(id)arg1 ByRecXml:(id)arg2;
+ (BOOL)ExtractRecommendAdInfo:(id)arg1 ByAdMsgXml:(id)arg2;
+ (id)adXmlCanvasNodeFilterArray;
+ (id)filterUselessCanvasNodeForType:(id)arg1 fromOriginAdXml:(id)arg2;
+ (id)filterUselessXmlNodesForForwardWithAdXml:(id)arg1;
+ (id)replaceXMLNode:(id)arg1 toNode:(id)arg2 forString:(id)arg3;
+ (int)parseBasicWidthForName:(const char *)arg1 parent:(XmlReaderNode_t *)arg2;
+ (int)parseBasicFontSizeForName:(const char *)arg1 parent:(XmlReaderNode_t *)arg2;
+ (int)parseNonZeroIntValueForName:(const char *)arg1 parent:(XmlReaderNode_t *)arg2 defaultValue:(int)arg3;
+ (double)parseRoundingSizeForName:(const char *)arg1 parent:(XmlReaderNode_t *)arg2 basicWidth:(int)arg3 basicFontSize:(int)arg4;
+ (double)parseFloatSizeForName:(const char *)arg1 parent:(XmlReaderNode_t *)arg2 basicWidth:(int)arg3 basicFontSize:(int)arg4;
+ (id)fetchValueFromXml:(id)arg1 inSearchPath:(id)arg2;
@end

