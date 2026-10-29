@interface MMDarkModeObserver : NSObject <WCMainWindowExt>
{
    id /* block */ _block; // +0x8
}
+ (id)observerWithCallback:(id /* block */)arg1;
- (id)init;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)fireDarkModeChange:(BOOL)arg1;
- (void)forceFireEvent;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

