@interface CBTAsstBoardNoticeTextViewModel : CBTAsstBoardBaseViewModel
- (id)noticeText;
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
