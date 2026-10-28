@interface WCFinderGlobalSnapshotHelper : NSObject <WCFinderPreviewView>
+ (id)screenShotInfoWithContentVM:(id)arg1;
+ (id)screenShotInfoWithContact:(id)arg1 isBrand:(BOOL)arg2;
+ (id)createURLWithPath:(id)arg1 query:(id)arg2;
+ (id)createMsgURLWithContentVM:(id)arg1;
+ (id)createMsgURLWithContact:(id)arg1 isBrand:(BOOL)arg2;
+ (id)queryWithContentVM:(id)arg1;
+ (void)handleJumpWithParams:(id)arg1 actionType:(id)arg2 fromNav:(id)arg3 entryScene:(unsigned long long)arg4 cardType:(int)arg5;
+ (BOOL)supportContentVM:(id)arg1;
- (id)previewType;
- (void)reportForward:(id)arg1 commentScene:(int)arg2;
@end
