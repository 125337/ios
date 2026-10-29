@interface SetDeviceSafeViewController : MMUIViewController <PBMessageObserverDelegate, MMTableViewInfoDelegate, ILinkEventExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    SafeDeviceData * _currentDevice; // +0x70
    UIView * _footerContainerView; // +0x78
    RichTextView * _linkView; // +0x80
}
- (void)updateTopRightButtion;
- (void)updateSetView;
- (void)updatView;
- (void)willAppear;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)actionCell:(id)arg1;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)delCurrentDevice;
- (void)OnClickRightTopBtn;
- (void)MessageReturnDelDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (id)currentDevice;
- (void)setCurrentDevice:(id)arg1;
- (id)footerContainerView;
- (void)setFooterContainerView:(id)arg1;
- (id)linkView;
- (void)setLinkView:(id)arg1;
- (void).cxx_destruct;
@end

