@interface WCTimelineFlutterAlbumV2ViewController : MMFlutterViewController <SNSPluginDelegate, WCCommitViewAnimationDelegate>
{
    MMFlutterInstance * _instance; // +0x70
}
+ (void)prefetchUserPageInfoWithCompletion:(id /* block */)arg1;
+ (void)writeResponseToMMKV:(id)arg1;
- (id)initWithSource:(id)arg1;
- (id)initWithUserName:(id)arg1 source:(id)arg2;
- (id)initWithUserName:(id)arg1 source:(id)arg2 feedId:(id)arg3 mediaIndex:(unsigned long long)arg4;
- (id)initFromV3GalleryWithUserName:(id)arg1 source:(id)arg2 feedId:(id)arg3 mediaId:(id)arg4 mediaIndex:(unsigned long long)arg5 feedCreateTime:(unsigned long long)arg6 albumSessionId:(id)arg7 snsChannel:(long long)arg8;
- (id)initWithRouteName:(id)arg1 userName:(id)arg2 source:(id)arg3 feedId:(id)arg4 mediaId:(id)arg5 mediaIndex:(unsigned long long)arg6 useV3GridStyle:(BOOL)arg7;
- (id)initWithRouteName:(id)arg1 userName:(id)arg2 source:(id)arg3 feedId:(id)arg4 mediaId:(id)arg5 mediaIndex:(unsigned long long)arg6 feedCreateTime:(unsigned long long)arg7 useV3GridStyle:(BOOL)arg8 isV3GalleryAlbumEntry:(BOOL)arg9 albumSessionId:(id)arg10 snsChannel:(long long)arg11;
- (id)getPluginTopViewController;
- (id)instance;
- (void)setInstance:(id)arg1;
- (void).cxx_destruct;
@end
