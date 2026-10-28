@interface WCAdConventionalKefuViewController : WCAdConventionalDetailContainerViewController <IOpenImResourceMgrExt>
{
    CContact * _contact; // +0xa8
    WCAdConventionalKefuDetailView * _detailView; // +0xb0
    UIButton * _confirmButton; // +0xb8
}
- (id)initWithDataItem:(id)arg1 clickActionInfo:(id)arg2 scene:(unsigned long long)arg3 contact:(id)arg4;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupUIContents;
- (void)layoutUIContents;
- (id)confirmInfo;
- (id)detailView;
- (id)confirmButton;
- (void)onConfirmButtonClick;
- (void)handleOpenCustomerServiceWithResult:(unsigned long long)arg1;
- (void)doConfirmButtonClickReport;
- (void)onGetOpenImResourceDone:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
