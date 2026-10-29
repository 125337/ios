@interface WCColorMgr : NSObject <NSXMLParserDelegate>
{
    NSString * m_colorName; // +0x8
    NSMutableDictionary * _colorDic; // +0x10
}
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (id)colorNames;
- (void)loadColorFromXML;
- (void)loadColorFromXMLByPath:(id)arg1;
- (id)getColorValueForName:(id)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (BOOL)isWCColorWithName:(id)arg1;
- (id)getColor:(id)arg1;
- (id)hexStringToColor:(id)arg1;
- (id)colorDic;
- (void)setColorDic:(id)arg1;
- (void).cxx_destruct;
@end

