@interface BannerToastMgr : MMUserService <MMServiceProtocol, IMsgExt>
{
    NSMutableArray * m_msgDic; // +0x8
    NSMutableDictionary * m_friendRecommandMsgs; // +0x10
    NSMutableDictionary * m_dicSecurityBannerMsgs; // +0x18
    NSMutableDictionary * m_dicPersistentSecurityBannerMsgs; // +0x20
}
- (id)init;
- (id)getShowMsg;
- (void)trigBanner;
- (id)getRootDir;
- (id)pathForBannerMsg;
- (void)saveMsgs;
- (void)saveOneMsg:(id)arg1;
- (void)loadMsgs;
- (id)makeMsgByType:(int)arg1;
- (void)handleBannerMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)shouldRecommandFriendToUser:(id)arg1;
- (void)deleteRecommandFriendMsg:(id)arg1;
- (void)saveFriendRecMsgs;
- (void)loadFriendRecMsgs;
- (id)pathForFriendRec;
- (void)savePersistentSecurityBannerMsgs;
- (void)loadPersistentSecurityBannerMsgs;
- (void)filterSecurityBannerMsgs;
- (id)pathForPersistentSecurityBannerMsgs;
- (BOOL)shouldShowSecurityBannerToUser:(id)arg1;
- (id)getSecurityBannerData:(id)arg1;
- (void)deleteSecurityBannerMsg:(id)arg1;
- (void)logMainFrameBanner:(unsigned int)arg1 opType:(unsigned int)arg2;
- (void)logRecommandFriendBanner:(id)arg1 opType:(unsigned int)arg2 recCount:(unsigned int)arg3;
- (void)logUniDirectionFriendBanner:(id)arg1 opType:(unsigned int)arg2;
- (void).cxx_destruct;
@end
