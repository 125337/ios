@interface SelectPhotoResult : NSObject
{
    long long _ret; // +0x8
    NSString * _msg; // +0x10
    NSString * _localPath; // +0x18
    NSString * _cdnUrl; // +0x20
}
+ (id)makeWithRet:(long long)arg1 msg:(id)arg2 localPath:(id)arg3 cdnUrl:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)ret;
- (void)setRet:(long long)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (void).cxx_destruct;
@end
