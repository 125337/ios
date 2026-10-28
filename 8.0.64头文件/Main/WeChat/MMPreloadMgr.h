@interface MMPreloadMgr : MMUserService <MMServiceProtocol>
- (void)pausePreload;
- (void)resumePreload;
- (void)pauseSNSVideoPreload;
- (void)resumeNSVideoPreload;
@end
