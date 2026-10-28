@interface WCFinderStaticCoverInfoItemView : NSObject
{
    WCFinderStaticCoverInfoItem * _item; // +0x8
    UILabel * _labelView; // +0x10
    UIImageView * _iconView; // +0x18
    UIView * _seperateView; // +0x20
    UIView * _customView; // +0x28
}
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)ensureTextLabel;
- (void)ensureIconView;
- (void)setItem:(id)arg1;
- (void)updateIconPosition:(long long)arg1 container:(id)arg2;
- (void)updateSeperatorPositionWithContainer:(id)arg1;
- (void)setShowSeperate:(BOOL)arg1;
- (void)setShowSeperate:(BOOL)arg1 padding:(double)arg2;
- (BOOL)showSeperate;
- (id)item;
- (id)labelView;
- (void)setLabelView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)seperateView;
- (void)setSeperateView:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (void).cxx_destruct;
@end
