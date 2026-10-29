@interface WCAdFinderDialogBaseView : MMUIView
{
    WCAdFinderDialogBaseInfo * _dialogInfo; // +0x8
    WCAdURLImageView * _iconView; // +0x10
    MMUILabel * _titleView; // +0x18
    UIButton * _confirmButton; // +0x20
    id <WCAdFinderDialogBaseViewDelegate> _delegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 dialogInfo:(id)arg2;
- (void)generateViews;
- (void)layoutSubviews;
- (id)iconView;
- (id)titleView;
- (id)confirmButton;
- (void)onConfirmButtonClicked:(id)arg1;
- (void)doConfirmButtonClick;
- (id)dialogInfo;
- (void)setDialogInfo:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

