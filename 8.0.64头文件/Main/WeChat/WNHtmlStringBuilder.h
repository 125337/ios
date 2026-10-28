@interface WNHtmlStringBuilder : MMObject
{
    FavoritesItem * m_favItem; // +0x8
    WNContentStorage * m_content; // +0x10
    NSMutableArray * m_fontAttributes; // +0x18
    BOOL m_bInList; // +0x20
    NSString * m_remainHTML; // +0x28
    BOOL m_bStop; // +0x30
}
- (id)initWithWNItem:(id)arg1 withContent:(id)arg2 withRemainHTML:(id)arg3 bInList:(BOOL)arg4;
- (void)startBuildHtmlString;
- (void)asyncBuildHtmlString;
- (id)tryBuildListStartTagWithPreListAttribute:(id)arg1 withCurrentListAttribute:(id)arg2;
- (id)tryBuildListEndTagAtLocation:(unsigned long long)arg1 WithPreListAttribute:(id)arg2 withCurrentListAttribute:(id)arg3;
- (id)buildSpanElementWithRange:(_NSRange)arg1 plainText:(id)arg2;
- (void)stopBuildHtmlString;
- (void).cxx_destruct;
@end
