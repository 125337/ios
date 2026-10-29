@interface OpenIMSocialInfomationViewController : SocialInfomationViewController
{
    CContact * m_contact; // +0x78
    NSString * _m_customerTitle; // +0x80
}
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)makeOpenIMNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)onOpenIMNormalClicked:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_customerTitle;
- (void)setM_customerTitle:(id)arg1;
- (void).cxx_destruct;
@end

