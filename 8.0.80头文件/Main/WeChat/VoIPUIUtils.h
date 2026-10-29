@interface VoIPUIUtils : NSObject
+ (id)currentCoveredBusinessViewController;
+ (CGRect)windowBoundsForScene:(id)arg1;
+ (double)statusBarHeightFromOpenFrom:(unsigned long long)arg1;
+ (id)getNameFromContact:(id)arg1;
+ (void)layoutControlButtons:(id)arg1 containerWidth:(double)arg2 centerY:(double)arg3 minEdgeMargin:(double)arg4 maxSpacing:(double)arg5;
+ (double)measureOptimizedPanelContentHeight:(id)arg1;
+ (void)layoutOptimizedPanelButtons:(id)arg1 containerWidth:(double)arg2 centerY:(double)arg3 defaultEdgeMargin:(double)arg4 minSpacing:(double)arg5 maxSpacing:(double)arg6;
+ (void)installHighlightOverlayOnButton:(id)arg1;
+ (void)onHighlightOverlayTouchDown:(id)arg1;
+ (void)onHighlightOverlayTouchEnd:(id)arg1;
+ (double)voipAudioHeadTopRatio;
+ (double)voipVideoHeadTopRatio;
+ (double)voipAudioMinContentToSafeAreaBottom;
+ (double)voipOptimizedNicknameMaxWidthForPageWidth:(double)arg1;
+ (long long)voipOptimizedNicknameNumberOfLinesForPageHeight:(double)arg1;
+ (double)voipVideoDoubleRowPanelHeight;
+ (double)voipAudioToastTextBottomWithViewHeight:(double)arg1 safeAreaBottom:(double)arg2 usernameBottom:(double)arg3 hangupTop:(double)arg4 isAddingScrollingString:(BOOL)arg5;
+ (id)defaultRingtoneName;
+ (id)defaultRingtonePath;
+ (id)defaultPromptName;
+ (id)defaultPromptPath;
+ (id)defaultEndName;
+ (id)defaultEndPath;
+ (id)defaultConnectedName;
+ (id)defaultConnectedPath;
@end
