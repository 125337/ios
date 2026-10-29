@interface MMFinderLiveConnectedMicBaseAudienceCellView : MMFinderLiveConnectedMicBaseUserCellView
{
    BOOL _shouldExpandDesc; // +0x48
    NSString * _subTitle; // +0x50
    MMFinderLiveGroupedBadgeView * _badgeView; // +0x58
    UILabel * _descLabel; // +0x60
    UILabel * _warningLabel; // +0x68
    UIImageView * _wecoinImageView; // +0x70
    unsigned long long _price; // +0x78
    NSString * _descText; // +0x80
    MMFinderLiveTrailingButtonTextView * _trailingButtonTextView; // +0x88
}
+ (id)ReuseIdentifier;
+ (id)genDescLabel;
+ (id)getStyleWithExpand:(BOOL)arg1;
- (void)resetState;
- (void)layoutSubviews;
- (BOOL)shouldHideFansGroupBadges;
- (void)configBadgeView;
- (void)configNickNameLabelWithSearchText:(id)arg1;
- (void)updateRightButton;
- (void)updateWithConnectMicUser:(id)arg1 searchText:(id)arg2 subTitle:(id)arg3;
- (void)configSubTitleLabel;
- (void)configDescLabel;
- (void)configWarningLabelWithText:(id)arg1;
- (void)configWecoinImageView;
- (void)layoutUI;
- (BOOL)showWecoinIconBeforeSubtitle;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)warningLabel;
- (void)setWarningLabel:(id)arg1;
- (id)wecoinImageView;
- (void)setWecoinImageView:(id)arg1;
- (unsigned long long)price;
- (void)setPrice:(unsigned long long)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (BOOL)shouldExpandDesc;
- (void)setShouldExpandDesc:(BOOL)arg1;
- (id)trailingButtonTextView;
- (void)setTrailingButtonTextView:(id)arg1;
- (void).cxx_destruct;
@end
