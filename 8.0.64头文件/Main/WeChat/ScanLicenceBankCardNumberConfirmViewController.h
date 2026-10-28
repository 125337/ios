@interface ScanLicenceBankCardNumberConfirmViewController : MMUIViewController <MMTableViewInfoDelegate, UIScrollViewDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    BOOL _didRenderViews; // +0x78
    id <ScanLicenceBankCardNumberConfirmViewControllerDelegate> _m_delegate; // +0x80
    NSString * _cardNumStr; // +0x88
    UIImage * _cardImage; // +0x90
    ScanLicenceBankCardEditView * _editBankNumView; // +0x98
    UIImageView * _cardImageView; // +0xa0
    MMUILabel * _label; // +0xa8
}
- (void)onCancel;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupViewsIfNeed;
- (id)getContainerView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)confirmAction:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)cardNumStr;
- (void)setCardNumStr:(id)arg1;
- (id)cardImage;
- (void)setCardImage:(id)arg1;
- (id)editBankNumView;
- (void)setEditBankNumView:(id)arg1;
- (id)cardImageView;
- (void)setCardImageView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
