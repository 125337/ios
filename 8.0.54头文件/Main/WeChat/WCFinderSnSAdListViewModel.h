@interface WCFinderSnSAdListViewModel : NSObject <WCFinderDataItemExt, WCFinderContactExt>
{
    BOOL _isLoading; // +0x8
    BOOL _continueFlag; // +0x9
    int _commentScene; // +0xc
    id <WCFinderSnSAdListViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _dataItems; // +0x18
    unsigned long long _refreshTime; // +0x20
    WCFinderShareListReportModel * _reportModel; // +0x28
    NSString * _adParamInfoStr; // +0x30
    NSMutableSet * _tidContainSet; // +0x38
    NSString * _lastTid; // +0x40
    NSString * _lastNonceID; // +0x48
    NSString * _encryptedlastTid; // +0x50
    NSString * _userName; // +0x58
    NSData * _lastBuff; // +0x60
    WCFinderContact * _contact; // +0x68
    unsigned long long _maxID; // +0x70
}
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 userName:(id)arg3 dataScene:(id)arg4 commentScene:(int)arg5 encryptedlastTid:(id)arg6;
- (id)enterSourceFeedId;
- (void)addContentVM:(id)arg1;
- (id)transformDataItems:(id)arg1;
- (BOOL)deleteDataItemWithIndex:(unsigned long long)arg1 tid:(id)arg2;
- (void)refreshLatestData;
- (void)reportRelatedInfo:(id)arg1;
- (void)requestNextpageList;
- (unsigned long long)currentFollowState;
- (void)onFeedFollowStatusChangedAction;
- (BOOL)isEnableFetchNextpage;
- (void)appendFinderContentVM:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMAtIndex:(long long)arg1;
- (void)contentUnlikeFeedback:(id)arg1 subType:(long long)arg2;
- (BOOL)isSourceValid;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (void)onFinderDataItemMediaURLIsExpired:(id)arg1;
- (int)feedViewControllerScene;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (id)adParamInfoStr;
- (void)setAdParamInfoStr:(id)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)lastTid;
- (void)setLastTid:(id)arg1;
- (id)lastNonceID;
- (void)setLastNonceID:(id)arg1;
- (id)encryptedlastTid;
- (void)setEncryptedlastTid:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)maxID;
- (void)setMaxID:(unsigned long long)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

