@interface WCFinderShareXMLExtInfo : NSObject
{
    BOOL _hasSet; // +0x8
    BOOL _hasInput; // +0x9
    NSString * _tabContextId; // +0x10
    NSString * _contextId; // +0x18
    unsigned long long _shareSrcScene; // +0x20
}
- (id)reportString;
- (void)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)hasSet;
- (void)setHasSet:(BOOL)arg1;
- (BOOL)hasInput;
- (void)setHasInput:(BOOL)arg1;
- (id)tabContextId;
- (void)setTabContextId:(id)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (unsigned long long)shareSrcScene;
- (void)setShareSrcScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
