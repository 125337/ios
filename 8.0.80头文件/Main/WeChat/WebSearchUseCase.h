@interface WebSearchUseCase : NSObject
{
    BOOL _forceFullScreenForPush; // +0x8
    BOOL _forceFullScreenWhenUsingSplitView; // +0x9
    WebSearchContext * _context; // +0x10
    WCSearchUIConfig * _uiConfig; // +0x18
    id /* block */ _onSearchVCWillAppear; // +0x20
    id /* block */ _searchTransitionCompletion; // +0x28
}
+ (void)preHeartSearchH5Page;
+ (BOOL)liteAppHomePageEnaled;
+ (BOOL)liteAppHomePageEnaledWithHitExptReport:(BOOL)arg1;
- (id)initWithParams:(id)arg1;
- (id)initWithParams:(id)arg1 uiConfig:(id)arg2;
- (id)initWithContextMode:(id /* block */)arg1;
- (void)startWithMoveTabOnPage:(id)arg1 tansitionType:(unsigned long long)arg2;
- (void)startOnPage:(id)arg1 tansitionType:(unsigned long long)arg2;
- (void)startOnPage:(id)arg1 tansitionType:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)startOnPage:(id)arg1 tansitionType:(unsigned long long)arg2 fromSearchBar:(id)arg3;
- (void)startOnPage:(id)arg1 tansitionType:(unsigned long long)arg2 fromSearchBar:(id)arg3 animated:(BOOL)arg4;
- (void)__startOnPage:(id)arg1 tansitionType:(unsigned long long)arg2 fromSearchBar:(id)arg3 animated:(BOOL)arg4;
- (void)configSheetAdapter:(id)arg1 hostHeight:(double)arg2;
- (BOOL)_jumpSearchByLiteappFrom:(id)arg1;
- (id)h5URLParams;
- (void)_didStartWith:(id)arg1;
- (void)applyForceFullScreenPolicyToPushedViewController:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (id /* block */)onSearchVCWillAppear;
- (void)setOnSearchVCWillAppear:(id /* block */)arg1;
- (id /* block */)searchTransitionCompletion;
- (void)setSearchTransitionCompletion:(id /* block */)arg1;
- (BOOL)forceFullScreenForPush;
- (void)setForceFullScreenForPush:(BOOL)arg1;
- (BOOL)forceFullScreenWhenUsingSplitView;
- (void)setForceFullScreenWhenUsingSplitView:(BOOL)arg1;
- (void).cxx_destruct;
@end
