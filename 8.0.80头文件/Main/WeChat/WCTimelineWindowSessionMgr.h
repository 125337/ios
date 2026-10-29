@interface WCTimelineWindowSessionMgr : MMUserService <MMServiceProtocol>
{
    WCTimelineWindowSession * _currentTimelineWindowSession; // +0x8
}
- (void)timelineWillBePushed;
- (void)timelineWillBePoped;
- (id)getSession;
- (id)currentTimelineWindowSession;
- (void)setCurrentTimelineWindowSession:(id)arg1;
- (void).cxx_destruct;
@end
