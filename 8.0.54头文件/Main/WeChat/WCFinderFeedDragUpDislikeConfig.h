@interface WCFinderFeedDragUpDislikeConfig : NSObject
{
    double _topLongPanelViewHScale; // +0x8
    double _panelTriggerDistance; // +0x10
    double _panelTriggerTimeDurationInS; // +0x18
    double _panelTriggerSpeedScale; // +0x20
    double _topPanelNotShowTouchHeight; // +0x28
}
- (id)init;
- (double)topLongPanelViewHScale;
- (void)setTopLongPanelViewHScale:(double)arg1;
- (double)panelTriggerDistance;
- (void)setPanelTriggerDistance:(double)arg1;
- (double)panelTriggerTimeDurationInS;
- (void)setPanelTriggerTimeDurationInS:(double)arg1;
- (double)panelTriggerSpeedScale;
- (void)setPanelTriggerSpeedScale:(double)arg1;
- (double)topPanelNotShowTouchHeight;
- (void)setTopPanelNotShowTouchHeight:(double)arg1;
@end

