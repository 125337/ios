@interface BTMissedSubsHeaderCell : BTBaseItemCellView
{
    BOOL _forceHighlight; // +0x8
    MMHeadImageView * _headView; // +0x10
    MMUILabel * _nameLabel; // +0x18
    UIImageView * _starView; // +0x20
    BrandLiveStatusButton * _liveButton; // +0x28
    MMUILabel * _descLabel; // +0x30
    UILongPressGestureRecognizer * _longPressGest; // +0x38
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)configureLayout;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (id)headView;
- (id)nameLabel;
- (id)descLabel;
- (void)updateCellOnPageAppear;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forceSetHighlighted:(BOOL)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)setHeadView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (id)starView;
- (void)setStarView:(id)arg1;
- (id)liveButton;
- (void)setLiveButton:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (id)longPressGest;
- (void)setLongPressGest:(id)arg1;
- (BOOL)forceHighlight;
- (void)setForceHighlight:(BOOL)arg1;
- (void).cxx_destruct;
@end

