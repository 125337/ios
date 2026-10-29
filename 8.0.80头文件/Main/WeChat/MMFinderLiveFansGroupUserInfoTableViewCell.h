@interface MMFinderLiveFansGroupUserInfoTableViewCell : MMFinderLiveFansGroupAnchorEditTableCellBase
{
    BOOL _smallStyle; // +0x8
    BOOL _isCurrentRole; // +0x9
    WCFinderHeadImageView * _headerImageView; // +0x10
    UILabel * _nameLabel; // +0x18
    UILabel * _descLabel; // +0x20
    UILabel * _currentRoleTipLabel; // +0x28
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x30
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)layoutSubviews;
- (void)configWithName:(id)arg1 desc:(id)arg2 headerUrl:(id)arg3 circleHeader:(BOOL)arg4;
- (void)configWithName:(id)arg1 desc:(id)arg2 headerUrl:(id)arg3 circleHeader:(BOOL)arg4 fansGroupName:(id)arg5 fansGroupBadge:(id)arg6;
- (void)setSmallStyle:(BOOL)arg1;
- (void)updateStyle;
- (void)setIsCurrentRole:(BOOL)arg1;
- (BOOL)smallStyle;
- (BOOL)isCurrentRole;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)currentRoleTipLabel;
- (void)setCurrentRoleTipLabel:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (void).cxx_destruct;
@end
