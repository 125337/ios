@interface EmoticonSearchHalfScreenViewController : MMUIHalfScreenViewController <EmoticonSearchBoardViewDelegate, EmoticonPreviewWindowViewControllerDelegate, EmoticonRecommendBoardCgiDelegate, WSSimilarEmoticonListViewControllerDelegate>
{
    BOOL _disableWebSearch; // +0x70
    BOOL _hasAddObserver; // +0x71
    BOOL _hasAddMsgTableViewObserver; // +0x72
    BOOL _isSearchWithRecentQuery; // +0x73
    unsigned int _sourceScene; // +0x74
    int _animationMode; // +0x78
    double _standardHeight; // +0x80
    NSString * _currentText; // +0x88
    NSString * _chatId; // +0x90
    UICollectionViewFlowLayout * _collectionLayout; // +0x98
    CADisplayLink * _displayLink; // +0xa0
    NSArray * _localSearchWraps; // +0xa8
    NSArray * _svrSearchWraps; // +0xb0
    EmoticonRecommendBoardCgi * _recommendBoardCgi; // +0xb8
    NSString * _currentRequestText; // +0xc0
    EmoticonSearchBoardView * _boardView; // +0xc8
    EmoticonPreviewWindowViewController * _emoticonPreview; // +0xd0
    UITableView * _observedMsgTableView; // +0xd8
    id /* block */ _presentAnimateBlock; // +0xe0
    id /* block */ _dismissAnimateBlock; // +0xe8
    EmoticonSearchInMessagePanelReporter * _reporter; // +0xf0
}
- (id)init;
- (id)initWithCurrentTextAndCid:(id)arg1 chatId:(id)arg2;
- (void)initNotificationObservers;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setStandardHeight:(double)arg1;
- (void)configData;
- (void)configSvrData;
- (void)setDisableWebSearch:(BOOL)arg1;
- (void)configBoardView;
- (id)boardView;
- (void)hideKeyboardOnSearchWithRecentQuery;
- (void)makeSearchBarBecomeFirstResponder;
- (BOOL)isAnimationFollowKeyboard;
- (void)setupAnimateTransitionBlocks;
- (void)invalidateDisplayLink;
- (void)onContentViewTopChanged:(id)arg1;
- (double)animateContentViewTop;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (void)onEmoticonRecommendBoardCgiOk:(id)arg1 recommendWraps:(id)arg2;
- (void)onEmoticonRecommendBoardCgiFailed:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onSelectEmoticon:(id)arg1;
- (void)onSendEmoticonWithEmoticonWrap:(id)arg1;
- (void)dismissAfterSend;
- (void)removeMsgTableViewObserver;
- (BOOL)isMsgTableScrollToBottom;
- (void)onSearchBarSearchEmoticonWithText:(id)arg1;
- (void)resetRecommendBoardRequest;
- (void)onSearchBarCancelButtonClicked;
- (void)onSearchEmoticonLongPressToPreview:(id)arg1 description:(id)arg2 frame:(CGRect)arg3 index:(unsigned long long)arg4;
- (void)onClickPurchaseTipButton:(long long)arg1 chooseEmoticonWrap:(id)arg2;
- (void)onClickWSSButtton:(id)arg1;
- (void)onClickEmotionStore;
- (void)onExposure:(id)arg1 bottomIndex:(unsigned long long)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)setuphalfScreenViewAnimationForPresentedBlockDefault;
- (void)setuphalfScreenViewAnimationForPresentedBlockFollowKeyboard;
- (BOOL)needResetPresentedViewFrame;
- (double)standardHeight;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (BOOL)disableWebSearch;
- (id)currentText;
- (void)setCurrentText:(id)arg1;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)localSearchWraps;
- (void)setLocalSearchWraps:(id)arg1;
- (id)svrSearchWraps;
- (void)setSvrSearchWraps:(id)arg1;
- (id)recommendBoardCgi;
- (void)setRecommendBoardCgi:(id)arg1;
- (id)currentRequestText;
- (void)setCurrentRequestText:(id)arg1;
- (void)setBoardView:(id)arg1;
- (id)emoticonPreview;
- (void)setEmoticonPreview:(id)arg1;
- (BOOL)hasAddObserver;
- (void)setHasAddObserver:(BOOL)arg1;
- (BOOL)hasAddMsgTableViewObserver;
- (void)setHasAddMsgTableViewObserver:(BOOL)arg1;
- (BOOL)isSearchWithRecentQuery;
- (void)setIsSearchWithRecentQuery:(BOOL)arg1;
- (id)observedMsgTableView;
- (void)setObservedMsgTableView:(id)arg1;
- (id /* block */)presentAnimateBlock;
- (void)setPresentAnimateBlock:(id /* block */)arg1;
- (id /* block */)dismissAnimateBlock;
- (void)setDismissAnimateBlock:(id /* block */)arg1;
- (int)animationMode;
- (void)setAnimationMode:(int)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
