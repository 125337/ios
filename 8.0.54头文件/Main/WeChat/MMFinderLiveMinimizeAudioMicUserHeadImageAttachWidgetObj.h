@interface MMFinderLiveMinimizeAudioMicUserHeadImageAttachWidgetObj : MMFinderLiveMinimizeConnectMicUserAttachWidgetObj
{
    UIImageView * _contentImageView; // +0x8
    CGRect _normalizedFrame; // +0x10
}
- (void)refresh;
- (BOOL)checkRootViewIsValid;
- (void)layoutUI;
- (void)createContentImageView;
- (id)getSnapshotUserInfoImage;
- (CGSize)sizeForContentViewWithNormalizedContainerSize:(CGSize)arg1;
- (double)topForContentViewWithNormalizedContainerSize:(CGSize)arg1;
- (double)leftForContentViewWithNormalizedContainerSize:(CGSize)arg1;
- (unsigned long long)currentUIType;
- (unsigned long long)currentViewType;
- (id)contentView;
- (id)contentImageView;
- (void)setContentImageView:(id)arg1;
- (CGRect)normalizedFrame;
- (void)setNormalizedFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

