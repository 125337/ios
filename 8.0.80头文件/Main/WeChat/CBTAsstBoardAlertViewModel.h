@interface CBTAsstBoardAlertViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isExpanded; // +0x8
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (void)onClickAction;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)copyContent;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
@end
