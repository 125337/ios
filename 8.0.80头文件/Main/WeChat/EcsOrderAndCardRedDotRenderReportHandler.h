@interface EcsOrderAndCardRedDotRenderReportHandler : MMUserService <MMServiceProtocol>
{
    BOOL _entryVisible; // +0x8
    EcsOrderAndCardRedDotRenderedInfo * _latestRenderedInfo; // +0x10
    EcsOrderAndCardRedDotRenderedInfo * _reportedInCurrentVisibleSession; // +0x18
    UIView * _lastMeasuredView; // +0x20
    UILabel * _lastMeasuredLabel; // +0x28
    NSString * _lastMeasuredTipsUuid; // +0x30
    NSString * _lastMeasuredPath; // +0x38
    NSString * _lastMeasuredExpectedText; // +0x40
    NSString * _lastMeasuredRenderedTitle; // +0x48
    CGRect _lastMeasuredViewBounds; // +0x50
    CGRect _lastMeasuredLabelBounds; // +0x70
}
- (void)onServiceClearData;
- (void)onEntryVisible:(BOOL)arg1;
- (void)handleRenderResult:(id)arg1 showInfo:(id)arg2;
- (void)handleRenderedTitleInView:(id)arg1 expectedText:(id)arg2 showInfo:(id)arg3;
- (void)handleRenderedTitle:(id)arg1 showInfo:(id)arg2;
- (void)clearRenderedInfo;
- (void)clearRenderedTitleMeasurementCache;
- (id)renderedTitleForCtrlInfo:(id)arg1 showInfo:(id)arg2;
- (void)reportRenderedInfoIfVisible:(id)arg1;
- (void)reportRenderedInfo:(id)arg1;
- (id)latestRenderedInfo;
- (void)setLatestRenderedInfo:(id)arg1;
- (id)reportedInCurrentVisibleSession;
- (void)setReportedInCurrentVisibleSession:(id)arg1;
- (BOOL)entryVisible;
- (void)setEntryVisible:(BOOL)arg1;
- (id)lastMeasuredView;
- (void)setLastMeasuredView:(id)arg1;
- (id)lastMeasuredLabel;
- (void)setLastMeasuredLabel:(id)arg1;
- (id)lastMeasuredTipsUuid;
- (void)setLastMeasuredTipsUuid:(id)arg1;
- (id)lastMeasuredPath;
- (void)setLastMeasuredPath:(id)arg1;
- (id)lastMeasuredExpectedText;
- (void)setLastMeasuredExpectedText:(id)arg1;
- (id)lastMeasuredRenderedTitle;
- (void)setLastMeasuredRenderedTitle:(id)arg1;
- (CGRect)lastMeasuredViewBounds;
- (void)setLastMeasuredViewBounds:(CGRect)arg1;
- (CGRect)lastMeasuredLabelBounds;
- (void)setLastMeasuredLabelBounds:(CGRect)arg1;
- (void).cxx_destruct;
@end
