@interface MuteBrandMgr : MMUserService <IUpdateProfileMgrExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    NSArray * _openBrandList; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)init;
- (void)showGuideView:(id)arg1;
- (BOOL)useBizMuteFlag;
- (void)openUseBizMuteFlagWith:(id)arg1;
- (void)updateUnreadCount;
- (void)updateUnreadCount:(BOOL)arg1;
- (void)requestUseBizMuteFlag;
- (void)onFailOpenUseBizMuteFlag;
- (void)onProfileChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
