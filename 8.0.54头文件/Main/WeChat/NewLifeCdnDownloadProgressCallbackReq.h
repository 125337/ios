@interface NewLifeCdnDownloadProgressCallbackReq : NSObject
{
    NSString * _mediaId; // +0x8
    long long _finishedLength; // +0x10
    long long _totalLength; // +0x18
}
+ (id)makeWithMediaId:(id)arg1 finishedLength:(long long)arg2 totalLength:(long long)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (long long)finishedLength;
- (void)setFinishedLength:(long long)arg1;
- (long long)totalLength;
- (void)setTotalLength:(long long)arg1;
- (void).cxx_destruct;
@end

