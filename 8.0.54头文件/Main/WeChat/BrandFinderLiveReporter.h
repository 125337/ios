@interface BrandFinderLiveReporter : NSObject
+ (void)report1701Idkey:(unsigned int)arg1;
+ (void)report1701IdkeyCheckLiveResp:(unsigned int)arg1 succ:(BOOL)arg2 hasBiz:(BOOL)arg3;
+ (void)report1701IdkeyLiveBarListResp:(BOOL)arg1 hasBiz:(BOOL)arg2;
+ (void)report23044WithAction:(unsigned int)arg1 username:(id)arg2 scene:(unsigned int)arg3 pageType:(unsigned int)arg4 pageNote:(id)arg5;
+ (void)report23044WithAction:(unsigned int)arg1 username:(id)arg2 scene:(unsigned int)arg3 pageType:(unsigned int)arg4 pageNote:(id)arg5 bizType:(int)arg6;
+ (void)report23692WithAction:(unsigned int)arg1 cardCount:(long long)arg2 expand:(BOOL)arg3 exptType:(unsigned int)arg4;
+ (void)report21053WithDataItem:(id)arg1 action:(long long)arg2 withIndex:(unsigned long long)arg3 channelExtra:(id)arg4 actionTS:(unsigned long long)arg5;
@end

