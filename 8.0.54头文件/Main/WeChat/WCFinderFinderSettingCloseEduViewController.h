@interface WCFinderFinderSettingCloseEduViewController : MMUIViewController
{
    id /* block */ _closeBlock; // +0x68
    id <WCFinderFinderSettingCloseEduViewControllerDelegate> _delegate; // +0x70
    UIImageView * _errImageView; // +0x78
    UILabel * _titleLabel; // +0x80
    RichTextView * _descTextView; // +0x88
    UIButton * _closeButton; // +0x90
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

