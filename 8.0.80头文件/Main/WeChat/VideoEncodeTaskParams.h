@interface VideoEncodeTaskParams : NSObject
{
    BOOL _isHighPriority; // +0x8
    BOOL _isTaskReplicable; // +0x9
    BOOL _keepsProcessInBackground; // +0xa
    BOOL _isAutoRetryEnabled; // +0xb
    BOOL _collectsPostCompressMetrics; // +0xc
}
- (BOOL)isHighPriority;
- (void)setIsHighPriority:(BOOL)arg1;
- (BOOL)isTaskReplicable;
- (void)setIsTaskReplicable:(BOOL)arg1;
- (BOOL)keepsProcessInBackground;
- (void)setKeepsProcessInBackground:(BOOL)arg1;
- (BOOL)isAutoRetryEnabled;
- (void)setIsAutoRetryEnabled:(BOOL)arg1;
- (BOOL)collectsPostCompressMetrics;
- (void)setCollectsPostCompressMetrics:(BOOL)arg1;
@end
