@interface NewLifeStartCdnDownloadReq : NSObject
{
    NSString * _mediaId; // +0x8
    NSString * _url; // +0x10
    long long _concurrentCount; // +0x18
    NSString * _path; // +0x20
}
+ (id)makeWithMediaId:(id)arg1 url:(id)arg2 concurrentCount:(long long)arg3 path:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)concurrentCount;
- (void)setConcurrentCount:(long long)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

