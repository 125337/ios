@interface NewLifeDetailLinkJumper : NSObject
{
    NSString * _linkURL; // +0x8
    UIViewController * _viewController; // +0x10
    unsigned long long _entryScene; // +0x18
    id /* block */ _callback; // +0x20
}
- (BOOL)valid;
- (void)performJump;
- (int)commentScene;
- (id)linkURL;
- (void)setLinkURL:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

