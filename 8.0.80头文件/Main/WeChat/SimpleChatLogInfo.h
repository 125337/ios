@interface SimpleChatLogInfo : SimpleMsgInfo
{
    shared_ptr<ChatLogDataItem> m_dataItem; // +0x28
    vector<std::shared_ptr<ChatLogDataItem>, std::allocator<std::shared_ptr<ChatLogDataItem>>> m_multiDataItem; // +0x38
    FavoritesItemDataField * _m_dataField; // +0x50
    CMessageWrap * _m_dataMsg; // +0x58
}
- (void)setDataItem:(void *)arg1;
- (void *)dataItem;
- (void)insertMultiDataItem:(void *)arg1;
- (void *)multiDataItems;
- (id)p_getInnerDataField:(id)arg1 innerIndexArray:(id)arg2;
- (id)m_dataMsg;
- (unsigned int)getDataPreviewType;
- (id)m_dataField;
- (BOOL)isAggregationMsg;
- (id)getAppDataPath;
- (id)getTitle;
- (id)getIconName;
- (id)getDataBackgroundColor;
- (void)setM_dataField:(id)arg1;
- (void)setM_dataMsg:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
