@interface FAFlutterViewController : MMFlutterViewController
{
    NSDictionary * _params; // +0x70
}
+ (id)extraPlugins;
+ (id)commonReportParams;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
