@interface SnsTranslateDataWrap : NSObject
{
    int iScene; // +0x8
    WCDataItem * m_dataItem; // +0x10
    WCUserComment * m_userComment; // +0x18
    NSString * m_dataItemTid; // +0x20
}
- (id)init;
- (void)dealloc;
- (id)m_dataItem;
- (void)setM_dataItem:(id)arg1;
- (id)m_userComment;
- (void)setM_userComment:(id)arg1;
- (int)iScene;
- (void)setIScene:(int)arg1;
- (id)m_dataItemTid;
- (void)setM_dataItemTid:(id)arg1;
- (void).cxx_destruct;
@end
