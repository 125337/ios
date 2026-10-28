@interface MMFinderLiveConnectMicVideoUserInfoView : MMFinderLiveConnectMicBaseUserInfoView
{
    BOOL _isGlobalSmallMode; // +0x8
    BOOL _isInFullScreenPKStyle; // +0x9
}
- (void)show;
- (void)updateHeadImageViewSize;
- (BOOL)needDisplayGlobalRankSignView;
- (unsigned long long)viewType;
- (CGRect)displayNormalizedFrame;
- (double)nameLabelFontSize;
- (void)layoutUI;
- (void)updateMicMutedButtonAppearance;
- (double)contentWidth;
- (BOOL)isGlobalSmallMode;
- (void)setIsGlobalSmallMode:(BOOL)arg1;
- (BOOL)isInFullScreenPKStyle;
- (void)setIsInFullScreenPKStyle:(BOOL)arg1;
@end
