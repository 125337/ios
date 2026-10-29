@interface WCFinderFeedMembershipInfo : NSObject
{
    BOOL _isMemberShipFeed; // +0x8
    BOOL _canPreview; // +0x9
    BOOL _canPlay; // +0xa
    int _scene; // +0xc
    unsigned long long _visitorStatus; // +0x10
}
- (BOOL)inMemberGuildMode;
- (BOOL)_isInFinderTimeline:(int)arg1;
- (id)description;
- (BOOL)isMemberShipFeed;
- (void)setIsMemberShipFeed:(BOOL)arg1;
- (BOOL)canPreview;
- (void)setCanPreview:(BOOL)arg1;
- (BOOL)canPlay;
- (void)setCanPlay:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)visitorStatus;
- (void)setVisitorStatus:(unsigned long long)arg1;
@end
