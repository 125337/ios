@interface BTReaderItemCellView : BTBaseItemCellView <WCActionSheetDelegate>
{
    BTRichTextTagView * m_titleView; // +0x8
    RichTextView * m_digestLabel; // +0x10
    MMWebImageView * m_coverImageView; // +0x18
    UIView * m_highlightMaskView; // +0x20
    UIView * m_separateLine; // +0x28
    MMUILabel * m_friendRelatedInfoLabel; // +0x30
    BOOL m_bIsForceHighlight; // +0x38
    CAGradientLayer * m_maskLayer; // +0x40
    unsigned int _itemIndex; // +0x48
    BTRichTextTagView * _titleView; // +0x50
    BTFinderRecommendRedPacketView * _redPacketView; // +0x58
}
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;
- (id)accessibilityLabel;
- (void)setViewModel:(id)arg1;
- (BOOL)isTopItem;
- (id)sectionData;
- (void)initHighlightMaskView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forceSetHighlighted:(BOOL)arg1;
- (void)initLongPressGesture;
- (void)initTopReaderItem;
- (void)initNormalReaderItem;
- (void)initSeparateLayer;
- (void)initCoverView;
- (id)getCoverImageView;
- (void)initTitleView;
- (void)initDigestLabel;
- (void)initFriendsReadLabel;
- (void)initRedPacketView;
- (void)initCoverMask;
- (void)onUpdateViewModel;
- (void)updateImage:(id)arg1 widthUrl:(id)arg2;
- (void)updateTitleView:(BOOL)arg1;
- (id)getTitleViewColor:(BOOL)arg1;
- (void)updatePaySubcribeTag;
- (void)updateCover:(BOOL)arg1;
- (void)updateDigestLabel;
- (void)updateFriendRelatedInfo;
- (void)resetRedPacketViewHidden;
- (id)getFriendRelatedInfoTextColor;
- (id)coverImageView;
- (id)titleLabel;
- (id)digestLabel;
- (id)friendRelatedInfoLabel;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)addCornerToContentView:(unsigned long long)arg1;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (void)handleLongPressEx:(id)arg1;
- (void)onBrandItemLongPress;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)handleMenuControllerWillShowNotification:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onDebug:(id)arg1;
- (void)showComfirmDeleteActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)forwardMenuItem;
- (id)favoriteMenuItem;
- (id)deleteMenuItem;
- (id)debugMenuItem;
- (unsigned int)itemIndex;
- (void)setItemIndex:(unsigned int)arg1;
- (id)titleView;
- (id)redPacketView;
- (void).cxx_destruct;
@end
