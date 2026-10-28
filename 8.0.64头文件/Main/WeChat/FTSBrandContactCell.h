@interface FTSBrandContactCell : MMMultiMenuTableViewCell
{
    BOOL _bHideCerIcon; // +0x40
    BOOL _bAsTopHit; // +0x41
    BOOL _bShouldHighlight; // +0x42
    NSString * _searchText; // +0x48
    CContact * _contact; // +0x50
    AttributeLabel * _displayNameLabel; // +0x58
    AttributeLabel * _detailLabel; // +0x60
    double _cellHeight; // +0x68
    SearchMatchTip * _matchTip; // +0x70
    NSArray * _arrKeyword; // +0x78
    MMBrandHeadImageView * _brandHeadImageView; // +0x80
    UIView * _lineView; // +0x88
    WCTagsView * _tagsView; // +0x90
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)setContextMenuEnabled:(BOOL)arg1;
- (void)updateContact:(id)arg1;
- (void)updateContact:(id)arg1 matchTip:(id)arg2 searchText:(id)arg3 keywords:(id)arg4 asTopHit:(BOOL)arg5;
- (void)updateStatus;
- (id)getTopHitDescrpition;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (BOOL)bHideCerIcon;
- (void)setBHideCerIcon:(BOOL)arg1;
- (id)matchTip;
- (void)setMatchTip:(id)arg1;
- (id)arrKeyword;
- (void)setArrKeyword:(id)arg1;
- (id)brandHeadImageView;
- (void)setBrandHeadImageView:(id)arg1;
- (BOOL)bAsTopHit;
- (void)setBAsTopHit:(BOOL)arg1;
- (BOOL)bShouldHighlight;
- (void)setBShouldHighlight:(BOOL)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)tagsView;
- (void)setTagsView:(id)arg1;
- (void).cxx_destruct;
@end
