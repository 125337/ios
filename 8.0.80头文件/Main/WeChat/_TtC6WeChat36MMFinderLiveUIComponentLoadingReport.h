@interface _TtC6WeChat36MMFinderLiveUIComponentLoadingReport : NSObject
{
     taskId; // +0x8
     commentScene; // +0x10
     feedID; // +0x18
     liveID; // +0x20
}
+ (void)reportWithComponentType:(long long)arg1 commentScene:(int)arg2 feedID:(unsigned long long)arg3 liveID:(unsigned long long)arg4 duration:(unsigned int)arg5 componentExtra:(id)arg6;
- (id)initWithCommentScene:(int)arg1 feedID:(unsigned long long)arg2 liveID:(unsigned long long)arg3;
- (id)initWithTaskId:(id)arg1;
- (void)reportWithComponentType:(long long)arg1 duration:(unsigned int)arg2 componentExtra:(id)arg3;
- (id)init;
- (void).cxx_destruct;
@end
