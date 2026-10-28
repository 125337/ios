@interface MultiTalkMoreMemberMgr : MMUserService <IExptServiceExt, MMServiceProtocol>
{
    unsigned long long _maxMultiTalkMemCount; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)checkAndUpdateData;
- (void)clearData;
- (unsigned long long)maxMultiTalkMemberCount;
- (void)onExptItemListChange;
- (unsigned long long)maxMultiTalkMemCount;
- (void)setMaxMultiTalkMemCount:(unsigned long long)arg1;
@end
