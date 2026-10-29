@interface MMLiveTaskMgrProxy : NSObject <IMMLiveTaskMgrService>
+ (BOOL)isLive;
+ (BOOL)isLiveAndUsingMic;
+ (BOOL)isLiveAndUsingCamera;
@end

