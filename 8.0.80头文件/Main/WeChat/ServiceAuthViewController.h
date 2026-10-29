@interface ServiceAuthViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    NSMutableDictionary * m_dictToLink; // +0x70
    id <ServiceAuthDelegate> _delegate; // +0x78
    id <ServiceAuthExt> _notifyDelegate; // +0x80
    ServiceAuthExtBlockWrapper * _notifyBlockWrapper; // +0x88
    ServiceAuthConfig * _config; // +0x90
}
- (id)initWithConfig:(id)arg1;
- (void)initDetailView;
- (void)viewDidLoad;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (long long)numberOfLinesForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id)notifyBlockWrapper;
- (void)setNotifyBlockWrapper:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
