@interface WWKFAddContactViewController : MMUIViewController <MMPageSheetAdapterDelegate>
{
    BOOL _bHalfScreen; // +0x68
    MMPageSheetAdapter * _adapter; // +0x70
    CContact * _contact; // +0x78
    id /* block */ _comfirmBlock; // +0x80
    NSString * _antispamText; // +0x88
    MMHeadImageView * _headView; // +0x90
    MMUILabel * _nickNameLabel; // +0x98
    MMCPLabel * _descLabel; // +0xa0
    MMUILabel * _titleLabel; // +0xa8
    MMUILabel * _subTitleLabel; // +0xb0
    MMUILabel * _antispamLabel; // +0xb8
    UIButton * _confirmButton; // +0xc0
    MMUIButton * _cancelButton; // +0xc8
}
+ (double)halfScreenHeight;
- (id)initWithContact:(id)arg1 inHalfScreen:(BOOL)arg2 antispamText:(id)arg3 comfirmBlock:(id /* block */)arg4;
- (void)setAdapter:(id)arg1;
- (void)initMainUI;
- (void)updateUICompts;
- (void)updateUIComptsInHalfScreenState;
- (void)updateUIComptsInFullScreenState;
- (void)viewDidLayoutSubviews;
- (void)updateUILayoutInHalfScreenState;
- (void)updateUILayoutInFullScreenState;
- (void)viewDidLoad;
- (void)pageSheetWillBePresentFrom:(id)arg1 inContainer:(id)arg2;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (id)adapter;
- (id)contact;
- (void)setContact:(id)arg1;
- (id /* block */)comfirmBlock;
- (void)setComfirmBlock:(id /* block */)arg1;
- (BOOL)bHalfScreen;
- (void)setBHalfScreen:(BOOL)arg1;
- (id)antispamText;
- (void)setAntispamText:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)antispamLabel;
- (void)setAntispamLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end

