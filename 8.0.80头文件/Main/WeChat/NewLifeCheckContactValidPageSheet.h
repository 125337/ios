@interface NewLifeCheckContactValidPageSheet : MMPageSheetBaseView <WCFinderCreateUserViewControllerDelegate>
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failureBlock; // +0x10
    WCFinderPersonalCenterViewModel * _viewModel; // +0x18
    NSString * _finderUsername; // +0x20
    RequestContactReq * _req; // +0x28
    UIView * _containerView; // +0x30
    UILabel * _titleLabel; // +0x38
    UILabel * _subtitleLabel; // +0x40
    UIView * _topLine; // +0x48
    UIView * _centerView; // +0x50
    UIImageView * _addImageView; // +0x58
    WCFinderHeadImageView * _headImageView; // +0x60
    UILabel * _nameLabel; // +0x68
    UIView * _bottomLine; // +0x70
    UIButton * _doneButton; // +0x78
    UIButton * _cancelButton; // +0x80
}
- (id)initWithScene:(id)arg1;
- (void)initData;
- (void)initSubviews;
- (void)updateLayout;
- (double)contentHeight;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)pageSheetWillAppear;
- (void)onDone;
- (void)onCancel;
- (void)onJumpCreateFinderContact;
- (void)createUserFinished:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)req;
- (void)setReq:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)centerView;
- (void)setCenterView:(id)arg1;
- (id)addImageView;
- (void)setAddImageView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
