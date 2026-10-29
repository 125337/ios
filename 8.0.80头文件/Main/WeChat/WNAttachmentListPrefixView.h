@interface WNAttachmentListPrefixView : WNAttachmentBaseView
{
    UIButton * _checkBtn; // +0x8
    UILabel * _listLabel; // +0x10
}
- (void)onClickObject;
- (void)layoutView;
- (void)checkBtnClicked;
- (void)updateCheck;
- (id)checkBtn;
- (void)setCheckBtn:(id)arg1;
- (id)listLabel;
- (void)setListLabel:(id)arg1;
- (void).cxx_destruct;
@end
