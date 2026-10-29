@interface MsgImgDataLogic : NSObject
{
    unsigned int m_uiPreID; // +0x8
    unsigned int m_uiNextID; // +0xc
    unsigned int m_uiPreCreateTime; // +0x10
    unsigned int m_uiNextCreateTime; // +0x14
    NSMutableArray * m_arrPreMsg; // +0x18
    NSMutableArray * m_arrNextMsg; // +0x20
    NSMutableArray * m_arrMsgWrap; // +0x28
    NSMutableArray * m_arrSimpleMsg; // +0x30
    NSString * m_nsChatName; // +0x38
    unsigned int m_uiPreLoadCount; // +0x40
    unsigned int m_uiPreReadCount; // +0x44
    BOOL _m_bLoading; // +0x48
    BOOL _m_bPreEnd; // +0x49
    BOOL _m_bNextEnd; // +0x4a
    BOOL _m_bNeedFullMessage; // +0x4b
    NSString * _m_enterpriseBrandUserName; // +0x50
    id <MsgImgDataLogicDelegate> _m_delegate; // +0x58
}
- (id)initWithPreLoadCount:(unsigned int)arg1 PreReadCount:(unsigned int)arg2 ChatName:(id)arg3;
- (id)getMsgArray;
- (id)getSimpleMsgFrom:(id)arg1;
- (id)getSimpleMsgArray;
- (void)removeMsgByLocalID:(unsigned int)arg1;
- (id)getNextCurMsg:(id)arg1;
- (void)resetWithCurrentMsg:(id)arg1;
- (unsigned int)getIndexForSimpleMsg:(id)arg1;
- (unsigned int)getIndexFor:(id)arg1;
- (id)getMsgFor:(unsigned int)arg1;
- (id)getMsgByLocalID:(unsigned int)arg1;
- (void)updateMsgArray;
- (BOOL)isMsgMatch:(id)arg1;
- (id)asyncLoadSomeImg:(BOOL)arg1;
- (void)preLoad:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (BOOL)m_bLoading;
- (void)setM_bLoading:(BOOL)arg1;
- (BOOL)m_bPreEnd;
- (void)setM_bPreEnd:(BOOL)arg1;
- (BOOL)m_bNextEnd;
- (void)setM_bNextEnd:(BOOL)arg1;
- (id)m_enterpriseBrandUserName;
- (void)setM_enterpriseBrandUserName:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bNeedFullMessage;
- (void)setM_bNeedFullMessage:(BOOL)arg1;
- (void).cxx_destruct;
@end

