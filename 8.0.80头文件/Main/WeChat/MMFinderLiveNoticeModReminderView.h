@interface MMFinderLiveNoticeModReminderView : MMPageSheetBaseView
{
    int _selectType; // +0x8
    id <LiveNoticeModReminderViewDelegate> _delegate; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    unsigned long long _fromType; // +0x20
    unsigned long long _selectMode; // +0x28
    UIView * _contentView; // +0x30
    MMFinderLiveNoticeModReminderSubView * _autoReminderSubView; // +0x38
    MMFinderLiveNoticeModReminderSubView * _manualReminderSubView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLiveNoticeInfo:(id)arg1 selectType:(int)arg2 fromType:(unsigned long long)arg3 selectMode:(unsigned long long)arg4;
- (BOOL)isDisableWithType:(int)arg1;
- (BOOL)isMemberLiveNotice:(id)arg1;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (BOOL)isFromStarterVC;
- (BOOL)isFromNoticeDetail;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton:(BOOL)arg1;
- (id)getCurrentRightButton;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (id)autoReminderSubView;
- (id)manualReminderSubView;
- (void)handleRemanderSubViewSelectWithSelectType:(int)arg1 isDisable:(BOOL)arg2;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (int)selectType;
- (void)setSelectType:(int)arg1;
- (unsigned long long)fromType;
- (void)setFromType:(unsigned long long)arg1;
- (unsigned long long)selectMode;
- (void)setSelectMode:(unsigned long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setAutoReminderSubView:(id)arg1;
- (void)setManualReminderSubView:(id)arg1;
- (void).cxx_destruct;
@end
