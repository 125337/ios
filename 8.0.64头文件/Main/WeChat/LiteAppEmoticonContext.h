@interface LiteAppEmoticonContext : NSObject <BaseEmoticonViewDelegate, EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate, MMLiteAppExt>
{
    BOOL _searchIncludeCustom; // +0x8
    unsigned int _appUuid; // +0xc
    unsigned int _searchSourceScene; // +0x10
    NSString * _searchText; // +0x18
    EmoticonBoardView * _emoticonBoardView; // +0x20
    UIViewController<ILiteAppJsApiPluginControllerProtocol> * _liteAppVC; // +0x28
}
+ (id)liteAppEmoticonContextTag;
+ (id)getEmoticonPanelWithUIViewController:(id)arg1;
+ (id)getFlutterViewWithController:(id)arg1;
+ (id)topViewController;
+ (id)topViewControllerFromViewController:(id)arg1;
- (id)initWithEmoticonBoard:(id)arg1 withMMLiteAppViewController:(id)arg2;
- (void)addEmoticonBoardView;
- (void)enableSendButton:(BOOL)arg1;
- (void)showEmoticonPanel;
- (void)detach;
- (void)removeEmoticonPanel;
- (void)publishEmoticonSelectEventWithType:(id)arg1 withData:(id)arg2;
- (void)publishEmoticonButtonClickEventWithType:(id)arg1;
- (void)publishHeightAnimateChangeEventWithOriginHeight:(double)arg1 withNextHeight:(double)arg2 withAnimateDuration:(double)arg3;
- (void)didSelectorEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)deleteEmoticon;
- (void)onSendButtonClicked;
- (void)onEmoticonBoardHeightChanged;
- (void)onEmoticonSearchIconClicked;
- (id)GetCurrentViewController;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onSearchEmoticonViewControllerDidClose;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (unsigned int)searchSourceScene;
- (void)setSearchSourceScene:(unsigned int)arg1;
- (BOOL)searchIncludeCustom;
- (void)setSearchIncludeCustom:(BOOL)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)liteAppVC;
- (void)setLiteAppVC:(id)arg1;
- (void).cxx_destruct;
@end
