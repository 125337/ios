@interface WAOpenLocationViewController : MMViewLocationViewController
{
    WAOpenLocationViewControllerHandler * _handler; // +0x70
    id <WAOpenLocationViewControllerDelegate> _waDelegate; // +0x78
}
- (id)initWithPOIInfo:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;
- (id)waDelegate;
- (void)setWaDelegate:(id)arg1;
- (void).cxx_destruct;
@end
