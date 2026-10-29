@interface MMLiveSyndicateManagementEntryView : UIView
{
    MMLiveSyndicateModel * _model; // +0x8
    UIImageView * _icon; // +0x10
    UILabel * _label; // +0x18
    MMLiveSyndicateMembersView * _membersView; // +0x20
    UIImageView * _rightChevronView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (id)model;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)membersView;
- (void)setMembersView:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (void).cxx_destruct;
@end
