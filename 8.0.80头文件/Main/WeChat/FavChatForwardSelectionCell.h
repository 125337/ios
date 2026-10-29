@interface FavChatForwardSelectionCell : UITableViewCell <UIGestureRecognizerDelegate>
{
    MMFavCellComponent * _favComponent; // +0x8
    UIView * _cardView; // +0x10
    UIView * _contentLayoutView; // +0x18
    UIView * _dividerView; // +0x20
    MMUIButton * _removeButton; // +0x28
    double _contentLayoutWidth; // +0x30
    id /* block */ _removeHandler; // +0x38
    id /* block */ _openDetailHandler; // +0x40
}
+ (double)dividerWidth;
+ (double)contentWidthForCellWidth:(double)arg1;
+ (id)favItemForSelectedItem:(id)arg1;
+ (id)componentForSelectedItem:(id)arg1 delegate:(id)arg2;
+ (double)heightForSelectedItem:(id)arg1 contentWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)configureWithSelectedItem:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)onRemoveButtonClicked;
- (void)onCardTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)favComponent;
- (void)setFavComponent:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)contentLayoutView;
- (void)setContentLayoutView:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)removeButton;
- (void)setRemoveButton:(id)arg1;
- (double)contentLayoutWidth;
- (void)setContentLayoutWidth:(double)arg1;
- (id /* block */)removeHandler;
- (void)setRemoveHandler:(id /* block */)arg1;
- (id /* block */)openDetailHandler;
- (void)setOpenDetailHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
