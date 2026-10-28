@interface RTEHTMLParser : NSObject
{
    _xmlSAXHandler m_handler; // +0x8
    NSData * m_data; // +0x108
    NSMutableString * m_accumulateBuffer; // +0x110
    BOOL m_isAborting; // +0x118
    id <RTEHTMLParserDelegate> _delegate; // +0x120
    id <RTEHTMLParserDataSource> _dataSource; // +0x128
    NSError * _error; // +0x130
    unsigned long long _encoding; // +0x138
    _xmlParserCtxt * _parserCtx; // +0x140
}
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (void)dealloc;
- (void)_resetAccumulateBufferAndReportCharacters;
- (void)_accumulateCharacters:(const char *)arg1 length:(int)arg2;
- (BOOL)parse;
- (void)abortParsing;
- (void)setDelegate:(id)arg1;
- (unsigned long long)currentParseLocation;
- (const char *)remainContent;
- (void)_brigeStartDocument;
- (void)_bridgeEndDocument;
- (void)_bridgeFoundCharacters;
- (void)_bridgeStartElement;
- (void)_bridgeEndElement;
- (void)_bridgeFoundComment;
- (void)_bridgeErrorOccured;
- (void)_bridgeFoundCDATA;
- (void)_bridgeFoundProcessingInstruction;
- (BOOL)_lookupCustomElement:(const char *)arg1;
- (id)delegate;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (unsigned long long)encoding;
- (void)setEncoding:(unsigned long long)arg1;
- (_xmlParserCtxt *)parserCtx;
- (void)setParserCtx:(_xmlParserCtxt *)arg1;
- (void).cxx_destruct;
@end
