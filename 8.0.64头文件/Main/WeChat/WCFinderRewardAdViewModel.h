@interface WCFinderRewardAdViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    int _commentScene; // +0xc
    id <WCFinderRewardAdViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _dataItems; // +0x18
    unsigned long long _refreshTime; // +0x20
    WCFinderShareListReportModel * _reportModel; // +0x28
    WCFinderPushFeedViewParams * _funcParams; // +0x30
    NSMutableSet * _showlikeInduceContentTidSet; // +0x38
    NSMutableSet * _tidContainSet; // +0x40
    NSString * _encrytedObjectidTid; // +0x48
    WCFinderDataItem * _decipherdDataItem; // +0x50
    NSData * _lastBuff; // +0x58
    NSString * _lastTid; // +0x60
    NSString * _lastNonceID; // +0x68
    unsigned long long _requestScene; // +0x70
    WCFinderBaseCgi * _getRelatedCgi; // +0x78
}
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 dataScene:(id)arg3 commentScene:(int)arg4 requestScene:(unsigned long long)arg5;
- (void)addContentVM:(id)arg1;
- (id)transformDataItems:(id)arg1;
- (void)requestData;
- (BOOL)isEnableFetchNextpage;
- (void)requestRelatedList;
- (void)appendFinderContentVM:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithIndex:(unsigned long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (BOOL)isSourceValid;
- (id)showlikeInduceContentTidSet;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (void)onFinderDataItemMediaURLIsExpired:(id)arg1;
- (int)feedViewControllerScene;
- (void)adReportClickActionType:(long long)arg1 adReportScene:(long long)arg2 curFeedTid:(id)arg3 ignoreFeedIdMatching:(BOOL)arg4 hitPoint:(CGPoint)arg5;
- (void)triggerAdRelatedFeedbackWithActionType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (id)funcParams;
- (void)setFuncParams:(id)arg1;
- (void)setShowlikeInduceContentTidSet:(id)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)encrytedObjectidTid;
- (void)setEncrytedObjectidTid:(id)arg1;
- (id)decipherdDataItem;
- (void)setDecipherdDataItem:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)lastTid;
- (void)setLastTid:(id)arg1;
- (id)lastNonceID;
- (void)setLastNonceID:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)requestScene;
- (void)setRequestScene:(unsigned long long)arg1;
- (id)getRelatedCgi;
- (void)setGetRelatedCgi:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
