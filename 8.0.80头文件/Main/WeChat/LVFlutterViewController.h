@interface LVFlutterViewController : MMFlutterViewController
{
    NSDictionary * _params; // +0x70
    LVNativePlugin * _nativePlugin; // +0x78
    LVFinderPlugin * _finderPlugin; // +0x80
    TingMVTexturePlugin * _tingMvTexturePlugin; // +0x88
}
+ (id)createWithParam:(id)arg1;
+ (id)extraPlugins;
+ (id)routeName;
+ (BOOL)checkArrayOnlyHasBasicElement:(id)arg1;
+ (BOOL)checkDictionaryOnlyHasBasicElement:(id)arg1;
+ (id)commonReportParams;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)nativePlugin;
- (void)setNativePlugin:(id)arg1;
- (id)finderPlugin;
- (void)setFinderPlugin:(id)arg1;
- (id)tingMvTexturePlugin;
- (void)setTingMvTexturePlugin:(id)arg1;
- (void).cxx_destruct;
@end
