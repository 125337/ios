@interface EcsMiniProgramLaunchBundle : NSObject
{
    NSString * _appid; // +0x8
    NSString * _username; // +0x10
    NSString * _path; // +0x18
    NSNumber * _scene; // +0x20
    NSString * _scene_note; // +0x28
    NSString * _extra_data; // +0x30
    NSString * _referrer_info_extra_data; // +0x38
    NSNumber * _app_version; // +0x40
    NSNumber * _isHalfPage; // +0x48
    NSNumber * _ecs_open_scene; // +0x50
    NSNumber * _isSilentLaunch; // +0x58
    EcsMiniProgramLaunchViewModeExtraData * _viewModeExtraData; // +0x60
    NSNumber * _bForbidExpandGesture; // +0x68
    NSArray * _featureList; // +0x70
}
+ (id)makeWithAppid:(id)arg1 username:(id)arg2 path:(id)arg3 scene:(id)arg4 scene_note:(id)arg5 extra_data:(id)arg6 referrer_info_extra_data:(id)arg7 app_version:(id)arg8 isHalfPage:(id)arg9 ecs_open_scene:(id)arg10 isSilentLaunch:(id)arg11 viewModeExtraData:(id)arg12 bForbidExpandGesture:(id)arg13 featureList:(id)arg14;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)scene_note;
- (void)setScene_note:(id)arg1;
- (id)extra_data;
- (void)setExtra_data:(id)arg1;
- (id)referrer_info_extra_data;
- (void)setReferrer_info_extra_data:(id)arg1;
- (id)app_version;
- (void)setApp_version:(id)arg1;
- (id)isHalfPage;
- (void)setIsHalfPage:(id)arg1;
- (id)ecs_open_scene;
- (void)setEcs_open_scene:(id)arg1;
- (id)isSilentLaunch;
- (void)setIsSilentLaunch:(id)arg1;
- (id)viewModeExtraData;
- (void)setViewModeExtraData:(id)arg1;
- (id)bForbidExpandGesture;
- (void)setBForbidExpandGesture:(id)arg1;
- (id)featureList;
- (void)setFeatureList:(id)arg1;
- (void).cxx_destruct;
@end

