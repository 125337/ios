@interface CBTAsstBoardTextViewModel : CBTAsstBoardBaseViewModel <ILinkEventExt>
{
    BOOL _hasReportedReceiveMsg; // +0x8
    double _width; // +0x10
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (void)setHasInsertIntoTableView:(BOOL)arg1;
- (void)tryReportReceiveTextMsg;
- (void)reportClickWeAppLinkWithJumpAppid:(id)arg1 jumpPath:(id)arg2;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (double)getWidthScale;
- (id)createTextView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)forwardHistoryTitleText;
- (double)width;
- (void)setWidth:(double)arg1;
- (BOOL)hasReportedReceiveMsg;
- (void)setHasReportedReceiveMsg:(BOOL)arg1;
@end
