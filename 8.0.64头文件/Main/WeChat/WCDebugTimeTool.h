@interface WCDebugTimeTool : NSObject
{
    UILabel * _timeLabel; // +0x8
    NSDateFormatter * _dateFormatter; // +0x10
    NSTimer * _timer; // +0x18
}
+ (void)showTimeLabel;
+ (void)showTimeLabelInWindow:(id)arg1;
+ (void)bringToTop;
+ (void)removeTimeLabel;
- (void)p_doShowTimeLable:(id)arg1;
- (void)p_doRemoveTimeLabel;
- (id)timeLabel;
- (id)dateFormatter;
- (id)timer;
- (void)setTimeLabel:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
