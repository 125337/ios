@interface MsgNewImgDataLogic : MMObject
{
    NSString * m_nsChatName; // +0x8
    unsigned int m_uiLeastLoadCount; // +0x10
    unsigned int m_firstMsgCreateTime; // +0x14
    unsigned int m_lastMsgCreateTime; // +0x18
    unsigned int m_cursorPreCreateTime; // +0x1c
    unsigned int m_cursourNextCreateTime; // +0x20
    NSMutableArray * m_arrMsgWrap; // +0x28
    NSMutableArray * m_arrPreMsg; // +0x30
    NSMutableArray * m_arrNextMsg; // +0x38
    NSMutableArray * m_arrSimpleMsg; // +0x40
    NSString * m_searchText; // +0x48
    NSMutableArray * m_searchMsgArr; // +0x50
    BOOL m_preEnd; // +0x58
    BOOL m_nextEnd; // +0x59
    BOOL _m_bLoading; // +0x5a
    BOOL _m_bNeedFullMessage; // +0x5b
    BOOL _m_bDestroy; // +0x5c
    NSString * _m_enterpriseBrandUserName; // +0x60
    id <MsgNewImgDataLogicDelegate> _m_delegate; // +0x68
}
- (id)initWithPreLoadCount:(unsigned int)arg1 ChatName:(id)arg2;
- (id)getSearchText;
- (void)doSearch:(id)arg1;
- (BOOL)isMatchMsg:(id)arg1 SearchText:(id)arg2;
- (BOOL)matchContent:(id)arg1 withQuery:(id)arg2;
- (void)setMinSerachMsgCreateTime:(double)arg1;
- (void)resetWithCurrentMsg:(id)arg1;
- (void)updateMsgArray;
- (id)getSimpleMsgFrom:(id)arg1;
- (id)getMsgArray;
- (BOOL)isMsgMatch:(id)arg1;
- (unsigned int)getFirstDateOfASection:(unsigned int)arg1 interval:(double *)arg2;
- (id)asyncLoadImg:(BOOL)arg1;
- (void)loadPre:(BOOL)arg1 loadNext:(BOOL)arg2;
- (id)getSimpleMsgArray;
- (void)removeMsgByLocalID:(unsigned int)arg1;
- (void)removeSearchMsgByLocalID:(unsigned int)arg1;
- (unsigned int)getIndexForSimpleMsg:(id)arg1;
- (id)getNextCurMsg:(id)arg1;
- (BOOL)m_preEnd;
- (void)setM_preEnd:(BOOL)arg1;
- (BOOL)m_nextEnd;
- (void)setM_nextEnd:(BOOL)arg1;
- (id)m_enterpriseBrandUserName;
- (void)setM_enterpriseBrandUserName:(id)arg1;
- (BOOL)m_bLoading;
- (void)setM_bLoading:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bNeedFullMessage;
- (void)setM_bNeedFullMessage:(BOOL)arg1;
- (BOOL)m_bDestroy;
- (void)setM_bDestroy:(BOOL)arg1;
- (void).cxx_destruct;
@end

