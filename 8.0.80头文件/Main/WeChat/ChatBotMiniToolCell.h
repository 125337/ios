@interface ChatBotMiniToolCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    BOOL _createToolCell; // +0x8
    BOOL _loadingTool; // +0x9
    BOOL _swipeEnabled; // +0xa
    BOOL _editEnabled; // +0xb
    BOOL _hasReddot; // +0xc
    BOOL _showSubtitle; // +0xd
    UIView * _clipView; // +0x10
    UIView * _frontContainer; // +0x18
    UIView * _highlightView; // +0x20
    MMWebImageView * _avatarView; // +0x28
    MMUILabel * _nameLabel; // +0x30
    UIImageView * _arrowView; // +0x38
    UIImageView * _plusIconView; // +0x40
    UIView * _loadingPlaceholderView; // +0x48
    MMUIActivityIndicatorView * _loadingIndicator; // +0x50
    MMUILabel * _loadingLabel; // +0x58
    UIView * _editIconView; // +0x60
    UIImageView * _editIconImageView; // +0x68
    UIView * _deleteIconView; // +0x70
    UIImageView * _deleteIconImageView; // +0x78
    UIView * _deleteExpandedView; // +0x80
    UIImageView * _expandedIconView; // +0x88
    MMUILabel * _expandedLabel; // +0x90
    long long _swipeState; // +0x98
    double _panStartX; // +0xa0
    id <ChatBotMiniToolCellDelegate> _swipeDelegate; // +0xa8
    UIView * _redDotView; // +0xb0
    MMUILabel * _subtitleLabel; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1;
- (double)iconAreaWidth;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureAsCreateToolCell;
- (void)updateDisplayWithToolInfo:(id)arg1 hasReddot:(BOOL)arg2;
- (void)handlePan:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateIconPositionsForOffset:(double)arg1;
- (void)animateToIconState;
- (void)animateToExpandedState;
- (void)resetSwipeAnimated:(BOOL)arg1;
- (void)onEditTapped;
- (void)onDeleteIconTapped;
- (void)onDeleteExpandedTapped;
- (id)clipView;
- (void)setClipView:(id)arg1;
- (id)frontContainer;
- (void)setFrontContainer:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)plusIconView;
- (void)setPlusIconView:(id)arg1;
- (id)loadingPlaceholderView;
- (void)setLoadingPlaceholderView:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (BOOL)createToolCell;
- (void)setCreateToolCell:(BOOL)arg1;
- (BOOL)loadingTool;
- (void)setLoadingTool:(BOOL)arg1;
- (BOOL)swipeEnabled;
- (void)setSwipeEnabled:(BOOL)arg1;
- (BOOL)editEnabled;
- (void)setEditEnabled:(BOOL)arg1;
- (id)editIconView;
- (void)setEditIconView:(id)arg1;
- (id)editIconImageView;
- (void)setEditIconImageView:(id)arg1;
- (id)deleteIconView;
- (void)setDeleteIconView:(id)arg1;
- (id)deleteIconImageView;
- (void)setDeleteIconImageView:(id)arg1;
- (id)deleteExpandedView;
- (void)setDeleteExpandedView:(id)arg1;
- (id)expandedIconView;
- (void)setExpandedIconView:(id)arg1;
- (id)expandedLabel;
- (void)setExpandedLabel:(id)arg1;
- (long long)swipeState;
- (void)setSwipeState:(long long)arg1;
- (double)panStartX;
- (void)setPanStartX:(double)arg1;
- (id)swipeDelegate;
- (void)setSwipeDelegate:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (BOOL)hasReddot;
- (void)setHasReddot:(BOOL)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (BOOL)showSubtitle;
- (void)setShowSubtitle:(BOOL)arg1;
- (void).cxx_destruct;
@end
