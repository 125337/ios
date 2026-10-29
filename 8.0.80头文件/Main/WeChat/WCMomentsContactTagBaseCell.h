@interface WCMomentsContactTagBaseCell : MMTableViewCell
{
    id /* block */ _detailCallback; // +0x8
}
- (id)genMemberLabel;
- (id)genRightDetailBtn;
- (id)getMemberDescWithTagData:(id)arg1;
- (long long)getMaxMemberCount;
- (void)onClickContactTagDetail:(id)arg1;
- (id /* block */)detailCallback;
- (void)setDetailCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
