@interface SelectAttachmentViewController : MMUIViewController <MMNewTipsMgrExt, SelectAttachmentViewDelegate, SelectAttachmentViewDataSource, MMTransparentButtonDelegate, IAppDataExt>
{
    int _iCurSelection; // +0x70
    id <SelectAttachmentViewControllerDelegate> m_delegate; // +0x78
    NSArray * m_svcApps; // +0x80
    NSMutableArray * _arrAttachementObjectItems; // +0x88
    long long m_inputToolWeAppStartIndex; // +0x90
    long long m_inputToolWeAppNotShowIndex; // +0x98
    NSString * _m_chatName; // +0xa0
    UIViewController * _m_containerVC; // +0xa8
    NSString * _attachmentExpSessionid; // +0xb0
    unsigned long long _m_appearTime; // +0xb8
}
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (BOOL)shouldWrapViewWithSafeArea;
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
- (BOOL)hasDescAttachmentItem;
- (double)requiredAttachmentContentHeight;
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
- (void)reportSDKItemWithID:(unsigned int)arg1 actionSheetIndex:(long long)arg2 click:(BOOL)arg3 viewID:(id)arg4;
- (void)reportSDKItemExposeAndClick:(id)arg1 pageIndex:(long long)arg2 itemIndex:(long long)arg3 actionSheetIndex:(long long)arg4 click:(BOOL)arg5 viewID:(id)arg6;
- (void)onRefreshAttachmentExpSessionId;
- (long long)getReportChatType;
- (id)attachmentNameForId:(long long)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_svcApps;
- (void)setM_svcApps:(id)arg1;
- (id)m_chatName;
- (void)setM_chatName:(id)arg1;
- (id)m_containerVC;
- (void)setM_containerVC:(id)arg1;
- (id)attachmentExpSessionid;
- (void)setAttachmentExpSessionid:(id)arg1;
- (unsigned long long)m_appearTime;
- (void)setM_appearTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
