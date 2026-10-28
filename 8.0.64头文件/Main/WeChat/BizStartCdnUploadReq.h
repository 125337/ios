@interface BizStartCdnUploadReq : NSObject
{
    NSString * _mediaId; // +0x8
    NSNumber * _fileType; // +0x10
    NSNumber * _appType; // +0x18
    NSString * _fullPath; // +0x20
    NSNumber * _bizScene; // +0x28
    NSString * _thumbPath; // +0x30
    NSString * _custom_header; // +0x38
}
+ (id)makeWithMediaId:(id)arg1 fileType:(id)arg2 appType:(id)arg3 fullPath:(id)arg4 bizScene:(id)arg5 thumbPath:(id)arg6 custom_header:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)fileType;
- (void)setFileType:(id)arg1;
- (id)appType;
- (void)setAppType:(id)arg1;
- (id)fullPath;
- (void)setFullPath:(id)arg1;
- (id)bizScene;
- (void)setBizScene:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)custom_header;
- (void)setCustom_header:(id)arg1;
- (void).cxx_destruct;
@end
