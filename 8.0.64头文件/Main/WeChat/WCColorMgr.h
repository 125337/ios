@interface WCColorMgr : NSObject <NSXMLParserDelegate>
{
    NSString * m_colorName; // +0x8
    MMLRUCache * m_cache; // +0x10
    os_unfair_lock_s m_lock; // +0x18
    NSMutableDictionary * _colorDic; // +0x20
    NSString * _currentType; // +0x28
}
+ (void)initialize;
+ (id)sharedInstance;
+ (BOOL)isUsingSpecialConfig;
+ (void)setUseSpecialConfig:(BOOL)arg1;
- (id)init;
- (id)colorNames;
- (void)loadColorFromXML;
- (void)loadSpecialColorFromXML;
- (void)loadNormalColorFromXML;
- (BOOL)loadColorFromXMLByPath:(id)arg1;
- (id)getColorValueForName:(id)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (BOOL)isWCColorWithName:(id)arg1;
- (id)getColor:(id)arg1;
- (id)hexStringToColorFromCache:(id)arg1;
- (id)hexStringToColor:(id)arg1;
- (id)colorDic;
- (void)setColorDic:(id)arg1;
- (id)currentType;
- (void)setCurrentType:(id)arg1;
- (void).cxx_destruct;
@end
