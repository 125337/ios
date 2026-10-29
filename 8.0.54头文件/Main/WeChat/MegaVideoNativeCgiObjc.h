@interface MegaVideoNativeCgiObjc : NSObject
+ (void)fetchContinuePlayNextFeed:(id)arg1 lastBuffer:(id)arg2 relatedListLastBuffer:(id)arg3 commentScene:(int)arg4 callback:(id /* block */)arg5;
+ (void)modSeeLaterStateWithParams:(id)arg1 modParams:(id)arg2 commentScene:(int)arg3;
+ (void)fetchChannelFlow:(int)arg1 lastBuffer:(id)arg2 callback:(id /* block */)arg3;
+ (void)prefetchChannelFlow:(int)arg1 redDotInfo:(id)arg2 prefetchData:(id)arg3 callback:(id /* block */)arg4;
+ (void)fetchRelatedList:(id)arg1 scene:(int)arg2 fromSessionId:(id)arg3 pullType:(int)arg4 lastBuffer:(id)arg5 longVideoPlayerContext:(id)arg6 commentScene:(int)arg7 callback:(id /* block */)arg8;
+ (void)fetchTopicList:(int)arg1 finderObject:(id)arg2 lastBuffer:(id)arg3 direction:(int)arg4 commentScene:(int)arg5 callback:(id /* block */)arg6;
+ (void)fetchTopStoryFlow:(int)arg1 pullType:(int)arg2 lastBuffer:(id)arg3 commentScene:(int)arg4 redDotInfo:(id)arg5 callback:(id /* block */)arg6;
@end

