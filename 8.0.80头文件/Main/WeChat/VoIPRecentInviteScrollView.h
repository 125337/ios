@interface VoIPRecentInviteScrollView : UIView <VoIPRecentInviteItemViewDelegate>
{
    BOOL _isEditingMode; // +0x8
    id <VoIPRecentInviteScrollViewDelegate> _delegate; // +0x10
    NSSet * _existContactUserNames; // +0x18
    NSSet * _disabledContactUserNames; // +0x20
    double _iconWidth; // +0x28
    double _iconMargin; // +0x30
    UILabel * _titleLabel; // +0x38
    UIView * _scrollViewContainer; // +0x40
    UIScrollView * _scrollView; // +0x48
    NSMutableArray * _itemViews; // +0x50
    NSArray * _allContacts; // +0x58
    NSSet * _filteredUserNames; // +0x60
    MMUIButton * _deleteButton; // +0x68
    MMUIView * _finishButtonContainer; // +0x70
    MMUIButton * _finishButton; // +0x78
    CContact * _longPressContact; // +0x80
}
+ (BOOL)hasRecentInviteData;
+ (BOOL)isRecentInviteExperimentEnabled;
+ (long long)recentInviteTotalCount;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)reloadData;
- (void)updateSelectionForUserName:(id)arg1 selected:(BOOL)arg2;
- (void)updateSelectionWithSelectedUserNames:(id)arg1;
- (long long)numberOfDisplayedContacts;
- (void)forceFinishEditingMode;
- (void)rebuildView;
- (void)initDeleteButton;
- (void)initFinishButton;
- (void)onItemTap:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onItemLongPress:(id)arg1;
- (void)onMenuDeleteItem;
- (void)deleteContact:(id)arg1;
- (void)deleteContactAnimation;
- (id)genScrollViewContainerMaskLayer:(CGRect)arg1;
- (void)onClickDeleteButton;
- (void)enterEditingModeAnimation;
- (void)onClickFinishButton;
- (void)finishEditingMode;
- (void)exitEditingModeAnimation;
- (BOOL)isInEditingMode;
- (void)didClickSmallDeleteButton:(id)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)existContactUserNames;
- (void)setExistContactUserNames:(id)arg1;
- (id)disabledContactUserNames;
- (void)setDisabledContactUserNames:(id)arg1;
- (double)iconWidth;
- (void)setIconWidth:(double)arg1;
- (double)iconMargin;
- (void)setIconMargin:(double)arg1;
- (BOOL)isEditingMode;
- (void)setIsEditingMode:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)scrollViewContainer;
- (void)setScrollViewContainer:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)allContacts;
- (void)setAllContacts:(id)arg1;
- (id)filteredUserNames;
- (void)setFilteredUserNames:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)finishButtonContainer;
- (void)setFinishButtonContainer:(id)arg1;
- (id)finishButton;
- (void)setFinishButton:(id)arg1;
- (id)longPressContact;
- (void)setLongPressContact:(id)arg1;
- (void).cxx_destruct;
@end
