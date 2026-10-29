@interface WCFinderCheckRecentAlbumHelper : NSObject
+ (void)checkRecentAlbumInSeconds:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)doCheckRecentAlbumInSeconds:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)doCallback:(id /* block */)arg1 result:(id)arg2;
+ (void)markLastMMAssetDidCheckInSecond:(unsigned long long)arg1;
+ (void)doMarkLastMMAssetDidCheckInSecond:(unsigned long long)arg1;
@end
