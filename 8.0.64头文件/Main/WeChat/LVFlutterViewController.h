@interface LVFlutterViewController : MMFlutterViewController
{
    NSDictionary * _params; // +0x70
}
+ (id)createWithParam:(id)arg1;
+ (id)extraPlugins;
+ (id)routeName;
+ (BOOL)checkArrayOnlyHasBasicElement:(id)arg1;
+ (BOOL)checkDictionaryOnlyHasBasicElement:(id)arg1;
+ (id)commonReportParams;
- (void)viewDidLoad;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
