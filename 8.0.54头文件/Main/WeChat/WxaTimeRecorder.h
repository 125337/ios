@interface WxaTimeRecorder : NSObject
+ (id)startTimeRecord;
+ (void)startKeyPointTimeRecord:(id)arg1 key:(id)arg2;
+ (void)checkKeyPointTimeRecord:(id)arg1 key:(id)arg2;
+ (id)endTimeRecord:(id)arg1;
+ (void)setKVTimeRecord:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)getKVTimeRecord:(id)arg1 key:(id)arg2;
+ (void)clearKVTimeRecord:(id)arg1;
- (id)init;
@end

