@interface WAMainFrameTaskBarSectionWeAppCell : UICollectionViewCell <WAContactMgrExtension>
{
    BOOL _isShowAsMore; // +0x8
    BOOL _darkStyle; // +0x9
    BOOL _isMoving; // +0xa
    BOOL _forbidLoadImage; // +0xb
    MMWebImageView * _headImageView; // +0x10
    UILabel * _nickNameLabel; // +0x18
    UILabel * _debugLabel; // +0x20
    UIView * _highlightMaskView; // +0x28
    UIImageView * _fromOuterTagView; // +0x30
    WAAppItemData * _taskItem; // +0x38
    NSString * _headImageUrl; // +0x40
}
+ (CGSize)viewSizeByDataModel:(id)arg1;
+ (double)itemSizeFactor;
+ (double)itemWidth;
+ (double)itemHeight:(id)arg1;
+ (double)itemInnerMargin;
+ (double)getHeaderWidth;
+ (double)getMoreIconWidth;
+ (double)getNameLabelToHeadImageMargin;
+ (id)getDisplayName:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateTaskItem:(id)arg1;
- (id)getDragView;
- (void)setIsShowAsMore:(BOOL)arg1;
- (id)getCurrentTaskItem;
- (void)showHighlight:(BOOL)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)initView;
- (void)setTitleColor:(id)arg1;
- (void)setDarkStyle:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)initData;
- (void)layoutSubviews;
- (void)onContactUpdate:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (BOOL)isShowAsMore;
- (BOOL)darkStyle;
- (BOOL)isMoving;
- (void)setIsMoving:(BOOL)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (BOOL)forbidLoadImage;
- (void)setForbidLoadImage:(BOOL)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)debugLabel;
- (void)setDebugLabel:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)fromOuterTagView;
- (void)setFromOuterTagView:(id)arg1;
- (id)taskItem;
- (void)setTaskItem:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (void).cxx_destruct;
@end
