@interface PeopleNearByItemTableViewCell : MMTableViewCell
{
    UILabel * m_nickNameLabel; // +0x8
    UILabel * m_personalRemarkLabel; // +0x10
    UILabel * m_remarkContainer; // +0x18
    UILabel * m_distanceLabel; // +0x20
    UILabel * m_addedLabel; // +0x28
    UIImageView * m_genderImageView; // +0x30
    UIImageView * m_remarkBKImage; // +0x38
    UIView * m_headerView; // +0x40
    UIImageView * m_albumFlagView; // +0x48
    BOOL m_showGenderIcon; // +0x50
    long long m_iAlbumFlag; // +0x58
    unsigned int m_certificationFlag; // +0x60
    int m_sex; // +0x64
    MMHeadImageView * m_imageView; // +0x68
    UIImageView * _finderFlagView; // +0x70
    unsigned long long _finderFlag; // +0x78
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)updateWithLbsContactInfo:(id)arg1 withHeaderView:(id)arg2;
- (void)updateConstraints;
- (BOOL)showGenderIcon;
- (void)setShowGenderIcon:(BOOL)arg1;
- (id)finderFlagView;
- (void)setFinderFlagView:(id)arg1;
- (unsigned long long)finderFlag;
- (void)setFinderFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

