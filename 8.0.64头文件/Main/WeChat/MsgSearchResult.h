@interface MsgSearchResult : NSObject
{
    unsigned int m_msgSearchResultType; // +0x8
    NSString * m_nsSearchText; // +0x10
    FTSMsgItem * m_msgItem; // +0x18
    FTSIntelligentMsgItem * m_intelligentMsgItem; // +0x20
}
- (unsigned int)m_msgSearchResultType;
- (void)setM_msgSearchResultType:(unsigned int)arg1;
- (id)m_nsSearchText;
- (void)setM_nsSearchText:(id)arg1;
- (id)m_msgItem;
- (void)setM_msgItem:(id)arg1;
- (id)m_intelligentMsgItem;
- (void)setM_intelligentMsgItem:(id)arg1;
- (void).cxx_destruct;
@end
