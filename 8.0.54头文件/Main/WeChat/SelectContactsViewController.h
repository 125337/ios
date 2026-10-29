@interface SelectContactsViewController : MMUIViewController <SelectContactsViewControllerDelegate, ContactSelectViewDelegate, SelectOpenIMContactsViewControllerDelegate>
{
    id <SelectContactsViewControllerDelegate> m_delegate; // +0x68
    UIView * m_titleView; // +0x70
    unsigned int m_uiScene; // +0x78
    ContactSelectView * m_selectView; // +0x80
    BOOL _enableInteractiveDismiss; // +0x88
    NSString * _m_nsViewControllerTitle; // +0x90
    NSMutableDictionary * _dicExistContact; // +0x98
}
- (id)init;
- (BOOL)shouldInteractiveDismiss;
- (void)onCancelBack:(id)arg1;
- (void)initTitleArea;
- (void)initView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)onSelectOpenIMContactReturn:(id)arg1;
- (void)onSelectBrandContact;
- (void)onSelectOpenIMGroup;
- (void)onSelectContact:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (BOOL)hideFavourContactCandidate;
- (id)getSafeSearchViewController;
- (void)onExistContactDidSelected:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)m_nsViewControllerTitle;
- (void)setM_nsViewControllerTitle:(id)arg1;
- (id)dicExistContact;
- (void)setDicExistContact:(id)arg1;
- (BOOL)enableInteractiveDismiss;
- (void)setEnableInteractiveDismiss:(BOOL)arg1;
- (void).cxx_destruct;
@end

