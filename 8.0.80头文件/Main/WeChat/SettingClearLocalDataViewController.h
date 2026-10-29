@interface SettingClearLocalDataViewController : MMUIViewController <WCActionSheetDelegate, IMMNewSessionMgrExt>
{
    unsigned int _totalSessionNumber; // +0x70
    unsigned int _clearSessionNumber; // +0x74
    unsigned long long _startTimestamp; // +0x78
    unsigned long long _endTimestamp; // +0x80
    id /* block */ _sizeListener; // +0x88
    unsigned long long _scene; // +0x90
    BOOL enhancingCleanConfirm; // +0x98
    unsigned long long totalCleanSize; // +0xa0
    MMUIScrollView * _backgroundView; // +0xa8
    UIImageView * _iconView; // +0xb0
    SightIconView * _sightIconView; // +0xb8
    UILabel * _titleLabel; // +0xc0
    UILabel * _subtitleLabel; // +0xc8
    UIButton * _clearBtn; // +0xd0
    UIButton * _closeBtn; // +0xd8
    unsigned long long _state; // +0xe0
}
- (id)init;
- (id)initWithScene:(unsigned long long)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setState:(unsigned long long)arg1;
- (void)close;
- (void)initViews;
- (void)layoutUI;
- (void)layoutDefaultUI;
- (void)layoutClearingUI;
- (void)layoutFinishedUI;
- (id)backgroundView;
- (id)iconView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)clearBtn;
- (id)closeBtn;
- (id)sightIconView;
- (void)updateLabel:(id)arg1 text:(id)arg2 lineHeight:(double)arg3;
- (void)showClearLocalDataActionSheet;
- (void)removeSizeListener;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapClearBtn;
- (void)onArriveFundConfirmClearAllMsg;
- (void)onArriveFundCancelClearAllMsg:(id)arg1;
- (void)clearLocalData;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onDidDeleteAllSession;
- (void)reportClearLocalDataFinished;
- (void)setBackgroundView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setSightIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setClearBtn:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (unsigned long long)state;
- (void).cxx_destruct;
@end
