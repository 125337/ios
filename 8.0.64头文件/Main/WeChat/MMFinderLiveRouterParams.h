@interface MMFinderLiveRouterParams : NSObject
{
    BOOL _fromNotFinder; // +0x8
    BOOL _disableInteractiveToMinimizeWindow; // +0x9
    BOOL _useAnchoredBypass; // +0xa
    BOOL _disableHistoryLives; // +0xb
    BOOL _useVerticalFullscreenMinimization; // +0xc
    int _commentScene; // +0x10
    int _entryScene; // +0x14
    int _entryCardType; // +0x18
    unsigned long long _routerType; // +0x20
    UIViewController * _fromVC; // +0x28
    MMFinderLiveContentVM * _contactVM; // +0x30
    NSArray * _allContentVMs; // +0x38
    long long _tabType; // +0x40
    NSMutableDictionary * _customParams; // +0x48
    unsigned long long _selectIndex; // +0x50
    NSArray * _exportIds; // +0x58
    MMFinderLiveRelatedLiveParams * _relatedLiveParams; // +0x60
    MMLiveAdsParams * _liveAdsParams; // +0x68
    NSString * _replayEntryType; // +0x70
    NSString * _feedID; // +0x78
    NSString * _gameClientParams; // +0x80
    MMLivePivotFlowSharedData * _pivotFlowData; // +0x88
}
+ (id)builder;
+ (id)defaultParamsFromVC:(id)arg1 contact:(id)arg2;
+ (id)defaultParamsFromVC:(id)arg1 contactVM:(id)arg2;
+ (id)defaultParamsFromVC:(id)arg1 dataItem:(id)arg2;
+ (id)defaultParamsFromVC:(id)arg1 dataItem:(id)arg2 sessionExtraKey:(id)arg3;
+ (id)defaultParamsFromVC:(id)arg1 contentVM:(id)arg2;
- (id)description;
- (id)init;
- (id)selectedContentVm;
- (id)initWithFromVC:(id)arg1 contactVM:(id)arg2 customParams:(id)arg3 tabType:(long long)arg4 fromNotFinder:(BOOL)arg5 commentScene:(int)arg6 entryScene:(int)arg7 entryCardType:(int)arg8;
- (id)initWithFromVC:(id)arg1 allContentVMs:(id)arg2 selectIndex:(unsigned long long)arg3 tabType:(long long)arg4 fromNotFinder:(BOOL)arg5 commentScene:(int)arg6 entryScene:(int)arg7 entryCardType:(int)arg8 replayEntryType:(id)arg9 withByPass:(BOOL)arg10 enableScroll:(BOOL)arg11 exportIds:(id)arg12;
- (BOOL)haveExtraParams;
- (unsigned long long)routerType;
- (void)setRouterType:(unsigned long long)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)contactVM;
- (void)setContactVM:(id)arg1;
- (id)allContentVMs;
- (void)setAllContentVMs:(id)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (id)customParams;
- (void)setCustomParams:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (int)entryCardType;
- (void)setEntryCardType:(int)arg1;
- (unsigned long long)selectIndex;
- (void)setSelectIndex:(unsigned long long)arg1;
- (BOOL)fromNotFinder;
- (void)setFromNotFinder:(BOOL)arg1;
- (id)exportIds;
- (void)setExportIds:(id)arg1;
- (id)relatedLiveParams;
- (void)setRelatedLiveParams:(id)arg1;
- (id)liveAdsParams;
- (void)setLiveAdsParams:(id)arg1;
- (id)replayEntryType;
- (void)setReplayEntryType:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)gameClientParams;
- (void)setGameClientParams:(id)arg1;
- (id)pivotFlowData;
- (void)setPivotFlowData:(id)arg1;
- (BOOL)disableInteractiveToMinimizeWindow;
- (void)setDisableInteractiveToMinimizeWindow:(BOOL)arg1;
- (BOOL)useAnchoredBypass;
- (void)setUseAnchoredBypass:(BOOL)arg1;
- (BOOL)disableHistoryLives;
- (void)setDisableHistoryLives:(BOOL)arg1;
- (BOOL)useVerticalFullscreenMinimization;
- (void)setUseVerticalFullscreenMinimization:(BOOL)arg1;
- (void).cxx_destruct;
@end
