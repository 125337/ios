@interface BizCdnUploadTaskCallback : NSObject
{
    NSString * _mediaId; // +0x8
    NSNumber * _callbackType; // +0x10
    NSString * _fileId; // +0x18
    NSString * _aeskey; // +0x20
    NSString * _url; // +0x28
    NSNumber * _offset; // +0x30
    NSNumber * _total; // +0x38
    NSNumber * _errCode; // +0x40
    NSString * _thumb_url; // +0x48
}
+ (id)makeWithMediaId:(id)arg1 callbackType:(id)arg2 fileId:(id)arg3 aeskey:(id)arg4 url:(id)arg5 offset:(id)arg6 total:(id)arg7 errCode:(id)arg8 thumb_url:(id)arg9;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)callbackType;
- (void)setCallbackType:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)offset;
- (void)setOffset:(id)arg1;
- (id)total;
- (void)setTotal:(id)arg1;
- (id)errCode;
- (void)setErrCode:(id)arg1;
- (id)thumb_url;
- (void)setThumb_url:(id)arg1;
- (void).cxx_destruct;
@end
