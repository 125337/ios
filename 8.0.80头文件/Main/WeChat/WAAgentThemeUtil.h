@interface WAAgentThemeUtil : NSObject
+ (BOOL)isDarkModeEnabledForAppId:(id)arg1;
+ (id)themeColorWithLight:(id)arg1 dark:(id)arg2 darkModeEnabled:(BOOL)arg3;
+ (id)BackgroundColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)TitleColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)AIBubbleBackgroundColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)UserBubbleBackgroundColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)InputPlaceholderColorWithDarkModeEnabled:(BOOL)arg1;
+ (BOOL)isDarkModeForView:(id)arg1 darkModeEnabled:(BOOL)arg2;
+ (id)RecordingOverlayGradientBaseColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)RecordingOverlayLoadingArcColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)RecordingOverlayCurveFillColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)RecordingOverlayRecordingArcColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)RecordingOverlayCancelArcColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)RecordingDimmingOverlayBaseColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)SheetHandleIndicatorColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)InputPanelBlurTintColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)FileCellBackgroundColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)FileCellDeleteButtonColorWithDarkModeEnabled:(BOOL)arg1;
+ (id)AttachmentIconColorWithDarkModeEnabled:(BOOL)arg1;
@end
