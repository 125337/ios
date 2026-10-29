@interface LiteAppEmoticonPanelView : NSObject <EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate, BaseEmoticonViewDelegate, FlutterPlatformView>
{
    EmoticonBoardView * _emoticonBoardView; // +0x8
    UIView * _containerView; // +0x10
    FlutterMethodChannel * _channel; // +0x18
    long long _viewId; // +0x20
    NSDictionary * _creationParams; // +0x28
    NSDictionary * _activeSearchSource; // +0x30
    NSString * _searchSessionId; // +0x38
    CGRect _frame; // +0x40
}
+ (id)searchResultReceivers;
+ (BOOL)deliverDownloadedSearchEmoticon:(id)arg1 forSessionId:(id)arg2;
- (void)registerSearchResultReceiverForSessionId:(id)arg1;
- (void)unregisterSearchResultReceiver;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 methodChannel:(id)arg4;
- (void)setupMethodCallHandler;
- (void)handleJSEvent:(id)arg1 result:(id /* block */)arg2;
- (void)sendPlatformViewEvent:(id)arg1 data:(id)arg2;
- (id)createEmoticonBoardView;
- (void)configureView:(id)arg1;
- (void)applyDefaultConfig:(id)arg1;
- (void)applyConfirmType:(id)arg1 confirmType:(id)arg2;
- (BOOL)isValidSelectedTabBackgroundColorString:(id)arg1;
- (id)normalizedSelectedTabBackgroundColorString:(id)arg1;
- (id)selectedTabBackgroundColorFromAppearance:(id)arg1;
- (void)applyAppearance:(id)arg1 params:(id)arg2;
- (void)applyBackgroundAndDivider:(id)arg1 transparent:(BOOL)arg2 hideDivider:(BOOL)arg3;
- (void)clearAllBackgrounds:(id)arg1;
- (void)hideCategoryDivider:(id)arg1;
- (void)traverseAndHideDivider:(id)arg1 depth:(long long)arg2;
- (id)view;
- (id)tabDescriptorForItem:(id)arg1;
- (void)onEmoticonBoardTabClicked:(id)arg1;
- (BOOL)shouldOpenLiteAppEmoticonSearchForSourceScene:(unsigned int)arg1;
- (void)openLiteAppEmoticonSearchFromViewController:(id)arg1 sourceScene:(unsigned int)arg2;
- (void)onEmoticonSearchIconClicked;
- (void)onSendButtonClicked;
- (id)GetCurrentViewController;
- (id)findMMViewControllerInResponderChain;
- (void)didSelectorEmoticon:(id)arg1;
- (void)deleteEmoticon;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)checkAndCallSelectEmoticonMethod:(id)arg1 fromSearch:(BOOL)arg2;
- (id)sourceForEmoticon:(id)arg1 fromSearch:(BOOL)arg2;
- (id)emoticonSelectedArgumentsFromEmoticon:(id)arg1 fromSearch:(BOOL)arg2;
- (BOOL)isUsableEmoticonFileAtPath:(id)arg1;
- (id)localIdForEmoticonPhysicalPath:(id)arg1;
- (id)topViewController;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (id)creationParams;
- (void)setCreationParams:(id)arg1;
- (id)activeSearchSource;
- (void)setActiveSearchSource:(id)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
