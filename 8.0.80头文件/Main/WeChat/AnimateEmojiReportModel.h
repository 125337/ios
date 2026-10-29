@interface AnimateEmojiReportModel : NSObject
{
    BOOL _isRecentUse; // +0x8
    NSString * _key; // +0x10
}
+ (id)instance;
+ (void)beginSession:(id)arg1 isRecentUse:(BOOL)arg2;
+ (void)endSession;
+ (void)doReport:(id)arg1 node:(id)arg2 playSuccess:(BOOL)arg3 failedReason:(unsigned long long)arg4;
- (id)key;
- (void)setKey:(id)arg1;
- (BOOL)isRecentUse;
- (void)setIsRecentUse:(BOOL)arg1;
- (void).cxx_destruct;
@end
