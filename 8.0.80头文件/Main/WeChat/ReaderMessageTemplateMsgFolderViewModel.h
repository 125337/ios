@interface ReaderMessageTemplateMsgFolderViewModel : BaseMessageViewModel
{
    BaseMessageViewModel * _viewModel; // +0x60
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)messageFolder;
- (double)calcuateWidth;
- (double)calcuateHeight;
- (double)collapsedHeight;
- (double)expandedHeight;
- (double)expandedVertialSpacing;
- (double)collapsedVertialSpacing;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (void)resetLayoutCache;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
