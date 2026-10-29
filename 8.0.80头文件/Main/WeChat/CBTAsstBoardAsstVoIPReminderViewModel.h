@interface CBTAsstBoardAsstVoIPReminderViewModel : CBTAsstBoardBaseViewModel
+ (id)reminderText;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)hidesInMultiSelectMode;
- (BOOL)shouldDeactivateInteractiveViews;
- (id)copyContent;
- (id)buildForwardHistoryCardWraps;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
@end
