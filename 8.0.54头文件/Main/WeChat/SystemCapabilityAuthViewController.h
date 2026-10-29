@interface SystemCapabilityAuthViewController : MMStackViewController <ILinkEventExt, MMNavBarInteractiveDelegate>
{
    _TtC6WeChat24SystemAuthCapabilityInfo * _capabilityInfo; // +0x68
    RichTextView * _richTextLabel; // +0x70
}
- (id)initWithCapability:(unsigned int)arg1;
- (void)viewDidLoad;
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
- (id)capabilityInfo;
- (void)setCapabilityInfo:(id)arg1;
- (id)richTextLabel;
- (void)setRichTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

