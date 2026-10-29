@interface FavVideoPlayerCommon : NSObject
+ (BOOL)isStreamingEnabled;
+ (id)getPlayArgsWithFavData:(id)arg1 favItem:(id)arg2;
+ (id)generateDownloadArgsWithFavData:(id)arg1 favItem:(id)arg2;
@end
