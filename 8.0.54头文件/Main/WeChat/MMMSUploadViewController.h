@interface MMMSUploadViewController : MMMSBaseViewController <MemoryStatManagerExt, MMPickerViewDelegate>
{
    UIButton * m_selectButton; // +0x10
    UIButton * m_uploadButton; // +0x18
    MMLoadingView * m_loadingViewX; // +0x20
    MMPickerView * m_pickView; // +0x28
    WCMemoryStatRecord * m_selectedRecord; // +0x30
    NSArray * m_recordList; // +0x38
    NSDateFormatter * m_dateFormatter; // +0x40
}
- (id)init;
- (void)viewDidLoad;
- (void)layoutViews;
- (void)layoutSelectButtonAndTips:(int *)arg1;
- (void)updateSelectButtonTitle;
- (void)layoutUploadButton:(int *)arg1;
- (void)startLoadingBlocked;
- (void)startLoadingBlockedWithText:(id)arg1;
- (void)stopLoading;
- (void)onSelectButtonClicked:(id)arg1;
- (void)onUploadButtonClicked:(id)arg1;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)onMemoryRecordUploadCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

