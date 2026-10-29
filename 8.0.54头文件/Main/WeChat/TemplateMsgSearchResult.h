@interface TemplateMsgSearchResult : NSObject
{
    BOOL _m_msgCellViewSizeValid; // +0x8
    unsigned long long _m_msgSearchResultType; // +0x10
    FTSMsgItem * _m_msgItem; // +0x18
    NSString * _m_nsSearchText; // +0x20
    ReaderMessageViewModel * _m_msgViewModel; // +0x28
    UIView * _m_msgCellView; // +0x30
    CContact * _contact; // +0x38
    CGSize _m_msgCellViewSize; // +0x40
}
- (unsigned long long)m_msgSearchResultType;
- (void)setM_msgSearchResultType:(unsigned long long)arg1;
- (id)m_msgItem;
- (void)setM_msgItem:(id)arg1;
- (id)m_nsSearchText;
- (void)setM_nsSearchText:(id)arg1;
- (id)m_msgViewModel;
- (void)setM_msgViewModel:(id)arg1;
- (id)m_msgCellView;
- (void)setM_msgCellView:(id)arg1;
- (CGSize)m_msgCellViewSize;
- (void)setM_msgCellViewSize:(CGSize)arg1;
- (BOOL)m_msgCellViewSizeValid;
- (void)setM_msgCellViewSizeValid:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

