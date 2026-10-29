@interface WCFinderPlaceholderContentVM : WCFinderFeedContentVM
{
    BOOL _forbiddenPlay; // +0x8
    WCFinderPlaceholderFeedItem * _item; // +0x10
    NSArray * _jumpFeedContentVMS; // +0x18
    NSString * _tempLocalTid; // +0x20
}
+ (id)contentVMWithPlaceholderItem:(id)arg1 scene:(int)arg2;
- (id)contentTid;
- (id)item;
- (void)setItem:(id)arg1;
- (id)jumpFeedContentVMS;
- (void)setJumpFeedContentVMS:(id)arg1;
- (BOOL)forbiddenPlay;
- (void)setForbiddenPlay:(BOOL)arg1;
- (id)tempLocalTid;
- (void)setTempLocalTid:(id)arg1;
- (void).cxx_destruct;
@end
