@interface WCFinderWeSeeRouter : NSObject
{
    _TtC6WeChat24FinderWeSeeConfiguration * _configuration; // +0x8
}
+ (id)currentRouter;
- (id)initWithConfiguration:(id)arg1;
- (Class)homeViewControllerClass;
- (id)entryControllerForViewController:(id)arg1;
- (void)openFromViewController:(id)arg1;
- (void)openSeeLaterFromViewController:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void).cxx_destruct;
@end
