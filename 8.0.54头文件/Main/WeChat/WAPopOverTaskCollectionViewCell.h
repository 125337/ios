@interface WAPopOverTaskCollectionViewCell : UICollectionViewCell <WAContactMgrExtension>
{
    BOOL _isShowAsBackToChat; // +0x8
    MMWebImageView * _headImageView; // +0x10
    UILabel * _nickNameLabel; // +0x18
    UILabel * _debugLabel; // +0x20
    UIView * _highlightMaskView; // +0x28
    WAMainFrameTaskItem * _taskItem; // +0x30
    NSString * _headImageUrl; // +0x38
    WAContactGetter * _contactGetter; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateTaskItem:(id)arg1;
- (void)setIsShowAsBackToChat:(BOOL)arg1;
- (id)getCurrentTaskItem;
- (void)showHighlight:(BOOL)arg1;
- (void)initView;
- (void)initData;
- (void)layoutSubviews;
- (void)onContactUpdate:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (BOOL)isShowAsBackToChat;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)debugLabel;
- (void)setDebugLabel:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)taskItem;
- (void)setTaskItem:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (void).cxx_destruct;
@end

