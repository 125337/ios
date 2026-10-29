@interface EcsFinderFeedProductFlutterViewController : MMFlutterViewController
{
    FinderFeedEcProductCard * _productCard; // +0x70
    id /* block */ _onFeedbackAction; // +0x78
    id /* block */ _onLiveEntranceReportAction; // +0x80
    EcsFinderFeedProductFlutterPlugin * _effpPlugin; // +0x88
}
+ (id)createWithParams:(id)arg1 trackerSceneId:(id)arg2;
- (id)initWithFlutterInstance:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)onFlutterViewDidAppear;
- (void)onFlutterViewDidDisappear;
- (void)onRecycle;
- (void)setFinderCardInfo:(id)arg1;
- (void)setupPlugins;
- (void)setProductCard:(id)arg1;
- (id)productCard;
- (id /* block */)onFeedbackAction;
- (void)setOnFeedbackAction:(id /* block */)arg1;
- (id /* block */)onLiveEntranceReportAction;
- (void)setOnLiveEntranceReportAction:(id /* block */)arg1;
- (id)effpPlugin;
- (void)setEffpPlugin:(id)arg1;
- (void).cxx_destruct;
@end
