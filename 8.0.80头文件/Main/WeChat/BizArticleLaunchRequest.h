@interface BizArticleLaunchRequest : NSObject
{
    NSString * _url; // +0x8
    NSString * _username; // +0x10
    NSString * _srcUsername; // +0x18
    NSString * _srcDisplayName; // +0x20
    NSString * _appId; // +0x28
    NSNumber * _itemShowType; // +0x30
}
+ (id)makeWithUrl:(id)arg1 username:(id)arg2 srcUsername:(id)arg3 srcDisplayName:(id)arg4 appId:(id)arg5 itemShowType:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)srcUsername;
- (void)setSrcUsername:(id)arg1;
- (id)srcDisplayName;
- (void)setSrcDisplayName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (void).cxx_destruct;
@end
