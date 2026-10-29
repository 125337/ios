@interface MagicEcsNirvanaDemoViewController : MMUIViewController <UITextFieldDelegate, UITextViewDelegate>
{
    UIScrollView * _scrollView; // +0x70
    UITextField * _bizNameField; // +0x78
    UITextField * _routeNameField; // +0x80
    UITextField * _preloadTypeField; // +0x88
    UITextView * _extraDataView; // +0x90
    UISegmentedControl * _launchAnimSeg; // +0x98
    UISwitch * _enableDefaultBgSwitch; // +0xa0
    UISwitch * _enableEdgeSlideSwitch; // +0xa8
}
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupUI;
- (id)makeDoneToolbar;
- (id)sectionTitle:(id)arg1;
- (id)textFieldWithPlaceholder:(id)arg1 defaultValue:(id)arg2;
- (id)labeledRow:(id)arg1 field:(id)arg2;
- (id)labeledRow:(id)arg1 customControl:(id)arg2;
- (id)switchRow:(id)arg1 toggle:(id)arg2;
- (id)buttonWithTitle:(id)arg1 action:(SEL)arg2;
- (void)loadPersistedValues;
- (void)persistValues;
- (id)processExtraData:(id)arg1;
- (id)startupParamsJSONWithRoute:(id)arg1 extra:(id)arg2;
- (id)buildJumpInfoIncludePreload:(BOOL)arg1;
- (void)dismissKeyboard;
- (void)onPreloadTapped;
- (void)onOpenTapped;
- (void)showToast:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)bizNameField;
- (void)setBizNameField:(id)arg1;
- (id)routeNameField;
- (void)setRouteNameField:(id)arg1;
- (id)preloadTypeField;
- (void)setPreloadTypeField:(id)arg1;
- (id)extraDataView;
- (void)setExtraDataView:(id)arg1;
- (id)launchAnimSeg;
- (void)setLaunchAnimSeg:(id)arg1;
- (id)enableDefaultBgSwitch;
- (void)setEnableDefaultBgSwitch:(id)arg1;
- (id)enableEdgeSlideSwitch;
- (void)setEnableEdgeSlideSwitch:(id)arg1;
- (void).cxx_destruct;
@end
