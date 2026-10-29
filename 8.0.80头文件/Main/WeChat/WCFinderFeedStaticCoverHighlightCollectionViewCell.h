@interface WCFinderFeedStaticCoverHighlightCollectionViewCell : UICollectionViewCell <WCFinderSearchHighLightItemExt, MMImageLoaderObserver, WCFinderShareAbstractCell>
{
    BOOL _hiddenPostTime; // +0x8
    id <WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate> _delegate; // +0x10
    unsigned long long _menuItemFlag; // +0x18
    unsigned long long _menuItemStyle; // +0x20
    WCFinderFeedStaticCoverView * _coverView; // +0x28
    WCFinderFeedStaticCoverContactView * _contactView; // +0x30
    FavAttributeCPLabel * _descLabel; // +0x38
    unsigned long long _type; // +0x40
    unsigned long long _flag; // +0x48
    WCFinderFeedMediaWrap * _mediaWrap; // +0x50
    UIPageControl * _pageCtrl; // +0x58
    UILabel * _postTimeLabel; // +0x60
    UIImage * _snapshotImage; // +0x68
    UIImage * _fullScreenImage; // +0x70
    WCFinderFeedContentVM * _contentVM; // +0x78
    WCFinderDataItem * _dataItem; // +0x80
}
+ (id)cellIdentifier;
+ (double)cellHeightWithModel:(id)arg1 width:(double)arg2;
+ (double)cellHeightWithFeedContentVM:(id)arg1 width:(double)arg2;
+ (double)_cellHeightWithModel:(id)arg1 normalText:(id)arg2 highlightKeyWords:(id)arg3 width:(double)arg4;
+ (id)createDescLabel;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)prepareForReuse;
- (void)initSubviews;
- (id)pageCtrl;
- (void)updateWithFeedContentVM:(id)arg1 infoType:(unsigned long long)arg2 flag:(unsigned long long)arg3;
- (void)updateContentWith:(id)arg1 infoType:(unsigned long long)arg2 flag:(unsigned long long)arg3;
- (void)_updateContentWith:(id)arg1 normalText:(id)arg2 highlightKeyWords:(id)arg3 nameHightkeywords:(id)arg4 isHidePostTimeLabel:(BOOL)arg5 infoType:(unsigned long long)arg6 flag:(unsigned long long)arg7;
- (id)createCellConfig;
- (void)adjustMargin;
- (void)clickContact;
- (void)onFeedLikedDataChanged:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (id)transitionEndImage;
- (id)cellIdentifier;
- (void)doShareAnimation;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)longSingleFingerPressGes:(id)arg1;
- (void)onAnchor;
- (void)onRemove;
- (void)onMutiSeleted;
- (void)onForward;
- (void)onEditTag;
- (void)onFavorite;
- (void)onDelete;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hiddenPostTime;
- (void)setHiddenPostTime:(BOOL)arg1;
- (unsigned long long)menuItemFlag;
- (void)setMenuItemFlag:(unsigned long long)arg1;
- (unsigned long long)menuItemStyle;
- (void)setMenuItemStyle:(unsigned long long)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)flag;
- (void)setFlag:(unsigned long long)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (void)setPageCtrl:(id)arg1;
- (id)postTimeLabel;
- (void)setPostTimeLabel:(id)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (id)fullScreenImage;
- (void)setFullScreenImage:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
