@interface WAJSEventHandler_openTextStateCardList : WAJSEventHandler_BaseEvent <TextStateCardListDataProvider, TextStateCardListDelegate, MultipleTextStateCardViewDataSource, TextStateMgrExt>
{
    BOOL _enableExpose; // +0x8
    BOOL _shouldShowLocationDistance; // +0x9
    unsigned int _likeSource; // +0xc
    unsigned long long _beginIndex; // +0x10
    NSArray * _textStateList; // +0x18
    NSString * _currentTextStateId; // +0x20
    TextStateCardListSlidingWindowRefreshTask * _task; // +0x28
    TextStateCardListViewController * _cardListViewController; // +0x30
    MMUINavigationController * _navigationController; // +0x38
    unsigned long long _requestId; // +0x40
    NSString * _sceneSessionId; // +0x48
}
- (void)handleJSEvent:(id)arg1;
- (unsigned long long)count;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onChangeToCardAtIndex:(unsigned long long)arg1;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (void)onNewTextStateSquareRefreshCardListSlidingWindow:(id)arg1;
- (unsigned long long)beginIndex;
- (void)setBeginIndex:(unsigned long long)arg1;
- (id)textStateList;
- (void)setTextStateList:(id)arg1;
- (id)currentTextStateId;
- (void)setCurrentTextStateId:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)cardListViewController;
- (void)setCardListViewController:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (BOOL)enableExpose;
- (void)setEnableExpose:(BOOL)arg1;
- (BOOL)shouldShowLocationDistance;
- (void)setShouldShowLocationDistance:(BOOL)arg1;
- (unsigned int)likeSource;
- (void)setLikeSource:(unsigned int)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (id)sceneSessionId;
- (void)setSceneSessionId:(id)arg1;
- (void).cxx_destruct;
@end

