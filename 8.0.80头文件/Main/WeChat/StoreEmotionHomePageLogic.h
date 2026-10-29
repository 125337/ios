@interface StoreEmotionHomePageLogic : NSObject
{
    unsigned long long _sessionId; // +0x8
}
+ (id)cachePath;
- (void)fetchHomePageWithCompletionHandler:(id /* block */)arg1;
- (id)recordListCache;
- (void)setRecordListCache:(id)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
@end
