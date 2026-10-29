@interface EmoticonBoardDataEventCenterImpl : NSObject <EmoticonBoardDataEventCenterBase>
- (void)setCallback:(id)arg1;
- (void)onEmoticonThumbUpdatedAsync:(unsigned long long)arg1 md5:(id)arg2 thumbPath:(id)arg3;
@end
