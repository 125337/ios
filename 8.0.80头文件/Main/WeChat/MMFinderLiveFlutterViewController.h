@interface MMFinderLiveFlutterViewController : MMFlutterViewController
{
    LiveMultiplatformNativeApiFlutterPlugin * _commonHybridPlugin; // +0x70
}
- (id)initWithRouter:(id)arg1 params:(id)arg2;
- (void)viewDidLoad;
- (id)createFlutterInstance:(id)arg1 arguments:(id)arg2;
- (void)setupFlutterPluginsForEngine:(id)arg1;
- (void)setupMMFlutterPluginsForInstance:(id)arg1;
- (id)customFlutterPluginClasses;
- (id)commonHybridPlugin;
- (void)setCommonHybridPlugin:(id)arg1;
- (void).cxx_destruct;
@end
