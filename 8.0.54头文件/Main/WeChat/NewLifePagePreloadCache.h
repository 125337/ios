@interface NewLifePagePreloadCache : NSObject
{
    MMFlutterInstance * _instance; // +0x8
    MMFlutterPageStyle * _style; // +0x10
    id /* block */ _completion; // +0x18
}
- (BOOL)showFromViewController:(id)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

