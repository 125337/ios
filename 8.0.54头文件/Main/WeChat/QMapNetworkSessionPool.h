@interface QMapNetworkSessionPool : NSObject <NSURLSessionDelegate>
{
    int lock; // +0x8
    BOOL _dead; // +0xc
    NSMutableArray * _sessionPool; // +0x10
    unsigned long long _cursor; // +0x18
    NSURLSessionConfiguration * _configuration; // +0x20
    unsigned long long _sessionCount; // +0x28
}
+ (id)sessionPoolWithConfiguration:(id)arg1 sessionCount:(unsigned long long)arg2;
- (void)setupPool;
- (id)createSession;
- (void)removeSession:(id)arg1;
- (id)initWithConfiguration:(id)arg1 sessionCount:(unsigned long long)arg2;
- (id)getSession;
- (void)finishTasksAndInvalidate;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)sessionPool;
- (void)setSessionPool:(id)arg1;
- (unsigned long long)cursor;
- (void)setCursor:(unsigned long long)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (unsigned long long)sessionCount;
- (void)setSessionCount:(unsigned long long)arg1;
- (BOOL)dead;
- (void)setDead:(BOOL)arg1;
- (void).cxx_destruct;
@end

