@interface MMLiveAvatarBackgroundView : UIView
{
    UIView * _avatarContainerView; // +0x8
    MMWebImageView * _coverImageView; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UIView * _maskContainerView; // +0x20
    UIView * _customContentView; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    MMFinderLiveTask * _liveTask; // +0x38
    WCFinderDataItem * _dataItem; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (id)initWithTask:(id)arg1 frame:(CGRect)arg2;
- (id)initWithFinderDataItem:(id)arg1 frame:(CGRect)arg2;
- (void)refreshImage;
- (id)tryGetAnchorDefaultCoverImageUrlInKTVMode:(id)arg1;
- (void)addMaskBlurWithColor:(id)arg1;
- (void)addCustomContentView:(id)arg1;
- (void)initializeImageViews;
- (id)avatarContainerView;
- (void)setAvatarContainerView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)maskContainerView;
- (void)setMaskContainerView:(id)arg1;
- (id)customContentView;
- (void)setCustomContentView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end

