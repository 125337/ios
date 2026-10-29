@interface MMImgDataLogic_Message : MMImgDataLogic <IMsgExt, IMsgRevokeExt>
{
    unsigned int m_uiPreID; // +0x8
    unsigned int m_uiNextID; // +0xc
    unsigned int m_uiPreCreateTime; // +0x10
    unsigned int m_uiNextCreateTime; // +0x14
    NSMutableArray * m_arrPreMsg; // +0x18
    NSMutableArray * m_arrNextMsg; // +0x20
    BOOL m_bLoading; // +0x28
    BOOL m_bPreEnd; // +0x29
    BOOL m_bNextEnd; // +0x2a
    unsigned int m_uiPreLoadCount; // +0x2c
    unsigned int m_uiPreReadCount; // +0x30
    BOOL _isShowSingleMsg; // +0x34
    NSString * m_nsChatName; // +0x38
    NSString * m_enterpriseBrandUserName; // +0x40
    NSMutableArray * m_arrMsgWrap; // +0x48
    unsigned long long _filterMessageType; // +0x50
    id /* block */ _onImgDataMatch; // +0x58
    NSMutableSet * _revokedMsgIDs; // +0x60
}
- (id)initWithMsgWrap:(id)arg1;
- (void)preloadIfNeed:(id)arg1 complete:(id /* block */)arg2;
- (id)asyncLoadSomeImg:(BOOL)arg1;
- (BOOL)isMsgMatch:(id)arg1;
- (void)updatePreloadData;
- (void)removeMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (id)m_enterpriseBrandUserName;
- (void)setM_enterpriseBrandUserName:(id)arg1;
- (id)m_arrMsgWrap;
- (void)setM_arrMsgWrap:(id)arg1;
- (BOOL)isShowSingleMsg;
- (void)setIsShowSingleMsg:(BOOL)arg1;
- (unsigned long long)filterMessageType;
- (void)setFilterMessageType:(unsigned long long)arg1;
- (id /* block */)onImgDataMatch;
- (void)setOnImgDataMatch:(id /* block */)arg1;
- (id)revokedMsgIDs;
- (void)setRevokedMsgIDs:(id)arg1;
- (void).cxx_destruct;
@end
