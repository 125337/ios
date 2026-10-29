@interface ImageLoadPerformanceInfo : NSObject
{
    NSNumber * _isNetwork; // +0x8
    NSNumber * _startTimeStamp; // +0x10
    NSNumber * _endTimeStamp; // +0x18
    NSNumber * _downloadFail; // +0x20
    NSNumber * _downloadErrorCode; // +0x28
    NSNumber * _decodeFail; // +0x30
    NSString * _url; // +0x38
}
+ (id)makeWithIsNetwork:(id)arg1 startTimeStamp:(id)arg2 endTimeStamp:(id)arg3 downloadFail:(id)arg4 downloadErrorCode:(id)arg5 decodeFail:(id)arg6 url:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)isNetwork;
- (void)setIsNetwork:(id)arg1;
- (id)startTimeStamp;
- (void)setStartTimeStamp:(id)arg1;
- (id)endTimeStamp;
- (void)setEndTimeStamp:(id)arg1;
- (id)downloadFail;
- (void)setDownloadFail:(id)arg1;
- (id)downloadErrorCode;
- (void)setDownloadErrorCode:(id)arg1;
- (id)decodeFail;
- (void)setDecodeFail:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

