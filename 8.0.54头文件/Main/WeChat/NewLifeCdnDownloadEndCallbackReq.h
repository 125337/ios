@interface NewLifeCdnDownloadEndCallbackReq : NSObject
{
    NSString * _mediaId; // +0x8
    long long _errCode; // +0x10
    FlutterStandardTypedData * _cdnOriginResultByteArray; // +0x18
}
+ (id)makeWithMediaId:(id)arg1 errCode:(long long)arg2 cdnOriginResultByteArray:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)cdnOriginResultByteArray;
- (void)setCdnOriginResultByteArray:(id)arg1;
- (void).cxx_destruct;
@end

