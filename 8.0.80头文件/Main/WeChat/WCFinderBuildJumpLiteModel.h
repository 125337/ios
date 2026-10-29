@interface WCFinderBuildJumpLiteModel : NSObject
{
    WCFinderBuildJumpConfig * _jump_info_config; // +0x8
    WCFinderBuildLiteAppConfig * _lite_app_config; // +0x10
}
- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)genJumpInfo;
- (id)jump_info_config;
- (void)setJump_info_config:(id)arg1;
- (id)lite_app_config;
- (void)setLite_app_config:(id)arg1;
- (void).cxx_destruct;
@end
