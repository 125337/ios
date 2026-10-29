@interface MSEFavMgr : NSObject
+ (id)sharedInstance;
- (void)postImageRequestToFavWithImageUrls:(id)arg1;
- (void)postUrlRequestToFavWithContentTitle:(id)arg1 contentUrl:(id)arg2 thumbUrl:(id)arg3;
- (void)postVideoRequestToFavWithVideoUrl:(id)arg1;
- (void)postAppFileRequestToFavWithFileName:(id)arg1 fileSize:(long long)arg2 md5:(id)arg3;
- (void)sendFavRequestFinish;
@end

