@interface SelectAttachmentViewController : MMUIViewController <MMNewTipsMgrExt, SelectAttachmentViewDelegate, SelectAttachmentViewDataSource, MMTransparentButtonDelegate, IAppDataExt>
{
    int _iCurSelection; // +0x68
    id <SelectAttachmentViewControllerDelegate> m_delegate; // +0x70
    NSArray * m_svcApps; // +0x78
    NSMutableArray * _arrAttachementObjectItems; // +0x80
    long long m_inputToolWeAppStartIndex; // +0x88
    long long m_inputToolWeAppNotShowIndex; // +0x90
}
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (void)initData;
- (void)initObjectItem;
- (id)init;
- (void)dealloc;
- (void)updateView;
- (void)resetView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)changeToInputToolWeAppNotShowPageWithHadAttachmentRedDot:(BOOL)arg1;
- (id)getDynamicWeAppItemAtIndex:(unsigned int)arg1;
- (double)getSelectAttachmentViewHeight;
- (id)getImageAtIndex:(unsigned int)arg1;
- (id)getTextAtIndex:(unsigned int)arg1;
- (id)getDescAtIndex:(unsigned int)arg1;
- (unsigned long long)numberOfAttachment;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfCols;
- (void)OnAttachmentClicked:(id)arg1;
- (id)viewForAttachmentAtIndex:(unsigned int)arg1;
- (double)getRealSafeBottomInset;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)OnAppRegisterInfoChanged;
- (void)OnAppIconChanged:(id)arg1;
- (void)OnNewAppStatusChanged;
- (void)OnAppSettingChanged;
- (void)adjustViewAndNavBarRect;
- (void)onShowInputToolWeAppArAtPageIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2;
- (void)onShowAttachmentAtPageIndex:(unsigned long long)arg1 pageSize:(unsigned long long)arg2;
- (void)setSelectAttachmentViewAccessibility:(BOOL)arg1;
- (void)reportHBShow;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_svcApps;
- (void)setM_svcApps:(id)arg1;
- (void).cxx_destruct;
@end

