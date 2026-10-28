@interface WCFinderFinderSettingCloseEduViewController : MMUIViewController
{
    id /* block */ _closeBlock; // +0x70
    id <WCFinderFinderSettingCloseEduViewControllerDelegate> _delegate; // +0x78
    UIImageView * _errImageView; // +0x80
    UILabel * _titleLabel; // +0x88
    RichTextView * _descTextView; // +0x90
    UIButton * _closeButton; // +0x98
}
- (id)errImageView;
- (id)titleLabel;
- (id)descTextView;
- (id)closeButton;
- (void)viewDidLoad;
- (void)onClickCloseAction;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setErrImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescTextView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
