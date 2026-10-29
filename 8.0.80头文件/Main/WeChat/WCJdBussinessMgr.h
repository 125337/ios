@interface WCJdBussinessMgr : MMUserService <MMServiceProtocol, IMsgExt>
{
    BOOL hadLoadEntranceItem; // +0x8
    NSMutableArray * aryHadHandleRemindItemList; // +0x10
    WCJdRemindItem * _currEntranceTipItem; // +0x18
}
- (void)onServiceInit;
- (void)addActivityIdInHandleList:(id)arg1;
- (BOOL)hadInHandleList:(id)arg1;
- (BOOL)isNotTimeWithStart:(unsigned int)arg1 Expire:(unsigned int)arg2;
- (void)reloadfindEntry;
- (void)checkFindEntry;
- (id)currEntranceTipItem;
- (id)getAddSceneUrl:(id)arg1 scene:(long long)arg2;
- (id)GetJDStoreCellItem;
- (BOOL)hasJDStoreCell;
- (long long)getCurrentScene;
- (id)getJDCellJumpURL;
- (id)getJDCellJumpTarget;
- (long long)getJDCellJumpType;
- (id)getJDCellJumpWeappPath;
- (long long)getJDCellJumpWeappVersion;
- (BOOL)shouldUseEntranceTipItem;
- (BOOL)needShowRedDotInFindTab;
- (BOOL)needShowTipInJDCell;
- (id)getJDCellTipItem;
- (void)setHadEnterJDCell;
- (void)gotoWebViewController:(id)arg1 scene:(long long)arg2 needPresent:(BOOL)arg3;
- (id)getJDBussinessCachePath;
- (void)saveEntranceTipItem;
- (void)tryLoadEntranceTipItem;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)arg1;
- (void)handleInactiveAPNSPushWithUsrInfo:(id)arg1;
- (void)handleAPNSPushWithUsrInfo:(id)arg1;
- (void)handleLocalPushWithUsrInfo:(id)arg1;
- (void)handleRecvBewXmlJdEtranceTip:(id)arg1;
- (void)handleRecvNewXmlNotication:(id)arg1;
- (void)onAlertViewConfirm;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)aryHadHandleRemindItemList;
- (void)setAryHadHandleRemindItemList:(id)arg1;
- (BOOL)hadLoadEntranceItem;
- (void)setHadLoadEntranceItem:(BOOL)arg1;
- (void)setCurrEntranceTipItem:(id)arg1;
- (void).cxx_destruct;
@end
