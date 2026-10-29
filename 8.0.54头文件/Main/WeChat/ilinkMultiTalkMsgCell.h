@interface ilinkMultiTalkMsgCell : MMBaseMultiMenuTableViewCell
{
    MultiTalkHDHeadView * _headImageView; // +0x38
    UILabel * _userNameLable; // +0x40
    UILabel * _descLabel; // +0x48
    ilinkConfSDKMember * _member; // +0x50
    UIView * _lineView; // +0x58
}
- (void)updateContentWithMsgContact:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
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

