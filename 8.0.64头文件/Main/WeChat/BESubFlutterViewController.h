@interface BESubFlutterViewController : MMFlutterViewController
{
    BOOL _didAppear; // +0x70
    BSTLExptConfig * _exptConfig; // +0x78
    BSTimelineFlutterPlugin * _apiImpl; // +0x80
}
- (id)initWithExptConfig:(id)arg1 route:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)registerPlugin;
- (void)didTakeSnapshot:(id)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)exptConfig;
- (void)setExptConfig:(id)arg1;
- (id)apiImpl;
- (void)setApiImpl:(id)arg1;
- (BOOL)didAppear;
- (void)setDidAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
