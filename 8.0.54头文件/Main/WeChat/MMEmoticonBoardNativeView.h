@interface MMEmoticonBoardNativeView : NSObject <EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate, BaseEmoticonViewDelegate, FlutterPlatformView>
{
    MMEmoticonBoardNativeViewContext * _context; // +0x8
    EmoticonBoardView * _emoticonBoardView; // +0x10
}
+ (id)typeForData:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)createEmoticonBoardView;
- (id)view;
- (id)selectEmoticonArgumentsFromEmoticon:(id)arg1 useThumbImage:(BOOL)arg2;
- (void)callSelectEmoticonMethod:(id)arg1;
- (void)checkAndCallSelectEmoticonMethod:(id)arg1;
- (void)onEmoticonSearchIconClicked;
- (id)GetCurrentViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (void).cxx_destruct;
@end

