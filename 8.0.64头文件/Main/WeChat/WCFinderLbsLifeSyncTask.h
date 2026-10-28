@interface WCFinderLbsLifeSyncTask : NSObject
{
    int _syncScene; // +0x8
    LbsLifeSyncRequest * _request; // +0x10
}
+ (id)taskWithRequest:(id)arg1;
- (int)syncScene;
- (void)setSyncScene:(int)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void).cxx_destruct;
@end
