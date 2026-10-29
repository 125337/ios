@interface WAMainFrameTaskBarSectionBaseView : UICollectionViewCell <MMMenuControllerExt>
{
    UILabel * _titleLabel; // +0x8
    UIView * _contentContainer; // +0x10
    UIView * _topArea; // +0x18
    UIView * _cellMask; // +0x20
    NSString * _sectionId; // +0x28
    id <WAMainFrameTaskBarSectionBaseViewReportDelegate> _reportDelegate; // +0x30
}
+ (id)titleFont;
+ (long long)topAreaHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)title;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initView;
- (void)reload;
- (void)addCellMask:(id)arg1;
- (BOOL)supportAddToMinimize;
- (void)onMenuControllerDidHide;
- (void)onClick:(id)arg1 weappData:(id)arg2 pos:(long long)arg3;
- (void)onClick:(id)arg1 pos:(long long)arg2 isMyWeApp:(BOOL)arg3;
- (void)deleteItem:(id)arg1 weappData:(id)arg2 pos:(long long)arg3 isMyWeApp:(BOOL)arg4;
- (void)willDisplayItem:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(BOOL)arg4;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)topArea;
- (void)setTopArea:(id)arg1;
- (id)cellMask;
- (void)setCellMask:(id)arg1;
- (id)sectionId;
- (void)setSectionId:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (void).cxx_destruct;
@end
