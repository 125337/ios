@interface MMFinderLiveFansGroupMemberTableSectionHeaderView : UIView
{
    BOOL _shouldAdaptToDarkLight; // +0x8
    BOOL _isAnchor; // +0x9
    unsigned int _fansGroupMemCount; // +0xc
    id /* block */ _onMemberTitleClicked; // +0x10
    id /* block */ _onWarmTitleClicked; // +0x18
    MMUILabel * _fansGroupMemCountLabel; // +0x20
    MMUILabel * _fansGroupWarmHeartLabel; // +0x28
    UIImageView * _memberArrowImageView; // +0x30
    UIImageView * _warmArrowImageView; // +0x38
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1 isAnchor:(BOOL)arg2;
- (void)initTapGesture;
- (void)onSelfTapped:(id)arg1;
- (void)updateMemberTitle:(id)arg1 showExpandArrow:(BOOL)arg2;
- (void)updateWarmTitle:(id)arg1 showExpandArrow:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutFansGroupMemCountLabel;
- (void)updateFansGroupMemCountOrigin;
- (void)layoutFansGroupWarnHeartLabel;
- (id /* block */)onMemberTitleClicked;
- (void)setOnMemberTitleClicked:(id /* block */)arg1;
- (id /* block */)onWarmTitleClicked;
- (void)setOnWarmTitleClicked:(id /* block */)arg1;
- (unsigned int)fansGroupMemCount;
- (void)setFansGroupMemCount:(unsigned int)arg1;
- (id)fansGroupMemCountLabel;
- (void)setFansGroupMemCountLabel:(id)arg1;
- (id)fansGroupWarmHeartLabel;
- (void)setFansGroupWarmHeartLabel:(id)arg1;
- (BOOL)shouldAdaptToDarkLight;
- (void)setShouldAdaptToDarkLight:(BOOL)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (id)memberArrowImageView;
- (void)setMemberArrowImageView:(id)arg1;
- (id)warmArrowImageView;
- (void)setWarmArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
