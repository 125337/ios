@interface MMLiveActionSheetCollectionCell : UICollectionViewCell
{
    BOOL _disableInnerRedDotLogic; // +0x8
    MMUIButton * _itemButton; // +0x10
    MMUILabel * _itemNameLabel; // +0x18
    MMUILabel * _itemSubtitleLabel; // +0x20
    MMScrollActionSheetItem * _actionSheetItem; // +0x28
    id <MMLiveActionSheetCollectionCellDelegate> _cellDelegate; // +0x30
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithActionSheetItem:(id)arg1;
- (void)updateItemButtonColor;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)updateRedDot;
- (void)onTaped;
- (id)itemButton;
- (void)setItemButton:(id)arg1;
- (id)itemNameLabel;
- (void)setItemNameLabel:(id)arg1;
- (id)itemSubtitleLabel;
- (void)setItemSubtitleLabel:(id)arg1;
- (id)actionSheetItem;
- (void)setActionSheetItem:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (BOOL)disableInnerRedDotLogic;
- (void)setDisableInnerRedDotLogic:(BOOL)arg1;
- (void).cxx_destruct;
@end
