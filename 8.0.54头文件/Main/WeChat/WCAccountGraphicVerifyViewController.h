@interface WCAccountGraphicVerifyViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCAccountGraphicVerifyViewControllerDelegate> m_delegate; // +0x78
    MMUILabel * _titleLabel; // +0x80
    WCRedesignTextItem * _textItem; // +0x88
    UIImageView * _imageView; // +0x90
    MMUIButton * _refreshButton; // +0x98
    UIButton * _verifyButton; // +0xa0
}
- (void)setDelegate:(id)arg1;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initNavigationBar;
- (void)initView;
- (void)refreshViewWithData:(id)arg1;
- (void)checkNext;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)textItem;
- (void)setTextItem:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)refreshButton;
- (void)setRefreshButton:(id)arg1;
- (id)verifyButton;
- (void)setVerifyButton:(id)arg1;
- (void).cxx_destruct;
@end

