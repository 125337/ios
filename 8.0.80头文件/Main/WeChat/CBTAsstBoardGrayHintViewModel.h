@interface CBTAsstBoardGrayHintViewModel : CBTAsstBoardBaseViewModel
{
    NSString * _hintText; // +0x8
}
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)hidesInMultiSelectMode;
- (BOOL)shouldDeactivateInteractiveViews;
- (id)copyContent;
- (id)buildForwardHistoryCardWraps;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)hintText;
- (void)setHintText:(id)arg1;
- (void).cxx_destruct;
@end
