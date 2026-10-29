@interface _TtC10VioletText13FlatXMLParser : NSObject <NSXMLParserDelegate>
{
     error; // +0x8
     components; // +0x20
     parsingNode; // +0x28
     didParsedRoot; // +0x30
     attributesResolver; // +0x38
}
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end
