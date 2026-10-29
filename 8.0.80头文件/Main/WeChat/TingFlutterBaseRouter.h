@interface TingFlutterBaseRouter : NSObject <FlutterNavigatorDelegate>
{
    TingPlayerManager * _playTaskController; // +0x8
}
- (id)createViewController:(id)arg1;
- (id)createViewController:(id)arg1 arguments:(id)arg2;
- (void)initPlayTaskController;
- (void)openNewPage:(id)arg1 completion:(id /* block */)arg2;
- (id)pushNewPageWithRoute:(id)arg1 arguments:(id)arg2 completioin:(id /* block */)arg3;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (id)playTaskController;
- (void)setPlayTaskController:(id)arg1;
- (void).cxx_destruct;
@end
