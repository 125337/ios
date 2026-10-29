@interface FavListOpenedSessionTracker : NSObject
+ (void)trackViewController:(id)arg1;
+ (void)trackViewController:(id)arg1 autoEnd:(long long)arg2;
+ (void)untrackViewController:(id)arg1;
+ (void)end;
+ (BOOL)isActive;
+ (void)setHandOffSyncing:(BOOL)arg1;
+ (BOOL)isHandOffSyncing;
@end
