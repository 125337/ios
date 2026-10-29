@interface WCGroupUndoneEduWindow : MMWindowViewController <WCGroupUndoneEduViewDelegate>
{
    id <WCGroupUndoneEduViewDelegate> _undoneDelegate; // +0x78
    WCGroupUndoneEduView * _contentView; // +0x80
    UIButton * _backgroundBtn; // +0x88
}
- (id)init;
- (void)viewDidLoad;
- (void)setupViews;
- (void)viewDidLayoutSubviews;
- (void)onGUEClose:(id)arg1;
- (void)onGUEConfirm:(id)arg1;
- (id)undoneDelegate;
- (void)setUndoneDelegate:(id)arg1;
- (id)contentView;
- (id)backgroundBtn;
- (void)setBackgroundBtn:(id)arg1;
- (void).cxx_destruct;
@end

