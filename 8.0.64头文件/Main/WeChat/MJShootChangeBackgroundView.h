@interface MJShootChangeBackgroundView : UIView
{
    id <MJShootChangeBackgroundViewDelegate> _delegate; // +0x8
    MMUIButton * _changeButton; // +0x10
    MMUIButton * _deleteButton; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupView;
- (void)changeButtonDidTouchUpInside:(id)arg1;
- (void)deleteButtonDidTouchUpInside:(id)arg1;
- (void)showDeleteEntry;
- (void)hideDeleteEntry;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)changeButton;
- (void)setChangeButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (void).cxx_destruct;
@end
