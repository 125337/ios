@interface WCPayBottomPanelView : UIView
{
    id <WCPayBottomPanelViewDelegate> _delegate; // +0x8
    NSString * _title; // +0x10
    NSString * _btnTitle; // +0x18
    UIView * _detailView; // +0x20
    UIView * _backgroundView; // +0x28
    UIView * _contentView; // +0x30
}
- (id)initPanelViewWithTitle:(id)arg1 detailView:(id)arg2 confirmBtnTitle:(id)arg3;
- (void)setupContentView;
- (id)backgroundView;
- (id)contentView;
- (void)handleTap;
- (void)confirmBtnClick;
- (void)showInView:(id)arg1;
- (void)dismiss;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)btnTitle;
- (void)setBtnTitle:(id)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
