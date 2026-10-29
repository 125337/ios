@interface MsgBrowserCell : MMMsgFileBrowseMenuAndMemuTableViewCell
{
    UIView * _contentCardView; // +0x40
    BOOL _isEditing; // +0x48
    BOOL _isChecked; // +0x49
    id <MsgBrowserCellMenuDelegate> _wxMenuDelegate; // +0x50
    NSArray * _menuActionTypes; // +0x58
    MMWebImageView * _thumbView; // +0x60
    MMUILabel * _titleLabel; // +0x68
    MMUILabel * _subtitleLabel1; // +0x70
    MMUILabel * _subtitleLabel2; // +0x78
    MMUILabel * _timeLabel; // +0x80
    UIImageView * _checkbox; // +0x88
}
+ (CGSize)thumbSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)setupUILayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)setupMenuItems;
- (id)getArrMemuItemForRowAtIndexPath:(id)arg1;
- (void)setupWXLongPressMenu;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onWXLongPress:(id)arg1;
- (id)wxMenuItemForActionType:(unsigned long long)arg1;
- (void)onLocate;
- (void)onForward;
- (void)onFavorite;
- (void)onDelete;
- (void)onMultiSelect;
- (void)resetAll;
- (void)setThumbImage:(id)arg1;
- (void)setThumbDefaultImage:(id)arg1 url:(id)arg2;
- (void)setTitleText:(id)arg1 searchKeyword:(id)arg2;
- (void)setSubtitle1Text:(id)arg1;
- (void)setSubtitle2Text:(id)arg1;
- (void)setTimeText:(id)arg1;
- (void)setIsEditing:(BOOL)arg1;
- (void)setIsChecked:(BOOL)arg1;
- (id)lineHeightAttributesForLabel:(id)arg1;
- (void)applyText:(id)arg1 toLabel:(id)arg2;
- (id)highlightedAttributedString:(id)arg1 keyword:(id)arg2 toLabel:(id)arg3;
- (id)wxMenuDelegate;
- (void)setWxMenuDelegate:(id)arg1;
- (id)menuActionTypes;
- (void)setMenuActionTypes:(id)arg1;
- (id)thumbView;
- (id)titleLabel;
- (id)subtitleLabel1;
- (id)subtitleLabel2;
- (id)timeLabel;
- (BOOL)isEditing;
- (BOOL)isChecked;
- (id)checkbox;
- (void)setCheckbox:(id)arg1;
- (void).cxx_destruct;
@end
