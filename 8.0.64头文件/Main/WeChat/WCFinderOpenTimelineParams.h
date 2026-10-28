@interface WCFinderOpenTimelineParams : NSObject
{
    BOOL _isTriggerByUser; // +0x8
    BOOL _shouldReloadTableView; // +0x9
    BOOL _byPush; // +0xa
    BOOL _fromWxSns; // +0xb
    BOOL _showMainView; // +0xc
    BOOL _fromShareType; // +0xd
    BOOL _redDotShowOnFinderMentionEntry; // +0xe
    BOOL _notUpdateContextId; // +0xf
    int _entryScene; // +0x10
    int _entryCardType; // +0x14
    int _failReturnTo; // +0x18
    UIViewController * _fromVC; // +0x20
    WCFinderPostSessionModel * _postSession; // +0x28
    long long _openFinderTLAppendAction; // +0x30
    unsigned long long _forceJumpTabType; // +0x38
    unsigned long long _guideBarObjectId; // +0x40
    WCFinderRedDotCtrlInfo * _finderEntryRedDotCtrlInfo; // +0x48
    WCFinderRedDotCtrlInfo * _finderEntryJumpRedDotCtrlInfo; // +0x50
    NSString * _h5ByPass; // +0x58
    NSString * _reportInfo; // +0x60
    NSMutableArray * _topObjects; // +0x68
    FinderCommByPass * _commByPass; // +0x70
    unsigned long long _demotionFlag; // +0x78
    id /* block */ _complete; // +0x80
    NSArray * _appendContentVMArray; // +0x88
    NSString * _scrollToFeedId; // +0x90
    NSData * _appendCardLastBuffer; // +0x98
    NSString * _taskID; // +0xa0
    long long _clearRedDotActionType; // +0xa8
    NSString * _jumpInfo; // +0xb0
    NSString * _tid; // +0xb8
    NSString * _nonceID; // +0xc0
    double _playPosition; // +0xc8
    unsigned long long _requestScene; // +0xd0
    NSString * _bottomSnackTips; // +0xd8
    unsigned long long _filterRedDotFlag; // +0xe0
    unsigned long long _pushLevel; // +0xe8
    WCFinderAppendTabDatasModel * _appendTabDatasModel; // +0xf0
    NSString * _redDotTipsUuid; // +0xf8
    WCFinderRedDotCtrlInfo * _guideRedDotCtrlInfo; // +0x100
    WCFinderRedDotCtrlInfo * _finderEntranceRedDotCtrlInfo; // +0x108
    unsigned long long _appendDatasScene; // +0x110
}
- (id)_initWithEntryScene:(int)arg1 entryCardType:(int)arg2;
- (id)initFromOpenBusinessSceneWithPostSession:(id)arg1;
- (id)initFromShareListWithDatasModel:(id)arg1 entryScene:(int)arg2 entryCardType:(int)arg3;
- (id)initFromWXSearchShouldReloadTableView:(BOOL)arg1 fromVC:(id)arg2;
- (id)initFromShareListFromVC:(id)arg1 shouldReloadTableView:(BOOL)arg2 forceJumpTabType:(unsigned long long)arg3 entryScene:(int)arg4 entryCardType:(int)arg5;
- (id)initFromShareListFromVC:(id)arg1 shouldReloadTableView:(BOOL)arg2 forceJumpTabType:(unsigned long long)arg3 entryScene:(int)arg4 entryCardType:(int)arg5 guideBarObjectId:(unsigned long long)arg6;
- (id)initFromShareListFromVC:(id)arg1 shouldReloadTableView:(BOOL)arg2 forceJumpTabType:(unsigned long long)arg3 entryScene:(int)arg4 entryCardType:(int)arg5 appendContentVMArray:(id)arg6 scrollToFeedId:(id)arg7 appendCardLastBuffer:(id)arg8 appendDatasScene:(unsigned long long)arg9;
- (id)initFromPushWithFromVC:(id)arg1 shouldReloadTableView:(BOOL)arg2 forceJumpTabType:(unsigned long long)arg3 topObjects:(id)arg4 commByPass:(id)arg5 demotionFlag:(unsigned long long)arg6 failReturnTo:(int)arg7 taskID:(id)arg8 pushLevel:(unsigned long long)arg9 jumpInfo:(id)arg10;
- (id)initFromFindPageClick;
- (id)initFromIntroductionMessage;
- (id)initFromSnsTimelineJumpToFinderPersonalCenter;
- (id)initFromShareTypeWithTid:(id)arg1 nonceID:(id)arg2 playPosition:(double)arg3 entryScene:(int)arg4 requestScene:(unsigned long long)arg5;
- (id)initFromOpenFinderTLJSApiWithFromVC:(id)arg1 forceJumpTabType:(unsigned long long)arg2 entryScene:(int)arg3 entryCardType:(int)arg4 h5ByPass:(id)arg5 reportInfo:(id)arg6 complete:(id /* block */)arg7;
- (long long)getOpenFinderAppendAction;
- (BOOL)forceInitFinderTimelineVC;
- (id)initByEntryScene:(int)arg1 entryCardType:(int)arg2 appendTabDatasModel:(id)arg3;
- (void)appendShowBottomSnackTipsAction:(id)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (int)entryCardType;
- (void)setEntryCardType:(int)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (long long)openFinderTLAppendAction;
- (void)setOpenFinderTLAppendAction:(long long)arg1;
- (unsigned long long)forceJumpTabType;
- (void)setForceJumpTabType:(unsigned long long)arg1;
- (BOOL)isTriggerByUser;
- (void)setIsTriggerByUser:(BOOL)arg1;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (BOOL)shouldReloadTableView;
- (void)setShouldReloadTableView:(BOOL)arg1;
- (id)finderEntryRedDotCtrlInfo;
- (void)setFinderEntryRedDotCtrlInfo:(id)arg1;
- (id)finderEntryJumpRedDotCtrlInfo;
- (void)setFinderEntryJumpRedDotCtrlInfo:(id)arg1;
- (id)h5ByPass;
- (void)setH5ByPass:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)topObjects;
- (void)setTopObjects:(id)arg1;
- (id)commByPass;
- (void)setCommByPass:(id)arg1;
- (unsigned long long)demotionFlag;
- (void)setDemotionFlag:(unsigned long long)arg1;
- (BOOL)byPush;
- (void)setByPush:(BOOL)arg1;
- (int)failReturnTo;
- (void)setFailReturnTo:(int)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (id)appendContentVMArray;
- (void)setAppendContentVMArray:(id)arg1;
- (id)scrollToFeedId;
- (void)setScrollToFeedId:(id)arg1;
- (id)appendCardLastBuffer;
- (void)setAppendCardLastBuffer:(id)arg1;
- (BOOL)fromWxSns;
- (void)setFromWxSns:(BOOL)arg1;
- (BOOL)showMainView;
- (void)setShowMainView:(BOOL)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (long long)clearRedDotActionType;
- (void)setClearRedDotActionType:(long long)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (double)playPosition;
- (void)setPlayPosition:(double)arg1;
- (BOOL)fromShareType;
- (void)setFromShareType:(BOOL)arg1;
- (unsigned long long)requestScene;
- (void)setRequestScene:(unsigned long long)arg1;
- (id)bottomSnackTips;
- (void)setBottomSnackTips:(id)arg1;
- (unsigned long long)filterRedDotFlag;
- (void)setFilterRedDotFlag:(unsigned long long)arg1;
- (unsigned long long)pushLevel;
- (void)setPushLevel:(unsigned long long)arg1;
- (id)appendTabDatasModel;
- (void)setAppendTabDatasModel:(id)arg1;
- (id)redDotTipsUuid;
- (void)setRedDotTipsUuid:(id)arg1;
- (id)guideRedDotCtrlInfo;
- (void)setGuideRedDotCtrlInfo:(id)arg1;
- (id)finderEntranceRedDotCtrlInfo;
- (void)setFinderEntranceRedDotCtrlInfo:(id)arg1;
- (BOOL)redDotShowOnFinderMentionEntry;
- (void)setRedDotShowOnFinderMentionEntry:(BOOL)arg1;
- (BOOL)notUpdateContextId;
- (void)setNotUpdateContextId:(BOOL)arg1;
- (unsigned long long)appendDatasScene;
- (void)setAppendDatasScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
