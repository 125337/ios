@interface BrandProfileFriendsLoveBoundaryCell : UITableViewCell
{
    id <BrandProfileFriendsLoveBoundaryCellDelegate> _delegate; // +0x8
    BrandProfileFriendsLoveBoundarySectionData * _sectionData; // +0x10
    UIView * _leftLineView; // +0x18
    UIView * _rightLineView; // +0x20
    UILabel * _wordingLabel; // +0x28
    UIImageView * _heartImageView; // +0x30
    UIButton * _settingsButton; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSectionData:(id)arg1;
- (void)layoutSubviews;
- (void)onSettingsButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sectionData;
- (id)leftLineView;
- (void)setLeftLineView:(id)arg1;
- (id)rightLineView;
- (void)setRightLineView:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)heartImageView;
- (void)setHeartImageView:(id)arg1;
- (id)settingsButton;
- (void)setSettingsButton:(id)arg1;
- (void).cxx_destruct;
@end
