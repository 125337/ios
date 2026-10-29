@interface KindaViewControllerRouteAction : NSObject
{
    id <KindaViewControllerRouteActionDelegate> _delegate; // +0x8
    id /* block */ _action; // +0x10
}
- (id)initWithAction:(id /* block */)arg1;
- (void)run:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

