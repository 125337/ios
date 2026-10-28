@interface DeviceRankSnsMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSArray * m_focusArray; // +0x8
}
- (void)onServiceInit;
- (void)likeFriendRank:(id)arg1 FriendUsernames:(id)arg2 brandUserName:(id)arg3 optype:(unsigned int)arg4;
- (void)getUserRankListCount:(id)arg1 brandUserName:(id)arg2;
- (id)loadFocusArray;
- (void)saveFoucsArray:(id)arg1;
- (void)tryLoadFocusArray;
- (id)getFocusArrayFilePath;
- (void)handleRankAddLikeResponse:(id)arg1;
- (void)callExtensionOnReceivedCGIResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
