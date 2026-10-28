@interface MMMusicInvalidStatusViewController : MMUIViewController
{
    unsigned long long _type; // +0x70
    NSString * _msgText; // +0x78
    WCFinderFeedDetailStatusView * _finderStatusView; // +0x80
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)onTappedClose;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)msgText;
- (void)setMsgText:(id)arg1;
- (id)finderStatusView;
- (void)setFinderStatusView:(id)arg1;
- (void).cxx_destruct;
@end
