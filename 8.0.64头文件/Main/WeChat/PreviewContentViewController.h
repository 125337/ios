@interface PreviewContentViewController : BaseMsgContentViewController
{
    id <PreviewContentViewControllerDelegate> _m_previewContentVCDelegate; // +0x1e0
    NSString * _curAuthorID; // +0x1e8
}
- (void)viewDidLoad;
- (void)tapAppNodeView:(id)arg1;
- (id)getLeftBarButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)ReloadView;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)autoClickPreviewBubble;
- (id)m_previewContentVCDelegate;
- (void)setM_previewContentVCDelegate:(id)arg1;
- (id)curAuthorID;
- (void)setCurAuthorID:(id)arg1;
- (void).cxx_destruct;
@end
