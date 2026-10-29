@interface MainFrameLogicController : MMObject <INewSyncExt, IMainSessionMgrExt, IBypSyncExt, IGroupMgrExt, INetworkStatusMgrExt, IMMNewSessionMgrExt, IWXTalkPresentExt, IContactMgrExt>
{
    id <MainFrameLogicControllerDelegate> m_delegate; // +0x8
    BOOL m_bPlayNewMsgDuringOneSync; // +0x10
    BOOL m_bHasPlayDuringOneByPassSync; // +0x11
    NSMutableArray * m_arrFilteredSession; // +0x18
    NSString * m_nsLastSearchText; // +0x20
    MMTimer * m_updateTimeLabelTimer; // +0x28
    BOOL m_bReadyToLoadData; // +0x30
    NSMutableDictionary * m_dicPlayNewMsgNotify; // +0x38
    unsigned int m_shownCellMaxIndex; // +0x40
    BOOL m_bIsPreCreatingCellData; // +0x44
    long long m_lastPreCreateCellIndex; // +0x48
    WAContactGetter * m_contactGetter; // +0x50
    BOOL _hasLoadSessionData; // +0x58
    NSMutableArray * m_frontSessionArray; // +0x60
    NSString * m_delayFoldSessionForGuide; // +0x68
    MainFrameFoldReporter * _foldReporter; // +0x70
}
+ (BOOL)hasMainFrameCache;
+ (id)getLastFrontSessionArray;
+ (id)getPathOfLastFrontUserName;
+ (id)getFakeCellDataFromCellData:(id)arg1;
- (void)startupPreCreateForCellData;
- (void)startUpdateTimeLabelTimer;
- (void)stopUpdateTimeLabelTimer;
- (void)onUpdateTimeLabelTimer:(id)arg1;
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;
- (BOOL)isMsgUnread:(id)arg1 NotifyFlag:(long long)arg2;
- (BOOL)isPlayingOrRecording;
- (void)playNewMsgNotify:(id)arg1 NotifyFlag:(long long)arg2;
- (void)callUpdateSession:(id)arg1;
- (void)callUpdateSessionByName:(id)arg1;
- (void)registerExt;
- (void)unRegisterExt;
- (void)addNotificationCenterObservers;
- (void)removeNotificationCenterObservers;
- (void)fixSelfHeadImage;
- (id)buildFrontSessionSnapshotForSaving;
- (void)syncSaveFrontUserName;
- (void)asyncSaveFrontUserName;
- (id)init;
- (void)dealloc;
- (id)getFakeCellData:(unsigned int)arg1;
- (long long)getFakeCellCount;
- (id)getCellDataAtIndexPath:(id)arg1;
- (id)getCellDataForFilterSession:(unsigned int)arg1;
- (id)updateCellData:(id)arg1;
- (void)cleanupCellDataCache;
- (void)cleanupPreLoadCacheIfNeed:(unsigned int)arg1;
- (id)getCellDataByUsrName:(id)arg1;
- (void)updateTimeForAllCellDatas;
- (void)willDisplayCell:(id)arg1 isReloadingData:(BOOL)arg2;
- (void)didEndDisplayCell:(id)arg1 isReloadingData:(BOOL)arg2;
- (void)onDidSelectCellAt:(id)arg1;
- (void)onViewDidAppear;
- (void)onPageAppearWithVisibleCellsIndexPath:(id)arg1 reason:(long long)arg2;
- (void)onPageDisappearWithVisibleCellsIndexPath:(id)arg1 reason:(long long)arg2;
- (void)onTableViewReloadDataWithVisibleCellsIndexPath:(id)arg1;
- (void)onPageDidSelectTab;
- (void)setReadyToLoadData;
- (unsigned int)getSessionCount;
- (long long)getSessionCountForSection:(long long)arg1;
- (unsigned int)getVisibleSessionCount;
- (id)getSessionInfoAtIndexPath:(id)arg1;
- (id)getSessionBaseInfoAtIndexPath:(id)arg1;
- (unsigned int)getTotalUnreadCount;
- (unsigned int)getUnreadNotifyChatSessionCount;
- (unsigned int)getTotalUnreadCountForAppIcon;
- (unsigned int)getTotalUnreadCountInRedDot;
- (void)deleteSessionByUsername:(id)arg1;
- (void)hideSession:(id)arg1;
- (BOOL)isHasActiveUsr;
- (unsigned long long)getFilteredSessionCount;
- (id)getFilteredSessionInfo:(unsigned int)arg1;
- (id)getFirstHasUnreadMsgSessionIndexFrom:(id)arg1;
- (id)findFirstIndexPathFrom:(id)arg1 filter:(id /* block */)arg2;
- (id)getSessionInfoByContact:(id)arg1;
- (unsigned int)getCurNetworkStatusType;
- (void)clearResource;
- (void)onMainSessionReload;
- (void)onMainSessionDelayDeleteCancel:(id)arg1;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(BOOL)arg2;
- (void)onSessionRebuildBegin;
- (void)onSessionRebuildEnd;
- (void)onNeedRebuild;
- (void)onSessionChanged:(id)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)onWillDeleteSession:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)reportBizSessionDelete:(id)arg1;
- (void)onNewSyncBegin;
- (void)onBypSyncBegin;
- (void)OnChangeGroup:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)pluginsChanged:(id)arg1;
- (long long)indexOfSessionUserName:(id)arg1 inSection:(long long)arg2;
- (id)indexPathOfSessionUserName:(id)arg1;
- (long long)indexInAllVisibleSessions:(id)arg1;
- (void)deleteSessionInfoAndReload:(id)arg1;
- (void)setJumpUnreadSessionTime:(unsigned long long)arg1;
- (BOOL)isTopSessionFolding;
- (BOOL)canFoldTopSession;
- (void)checkUnfoldSession;
- (long long)getUnreadTopSessionCount;
- (void)foldAllTopUnreadSession;
- (void)foldSessionUsernames:(id)arg1 animate:(BOOL)arg2;
- (void)unfoldAllTopSessionWithAnimte:(BOOL)arg1;
- (void)onClickAtMainFrameTab;
- (unsigned long long)lastEnterMainTabTime;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bReadyToLoadData;
- (id)m_nsLastSearchText;
- (void)setM_nsLastSearchText:(id)arg1;
- (id)m_frontSessionArray;
- (void)setM_frontSessionArray:(id)arg1;
- (id)m_delayFoldSessionForGuide;
- (void)setM_delayFoldSessionForGuide:(id)arg1;
- (BOOL)hasLoadSessionData;
- (void)setHasLoadSessionData:(BOOL)arg1;
- (id)foldReporter;
- (void)setFoldReporter:(id)arg1;
- (void).cxx_destruct;
@end
