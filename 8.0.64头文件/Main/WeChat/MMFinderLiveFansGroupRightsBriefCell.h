@interface MMFinderLiveFansGroupRightsBriefCell : MMFinderLiveFansGroupDetailBaseTableViewCell
{
    id /* block */ _onUnsubscribe; // +0x10
    MMUIButton * _unsubscribeButton; // +0x18
    MMUILabel * _detailLabel; // +0x20
}
+ (id)detailText;
+ (id)detailFont;
+ (double)layoutPadding;
+ (double)cellHeightWithMaxWidth:(double)arg1 showUnsubscribeSuperfanButton:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)setShowUnsubscribeSuperfanButton:(BOOL)arg1;
- (void)unsubscribeSuperfanButtonClicked;
- (void)layoutSubviews;
- (id /* block */)onUnsubscribe;
- (void)setOnUnsubscribe:(id /* block */)arg1;
- (id)unsubscribeButton;
- (void)setUnsubscribeButton:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end
