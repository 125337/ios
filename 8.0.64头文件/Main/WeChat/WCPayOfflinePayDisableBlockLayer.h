@interface WCPayOfflinePayDisableBlockLayer : NSObject <PBCoding>
{
    BOOL _is_show; // +0x8
    unsigned int _block_layer_report_id; // +0xc
    unsigned int _action_type; // +0x10
    NSString * _tiny_app_username; // +0x18
    NSString * _tiny_app_path; // +0x20
    NSString * _url; // +0x28
    NSArray * _text_info_array; // +0x30
}
+ (void)PBArrayAdd_block_layer_report_id;
+ (void)PBArrayAdd_is_show;
+ (void)PBArrayAdd_action_type;
+ (void)PBArrayAdd_tiny_app_username;
+ (void)PBArrayAdd_tiny_app_path;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_text_info_array;
+ (void)initialize;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)getLocalDisableBlockLayerData;
+ (BOOL)saveDisableBlockLayerData:(id)arg1;
+ (void)removeDisableBlockLayerData;
- (id)getPBPropertyTable;
- (unsigned int)block_layer_report_id;
- (void)setBlock_layer_report_id:(unsigned int)arg1;
- (BOOL)is_show;
- (void)setIs_show:(BOOL)arg1;
- (unsigned int)action_type;
- (void)setAction_type:(unsigned int)arg1;
- (id)tiny_app_username;
- (void)setTiny_app_username:(id)arg1;
- (id)tiny_app_path;
- (void)setTiny_app_path:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)text_info_array;
- (void)setText_info_array:(id)arg1;
- (void).cxx_destruct;
@end
