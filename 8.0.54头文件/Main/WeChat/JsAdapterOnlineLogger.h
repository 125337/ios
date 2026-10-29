@interface JsAdapterOnlineLogger : NSObject
{
    mutex _mutex; // +0x8
    scoped_refptr<liteav::OnlineLogger> _onlineLogger; // +0x48
    queue<std::string, std::deque<std::string>> _logQueue; // +0x50
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
- (id)init;
- (void)updateUrl:(id)arg1;
- (void)appendLog:(id)arg1;
- (void)consumeLog;
- (void)log:(id)arg1;
- (queue<std::string, std::deque<std::string>>)logQueue;
- (void)setLogQueue:(queue<std::string, std::deque<std::string>>)arg1;
- (scoped_refptr<liteav::OnlineLogger>)onlineLogger;
- (void)setOnlineLogger:(scoped_refptr<liteav::OnlineLogger>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

