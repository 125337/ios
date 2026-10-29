@interface MMLiveHalfScreenNoticeView : MMPageSheetBaseView
{
    id <MMLiveHalfScreenNoticeViewDelegate> _delegate; // +0x8
    FinderLiveMsgBoxInfo * _msgBox; // +0x10
    UIView * _contentView; // +0x18
    UIScrollView * _bodyScrollView; // +0x20
    UIView * _scrollContentView; // +0x28
    MMWebImageView * _icon; // +0x30
    MMUILabel * _contentLabel; // +0x38
    MMUILabel * _titleLabel; // +0x40
    UIButton * _actionButton; // +0x48
    UIButton * _appealButton; // +0x50
}
+ (double)getButtonAreaHeight;
+ (double)getButtonTopMargin;
+ (double)getButtonBottomMargin;
+ (BOOL)checkLabelHasContent:(id)arg1;
+ (void)configStrongStyleUIButton:(id)arg1;
+ (void)configWeakStyleUIButton:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)createUI;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutScrollView;
- (void)layoutBottomButtons;
- (double)contentViewMaxWidth;
- (double)getContentViewBodyHeight;
- (double)contentViewHeightWithoutLimit;
- (double)contentViewHeight;
- (BOOL)shouldDisplayAppealButton;
- (long long)getActionButtonStyle;
- (void)updateMsgBoxInfo:(id)arg1;
- (id)contentView;
- (id)bodyScrollView;
- (id)scrollContentView;
- (id)icon;
- (id)contentLabel;
- (id)titleLabel;
- (id)actionButton;
- (id)appealButton;
- (void)actionButtonClick;
- (void)appealButtonClick;
- (void)pageSheetWillDisappear;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)msgBox;
- (void)setMsgBox:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setBodyScrollView:(id)arg1;
- (void)setScrollContentView:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setAppealButton:(id)arg1;
- (void).cxx_destruct;
@end
