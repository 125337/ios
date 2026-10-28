@interface EmoticonRecommendMgr : MMUserService <EmoticonDescMgrExt, MMServiceProtocol, IMsgExt, EmoticonStoreItemExt>
{
    EmoticonServerTip * m_serverTip; // +0x8
    NSString * m_lastEmotionStoreNodePid; // +0x10
    NSString * m_lastEmotionStoreContent; // +0x18
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)hasPersonalNew;
- (BOOL)clearPersonalNew;
- (BOOL)hasDesignerEmojiEntranceNew;
- (void)clearDesignerEmojiEntranceNew;
- (BOOL)HasNew;
- (BOOL)isFreeTip;
- (id)tipString;
- (id)iconUrl;
- (BOOL)isTipsExpired;
- (void)resetLastUpdateTime;
- (BOOL)lastUpdateTimeNoneZero;
- (BOOL)ClearNew;
- (BOOL)hasBoardViewPlusNew;
- (void)setEmoticonStoreTipsFromNode:(XmlReaderNode_t *)arg1;
- (void)onServerTipsUpdated;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(id)arg3;
- (id)m_serverTip;
- (void)setM_serverTip:(id)arg1;
- (void).cxx_destruct;
@end
