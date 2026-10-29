@interface WCMktTicketAndCertEntryCell : MMTableViewCell
{
    WCPayWebImageView * _iconImgView; // +0x8
    MMUILabel * _leftLabel; // +0x10
    MMUILabel * _rightLabel; // +0x18
    UIImageView * _rightArrowImgView; // +0x20
    UIView * _seplineView; // +0x28
    MMBadgeView * _badgeView; // +0x30
    UIImageView * _redDotImageView; // +0x38
    UIView * _highlightView; // +0x40
    CardHomePageTopCell * _topCellData; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateContentWithData:(id)arg1 hasSepline:(BOOL)arg2;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)leftLabel;
- (void)setLeftLabel:(id)arg1;
- (id)rightLabel;
- (void)setRightLabel:(id)arg1;
- (id)rightArrowImgView;
- (void)setRightArrowImgView:(id)arg1;
- (id)seplineView;
- (void)setSeplineView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)redDotImageView;
- (void)setRedDotImageView:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (id)topCellData;
- (void)setTopCellData:(id)arg1;
- (void).cxx_destruct;
@end

