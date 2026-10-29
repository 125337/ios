@interface AvatarResult : NSObject
{
    BOOL _success; // +0x8
    NSString * _localPath; // +0x10
    NSString * _url; // +0x18
    NSString * _errorMessage; // +0x20
}
+ (id)makeWithLocalPath:(id)arg1 url:(id)arg2 success:(BOOL)arg3 errorMessage:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (void).cxx_destruct;
@end
