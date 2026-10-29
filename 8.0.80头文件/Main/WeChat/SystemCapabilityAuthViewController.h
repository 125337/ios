@interface SystemCapabilityAuthViewController : MMStackViewController <ILinkEventExt, MMNavBarInteractiveDelegate>
{
    unsigned long long _autoShowScene; // +0x70
    _TtC6WeChat24SystemAuthCapabilityInfo * _capabilityInfo; // +0x78
    RichTextView * _richTextLabel; // +0x80
}
- (id)initWithCapability:(unsigned int)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)initView;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)initInteractiveNavi;
- (void)updateViewConstraints;
- (id)genCell:(id)arg1;
- (id)richTextView;
- (id)genHeaderView;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (unsigned long long)autoShowScene;
- (void)setAutoShowScene:(unsigned long long)arg1;
- (id)capabilityInfo;
- (void)setCapabilityInfo:(id)arg1;
- (id)richTextLabel;
- (void)setRichTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
