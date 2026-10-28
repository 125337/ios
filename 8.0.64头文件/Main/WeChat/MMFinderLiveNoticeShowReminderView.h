@interface MMFinderLiveNoticeShowReminderView : MMPageSheetBaseView
{
    int _selectType; // +0x8
    id /* block */ _selectBlock; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    UIView * _contentView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    WCFinderLiveNoticeView * _liveNoticeView; // +0x30
    double _noticeViewHeight; // +0x38
    MMFinderLiveNoticeShowReminderBottomView * _bottomView; // +0x40
    NSString * _title; // +0x48
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0x50
    WCFinderLiveNoticeView * _nextLiveNoticeView; // +0x58
    UILabel * _noticeHeader; // +0x60
    UILabel * _nextLiveNoticeHeader; // +0x68
}
- (void)updateLiveNoticeInfo:(id)arg1 nextLiveNoticeInfo:(id)arg2 selectType:(int)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (BOOL)isMemberLiveNotice:(id)arg1;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (void)bottomViewClick;
- (id)liveNoticeView;
- (id)nextLiveNoticeView;
- (id)bottomView;
- (id)titleLabel;
- (id)contentView;
- (id)noticeHeader;
- (id)nextLiveNoticeHeader;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (int)selectType;
- (void)setSelectType:(int)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setLiveNoticeView:(id)arg1;
- (double)noticeViewHeight;
- (void)setNoticeViewHeight:(double)arg1;
- (void)setBottomView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)nextLiveNoticeInfo;
- (void)setNextLiveNoticeInfo:(id)arg1;
- (void)setNextLiveNoticeView:(id)arg1;
- (void)setNoticeHeader:(id)arg1;
- (void)setNextLiveNoticeHeader:(id)arg1;
- (void).cxx_destruct;
@end
