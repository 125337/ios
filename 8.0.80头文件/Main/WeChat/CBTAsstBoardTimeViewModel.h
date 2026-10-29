@interface CBTAsstBoardTimeViewModel : CBTAsstBoardBaseViewModel
{
    unsigned long long _displayTimeMs; // +0x8
    NSString * _customText; // +0x10
}
- (id)timeText;
- (unsigned long long)createTime;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)hidesInMultiSelectMode;
- (BOOL)shouldDeactivateInteractiveViews;
- (id)copyContent;
- (id)buildForwardHistoryCardWraps;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (unsigned long long)displayTimeMs;
- (void)setDisplayTimeMs:(unsigned long long)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (void).cxx_destruct;
@end
