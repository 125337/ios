@interface MPPagePreloadImageDownloadTask : NSObject
{
    NSString * _url; // +0x8
    NSString * _pageIdentity; // +0x10
    long long _retryTimes; // +0x18
}
+ (id)fileNameFromUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 pageIdentity:(id)arg2 retryTimes:(long long)arg3;
- (id)taskID;
- (id)fileName;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)pageIdentity;
- (void)setPageIdentity:(id)arg1;
- (long long)retryTimes;
- (void)setRetryTimes:(long long)arg1;
- (void).cxx_destruct;
@end
