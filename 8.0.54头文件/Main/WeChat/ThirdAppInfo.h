@interface ThirdAppInfo : NSObject
{
    NSString * _appId; // +0x8
    NSString * _name; // +0x10
    NSString * _iconUrl; // +0x18
    FlutterStandardTypedData * _iconData; // +0x20
    FlutterStandardTypedData * _grayIconData; // +0x28
}
+ (id)makeWithAppId:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 iconData:(id)arg4 grayIconData:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)iconData;
- (void)setIconData:(id)arg1;
- (id)grayIconData;
- (void)setGrayIconData:(id)arg1;
- (void).cxx_destruct;
@end

