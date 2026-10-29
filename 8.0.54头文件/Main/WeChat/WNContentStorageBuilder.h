@interface WNContentStorageBuilder : MMObject <RTEHTMLParserDelegate, RTEHTMLParserDataSource>
{
    NSData * m_htmlData; // +0x8
    NSArray * m_favDataList; // +0x10
    WNContentStorage * m_tmpStorage; // +0x18
    WNHTMLTagNode * m_rootTag; // +0x20
    WNHTMLTagNode * m_currentTag; // +0x28
    RTEHTMLParser * m_parser; // +0x30
    BOOL m_bInList; // +0x38
    BOOL m_bLastInList; // +0x39
    const char * m_remainContent; // +0x40
    id <WNContentStorageBuilderDelegate> _delegate; // +0x48
}
- (id)initWithHTMLData:(id)arg1 favDataList:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)startGenerateContentStorage;
- (void)stopGenerateContentStorage;
- (id)getRemianContent;
- (BOOL)bInList;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (id)parserCustomElementLoopupTable:(id)arg1;
- (void)applyAttributes:(id)arg1 toTag:(id)arg2;
- (void)applyCSSStyle:(id)arg1 toTag:(id)arg2;
- (BOOL)isBlockTag:(id)arg1;
- (void)tryOutputContent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

