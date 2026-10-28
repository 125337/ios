@interface ShakeTableViewCell : MMTableViewCell
{
    UILabel * m_nickNameLabel; // +0x8
    UILabel * m_personalRemarkLabel; // +0x10
    UILabel * m_distanceLabel; // +0x18
    UILabel * m_addedLabel; // +0x20
    UIImageView * m_genderImageView; // +0x28
    UIImageView * m_remarkBKImage; // +0x30
    UIView * m_headerView; // +0x38
}
- (BOOL)isInMyContactList:(id)arg1;
- (void)initSubviews;
- (void)updateWithLbsContactInfo:(id)arg1 withHeaderView:(id)arg2;
- (void)hideSubViews;
- (void).cxx_destruct;
@end
