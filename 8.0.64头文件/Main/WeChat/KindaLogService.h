@interface KindaLogService : NSObject <MMKLogService>
- (void)verbose:(id)arg1 content:(id)arg2;
- (void)debug:(id)arg1 content:(id)arg2;
- (void)info:(id)arg1 content:(id)arg2;
- (void)warning:(id)arg1 content:(id)arg2;
- (void)error:(id)arg1 content:(id)arg2;
@end
