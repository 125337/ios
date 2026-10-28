@interface MMFinderLiveConnectedMicBaseAudienceCellView : MMFinderLiveConnectedMicBaseUserCellView
{
    BOOL _shouldExpandDesc; // +0x48
    id /* block */ _expandStateShouldChange; // +0x50
    NSString * _subTitle; // +0x58
    MMFinderLiveGroupedBadgeView * _badgeView; // +0x60
    UILabel * _descLabel; // +0x68
    UILabel * _warningLabel; // +0x70
    UIImageView * _wecoinImageView; // +0x78
    unsigned long long _price; // +0x80
    NSString * _descText; // +0x88
    MMFinderLiveTrailingButtonTextView * _trailingButtonTextView; // +0x90
}
+ (id)ReuseIdentifier;
+ (double)cellHeightWithDescText:(id)arg1 expandDescIfNeeded:(BOOL)arg2 cellWidth:(double)arg3;
+ (id)genDescLabel;
+ (id)getStyleWithExpand:(BOOL)arg1;
- (void)resetState;
- (void)layoutSubviews;
- (void)configBadgeView;
- (void)configNickNameLabelWithSearchText:(id)arg1;
- (void)updateRightButton;
- (void)updateWithConnectMicUser:(id)arg1 searchText:(id)arg2 subTitle:(id)arg3;
- (void)updateWithPaidPrice:(unsigned long long)arg1 descText:(id)arg2 warningText:(id)arg3 expandDescIfNeeded:(BOOL)arg4;
- (void)configSubTitleLabel;
- (void)configDescLabel;
- (void)configWarningLabelWithText:(id)arg1;
- (void)configWecoinImageView;
- (void)layoutUI;
- (BOOL)showWecoinIconBeforeSubtitle;
- (id /* block */)expandStateShouldChange;
- (void)setExpandStateShouldChange:(id /* block */)arg1;
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
