@interface BTMissedSubsHeaderViewModel : BTBaseRecommendMsgCellViewModel
{
    BTRecommendAccountData * _accountData; // +0x28
}
- (id)itemViewClassName;
- (BOOL)isShowTimeMode;
- (id)descStr;
- (id)contact;
- (double)viewHeight;
- (void)updateCellHeight:(double)arg1;
- (id)accountData;
- (void)setAccountData:(id)arg1;
- (void).cxx_destruct;
@end
