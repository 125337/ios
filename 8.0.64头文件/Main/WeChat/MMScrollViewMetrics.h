@interface MMScrollViewMetrics : NSObject <MMFPSMonitorMonitorExt>
{
    FrameMetrics _metrics; // +0x8
    BOOL _scrolled; // +0x70
    BOOL _scrolling; // +0x71
    BOOL _cancelled; // +0x72
    unsigned int _prescrollDuration; // +0x74
    unsigned int _flag; // +0x78
    id <MMScrollMetricsDelegate> _delegate; // +0x80
    CADisplayLink * _displayLink; // +0x88
    long long _state; // +0x90
    MMScrollMetricsData * _data; // +0x98
    double _ts; // +0xa0
}
- (id)init;
- (void)dealloc;
- (void)onWillResignActive:(id)arg1;
- (void)stopDisplayLink;
- (void)setScrolled:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (void)setScrolling:(BOOL)arg1;
- (void)mmFPSMonitorOnUITrackingBegin;
- (void)mmFPSMonitorOnUITrackingEnd:(double)arg1 scrollScore:(double)arg2;
- (void)onFrameCallback:(id)arg1;
- (void)scrollWillBegin;
- (void)scrollDidEnd;
- (void)prescrollBegin;
- (void)prescrollEnd;
- (void)report:(id)arg1;
- (BOOL)scrolled;
- (BOOL)scrolling;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (long long)state;
- (id)data;
- (void)setData:(id)arg1;
- (double)ts;
- (void)setTs:(double)arg1;
- (unsigned int)prescrollDuration;
- (void)setPrescrollDuration:(unsigned int)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
