@interface WAMainFrameTaskBarSectionMyWeAppView : WAMainFrameTaskBarSectionWeAppView
{
    UIView * _dragMaskView; // +0x8
    CAShapeLayer * _maskBorder; // +0x10
    UIView * _dragAddIcon; // +0x18
    UILabel * _dragLabel; // +0x20
    MMWebImageView * _moreWeAppIcon; // +0x28
    BOOL _isInArea; // +0x30
    BOOL _isLastInsertToMore; // +0x31
    BOOL _isLoading; // +0x32
    SightIconView * _loadingView; // +0x38
}
+ (double)totalCellHeight:(id)arg1 maxShowCount:(long long)arg2;
- (void)initView;
- (id)title;
- (id)moreTitle;
- (void)layoutSubviews;
- (void)commonLayoutTopRightArea;
- (void)layoutDragLabel;
- (void)prepareForReuse;
- (CGPoint)getWeAppMoreIconPos;
- (void)setWeAppMoreIcon:(id)arg1;
- (id)moreIconWeAppUsername;
- (void)onClickMore;
- (BOOL)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (void)onLongPress:(id)arg1;
- (BOOL)isInStarList:(id)arg1;
- (void)showTipsViewController:(id)arg1;
- (void)notifyItemInserted:(long long)arg1 newItems:(id)arg2 arrMyWeAppItemWhenShowCommonUse:(id)arg3;
- (void)notifyItemRemoved:(id)arg1 arrMyWeAppItemWhenShowCommonUse:(id)arg2;
- (void)notifyDragStateChange:(BOOL)arg1;
- (BOOL)notifyViewDragTo:(CGPoint)arg1;
- (BOOL)isPointInDragArea:(CGPoint)arg1;
- (void)deleteToSection;
- (void)handleClickUnStar;
- (void)handleClickSearch;
- (void)updateTitle;
- (void)startLoading;
- (void)stopLoading;
- (void)initLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
