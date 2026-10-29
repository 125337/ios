@interface WCRedEnvelopesExpiredSkinEntryCollectionViewCell : UICollectionViewCell
{
    BOOL _isSmallMode; // +0x8
    id <WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate> _m_delegate; // +0x10
    UIView * _entryBackgroungView; // +0x18
    UIImageView * _iconImageView; // +0x20
    UIView * _entryArea; // +0x28
    UILabel * _entryAreaLabel; // +0x30
    UIImageView * _arrowImageView; // +0x38
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateView:(BOOL)arg1;
- (void)updateBackgroundView;
- (void)onGotoExpiredSkinEntry;
- (void)onTapActivityEntry:(id)arg1;
- (void)onLongActivityEntry:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)entryBackgroungView;
- (void)setEntryBackgroungView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)entryArea;
- (void)setEntryArea:(id)arg1;
- (id)entryAreaLabel;
- (void)setEntryAreaLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (BOOL)isSmallMode;
- (void)setIsSmallMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

