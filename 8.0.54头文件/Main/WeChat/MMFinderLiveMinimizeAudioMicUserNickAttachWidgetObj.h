@interface MMFinderLiveMinimizeAudioMicUserNickAttachWidgetObj : MMFinderLiveMinimizeConnectMicUserAttachWidgetObj
{
    UILabel * _rootNickLabel; // +0x8
    UILabel * _nickLabel; // +0x10
    CGRect _normalizedFrame; // +0x18
}
- (void)refresh;
- (BOOL)checkRootViewIsValid;
- (void)createNickLabel;
- (void)layoutUI;
- (id)getFontForNickLabel;
- (double)maxWidthForNickLabelWithNormalizedContainerSize:(CGSize)arg1;
- (double)topForNickLabelWithNormalizedContainerSize:(CGSize)arg1;
- (double)leftForNickLabelWithNormalizedContainerSize:(CGSize)arg1;
- (unsigned long long)currentUIType;
- (unsigned long long)currentViewType;
- (id)contentView;
- (id)rootNickLabel;
- (void)setRootNickLabel:(id)arg1;
- (id)nickLabel;
- (void)setNickLabel:(id)arg1;
- (CGRect)normalizedFrame;
- (void)setNormalizedFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

