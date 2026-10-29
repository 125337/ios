@interface MMXMLParser : NSObject <NSXMLParserDelegate>
{
    BOOL _attributesAsStandaloneDic; // +0x8
    BOOL _lowercaseMode; // +0x9
    NSArray * _yymodelCustomContainerElement; // +0x10
    NSMutableArray * _dictionaryStack; // +0x18
    NSMutableString * _textInProgress; // +0x20
    NSMutableString * _xml; // +0x28
}
+ (id)dictionaryWithXMLData:(id)arg1;
+ (id)dictionaryWithXMLString:(id)arg1;
+ (id)xmlWithDic:(id)arg1;
+ (id)xmlWithDic:(id)arg1 lowercaseMode:(BOOL)arg2;
- (id)init;
- (id)dictionaryWithData:(id)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (id)xmlWithDic:(id)arg1;
- (void)dfsVisitObject:(id)arg1 key:(id)arg2;
- (BOOL)isArrayOrDic:(id)arg1;
- (BOOL)attributesAsStandaloneDic;
- (void)setAttributesAsStandaloneDic:(BOOL)arg1;
- (BOOL)lowercaseMode;
- (void)setLowercaseMode:(BOOL)arg1;
- (id)yymodelCustomContainerElement;
- (void)setYymodelCustomContainerElement:(id)arg1;
- (id)dictionaryStack;
- (void)setDictionaryStack:(id)arg1;
- (id)textInProgress;
- (void)setTextInProgress:(id)arg1;
- (id)xml;
- (void)setXml:(id)arg1;
- (void).cxx_destruct;
@end

