@interface MMEmoticonBoardNativeView : NSObject <EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate, BaseEmoticonViewDelegate, FlutterPlatformView>
{
    MMEmoticonBoardNativeViewContext * _context; // +0x8
    EmoticonBoardView * _emoticonBoardView; // +0x10
}
- (id)initWithContext:(id)arg1;
- (void)setupMethodCallHandler;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)configureEmoticonBoardView:(id)arg1 withInitExtra:(id)arg2;
- (id)createEmoticonBoardView;
- (id)view;
- (id)emoticonSelectedArgumentsFromEmoticon:(id)arg1 fromSearch:(BOOL)arg2;
- (void)callOnEmoticonSelectedMethod:(id)arg1;
- (void)checkAndCallSelectEmoticonMethod:(id)arg1 fromSearch:(BOOL)arg2;
- (void)onEmoticonSearchIconClicked;
- (void)onSendButtonClicked;
- (id)GetCurrentViewController;
- (void)didSelectorEmoticon:(id)arg1;
- (void)deleteEmoticon;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (void).cxx_destruct;
@end
