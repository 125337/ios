@interface WADynamicPageInfo : MMObject
{
    BOOL _shouldUseDynamicPage; // +0x8
    NSString * _cacheKey; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)shouldUseDynamicPage;
- (void)setShouldUseDynamicPage:(BOOL)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (void).cxx_destruct;
@end

