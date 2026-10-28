@interface MMLiveHalfScreenNoticeView : MMPageSheetBaseView
{
    id /* block */ _completeBlock; // +0x8
    FinderLiveMsgBoxInfo * _msgBox; // +0x10
    UIView * _contentView; // +0x18
    MMWebImageView * _icon; // +0x20
    MMUILabel * _contentLabel; // +0x28
    UIButton * _actionButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (double)getContentHeight;
- (double)getDefaultHeight;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)updateMsgBoxInfo:(id)arg1;
- (id)contentView;
- (id)icon;
- (id)contentLabel;
- (id)actionButton;
- (void)cancelButtonClick;
- (void)pageSheetWillDisappear;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (id)msgBox;
- (void)setMsgBox:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
