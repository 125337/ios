@interface LbsContactInfoList : NSObject
{
    NSMutableArray * m_LbsContactList; // +0x8
    int m_iRet; // +0x10
    BaseResponseErrMsg * m_ErrorMsg; // +0x18
    long long m_iState; // +0x20
    long long m_iFlushTime; // +0x28
    BOOL m_iIsShowRoom; // +0x30
    long long m_iRoomMemberCount; // +0x38
}
- (id)init;
- (id)keyPaths;
- (id)description;
- (void)addToLbsContactList:(id)arg1;
- (void)removeFromLbsContactList:(id)arg1;
- (unsigned long long)countOfLbsContactList;
- (void)getLbsContactList:(id *)arg1 range:(_NSRange)arg2;
- (id)objectInLbsContactListAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inLbsContactListAtIndex:(unsigned long long)arg2;
- (void)insertLbsContactList:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromLbsContactListAtIndex:(unsigned long long)arg1;
- (void)removeLbsContactListAtIndexes:(id)arg1;
- (void)replaceObjectInLbsContactListAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceLbsContactListAtIndexes:(id)arg1 withLbsContactList:(id)arg2;
- (id)lbsContactList;
- (void)setLbsContactList:(id)arg1;
- (int)iRet;
- (void)setIRet:(int)arg1;
- (id)m_ErrorMsg;
- (void)setM_ErrorMsg:(id)arg1;
- (long long)m_iState;
- (void)setM_iState:(long long)arg1;
- (long long)m_iFlushTime;
- (void)setM_iFlushTime:(long long)arg1;
- (BOOL)m_iIsShowRoom;
- (void)setM_iIsShowRoom:(BOOL)arg1;
- (long long)m_iRoomMemberCount;
- (void)setM_iRoomMemberCount:(long long)arg1;
- (void).cxx_destruct;
@end

