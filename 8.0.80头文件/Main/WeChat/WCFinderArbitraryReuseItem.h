@interface WCFinderArbitraryReuseItem : NSObject
{
    WCFinderArbitraryReuseItem * _next; // +0x8
    NSString * _identifier; // +0x10
    UIView * _view; // +0x18
    UIViewController * _vc; // +0x20
}
- (id)next;
- (void)setNext:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (void).cxx_destruct;
@end
