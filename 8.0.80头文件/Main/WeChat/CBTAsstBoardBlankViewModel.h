@interface CBTAsstBoardBlankViewModel : CBTAsstBoardBaseViewModel
{
    double _blankHeight; // +0x8
}
- (BOOL)isForwardable;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (double)blankHeight;
- (void)setBlankHeight:(double)arg1;
@end
