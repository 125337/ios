@interface ContactInitLogic : MMObject <PBMessageObserverDelegate>
{
    id <ContactInitLogicExt> m_delegate; // +0x8
    NSMutableArray * m_usernames; // +0x10
    NSMutableArray * m_failedUsernames; // +0x18
    ContactInitSeqs m_contactInitSeqs; // +0x20
    unsigned long long m_totalContactCount; // +0x28
    unsigned long long m_finishedContactCount; // +0x30
}
+ (BOOL)isContactInited;
+ (void)setContactInitedStatus:(BOOL)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)startContactInitLogic;
- (BOOL)tryGetUsernames;
- (void)handleGetUsernamesRsp:(id)arg1;
- (void)doGetContactLogic;
- (BOOL)tryGetContacts;
- (void)handleGetContactsRsp:(id)arg1;
- (void)checkIsSucceed;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end

