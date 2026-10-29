@interface XMLReader : NSObject <NSXMLParserDelegate>
{
    NSMutableArray * _dictionaryStack; // +0x8
    NSMutableString * _textInProgress; // +0x10
    NSError * _errorPointer; // +0x18
}
+ (id)dictionaryForXMLData:(id)arg1 error:(id *)arg2;
+ (id)dictionaryForXMLString:(id)arg1 error:(id *)arg2;
+ (id)dictionaryForXMLData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dictionaryForXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithError:(id *)arg1;
- (id)objectWithData:(id)arg1 options:(unsigned long long)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (id)dictionaryStack;
- (void)setDictionaryStack:(id)arg1;
- (id)textInProgress;
- (void)setTextInProgress:(id)arg1;
- (id)errorPointer;
- (void)setErrorPointer:(id)arg1;
- (void).cxx_destruct;
@end

