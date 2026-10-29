@interface WCFinderMsgSessionCellDataSource : NSObject <WCFinderMsgSessionMgrExt>
{
    BOOL _isGreetMsgSessionList; // +0x8
    BOOL _hasAliasInfo; // +0x9
    BOOL _ownerInvalid; // +0xa
    unsigned int _myAccountType; // +0xc
    WCFinderMsgSessionAliasEntranceCellViewModel * m_aliasEntranceCellViewModel; // +0x10
    id <WCFinderMsgSessionCellDataSourceDelegate> _delegate; // +0x18
    NSString * _finderUsername; // +0x20
    WCFinderTopBannerCellViewModel * _topBannerCellViewModel; // +0x28
    WCTableSessionStorage * _sessionStorage; // +0x30
    NSMutableDictionary * _sessionId2ViewModelDic; // +0x38
}
- (id)description;
- (id)initWithSessionStorage:(id)arg1;
- (id)topBannerCellViewModel;
- (BOOL)showAliasSessionCell;
- (id)aliasEntranceCellViewModel;
- (long long)sessionCount;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionCellViewModelAtIndex:(long long)arg1;
- (void)openGreetMsgSessionViewControllerFromNav:(id)arg1;
- (void)openChatWithViewModel:(id)arg1 fromNav:(id)arg2 chatContentReporter:(id)arg3;
- (void)onFinderMsgAliasSessionOwnerChanged;
- (void)onFinderMsgSessionUpdated;
- (void)setAliasEntranceCellViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned int)myAccountType;
- (void)setMyAccountType:(unsigned int)arg1;
- (BOOL)isGreetMsgSessionList;
- (void)setIsGreetMsgSessionList:(BOOL)arg1;
- (BOOL)hasAliasInfo;
- (void)setHasAliasInfo:(BOOL)arg1;
- (void)setTopBannerCellViewModel:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (id)sessionId2ViewModelDic;
- (void)setSessionId2ViewModelDic:(id)arg1;
- (BOOL)ownerInvalid;
- (void)setOwnerInvalid:(BOOL)arg1;
- (void).cxx_destruct;
@end

