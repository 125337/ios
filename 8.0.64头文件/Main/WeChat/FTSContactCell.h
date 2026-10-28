@interface FTSContactCell : MMTableViewCell
{
    CContact * _contact; // +0x8
    SearchMatchTip * _matchTip; // +0x10
    MMBrandHeadImageView * _brandHeadImageView; // +0x18
    MMHeadImageView * _headImageView; // +0x20
    MMImageView * _iconNamePostfix; // +0x28
    MMUILabel * _labelNamePostfix; // +0x30
    AttributeLabel * _displayNameLabel; // +0x38
    AttributeLabel * _detailLabel; // +0x40
    MMUILabel * _appTypeLabel; // +0x48
    BOOL _bAsTopHit; // +0x50
    WCTagsView * _tagsView; // +0x58
    UIImageView * _maskView; // +0x60
    UIImage * m_defaultOpenimGroupIcon; // +0x68
    BOOL _bIsDisplayCenter; // +0x70
    double _preferHeadImageLen; // +0x78
    TextStateItemView * _textStateView; // +0x80
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)prepareForReuse;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)getTopHitDescrpition;
- (void)updateStatus:(BOOL)arg1;
- (void)updateIconNamePostfix;
- (void)updateContact:(id)arg1 matchTip:(id)arg2;
- (void)updateContact:(id)arg1 matchTip:(id)arg2 asTopHit:(BOOL)arg3;
- (void)layoutSubviews;
- (id)contact;
- (double)preferHeadImageLen;
- (void)setPreferHeadImageLen:(double)arg1;
- (BOOL)bIsDisplayCenter;
- (void)setBIsDisplayCenter:(BOOL)arg1;
- (id)textStateView;
- (void)setTextStateView:(id)arg1;
- (void).cxx_destruct;
@end
