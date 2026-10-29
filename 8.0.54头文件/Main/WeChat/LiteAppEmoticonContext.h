@interface LiteAppEmoticonContext : NSObject <BaseEmoticonViewDelegate, EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate, MMLiteAppExt, MMLiteAppCloseExt>
{
    unsigned int _appUuid; // +0x8
    EmoticonBoardView * _emoticonBoardView; // +0x10
    UIViewController<ILiteAppJsApiPluginControllerProtocol> * _liteAppVC; // +0x18
    id <LiteAppLifeCycleCallbackDelegate> _preLifeCycleDelegate; // +0x20
}
+ (id)liteAppEmoticonContextTag;
+ (id)getEmoticonPanelWithUIViewController:(id)arg1;
+ (id)getFlutterViewWithController:(id)arg1;
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
- (void)onLiteAppViewLifeCycleEvent:(unsigned long long)arg1;
- (void)onLiteAppClose:(id)arg1 appUuid:(unsigned int)arg2 extraData:(id)arg3;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)liteAppVC;
- (void)setLiteAppVC:(id)arg1;
- (id)preLifeCycleDelegate;
- (void)setPreLifeCycleDelegate:(id)arg1;
- (void).cxx_destruct;
@end

