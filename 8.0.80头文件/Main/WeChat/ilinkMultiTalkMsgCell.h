@interface ilinkMultiTalkMsgCell : MMBaseMultiMenuTableViewCell
{
    id <ilinkMultiTalkMsgCellDeleagte> _msgCellDelegate; // +0x38
    MultiTalkHDHeadView * _headImageView; // +0x40
    UILabel * _userNameLable; // +0x48
    UILabel * _descLabel; // +0x50
    ilinkConfSDKMember * _member; // +0x58
    UIView * _lineView; // +0x60
}
- (void)updateContentWithMsgContact:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)msgCellDelegate;
- (void)setMsgCellDelegate:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)userNameLable;
- (void)setUserNameLable:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)member;
- (void)setMember:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
