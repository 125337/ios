@interface TPXMLDocument : NSObject
{
    _xmlDoc * xmlDoc_; // +0x8
}
- (id)initWithXMLString:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithRootElement:(id)arg1;
- (void)addStringsCacheToDoc;
- (id)description;
- (void)dealloc;
- (id)rootElement;
- (id)XMLData;
- (void)setVersion:(id)arg1;
- (void)setCharacterEncoding:(id)arg1;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (id)nodesForXPath:(id)arg1 namespaces:(id)arg2 error:(id *)arg3;
@end

