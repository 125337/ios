@interface YtReflectLiveReq : JSONModel
{
    int _platform; // +0x8
    NSString * _app_id; // +0x10
    NSString * _business_id; // +0x18
    NSString * _person_id; // +0x20
    NSString * _color_data; // +0x28
    YtImageInfo * _eye_image; // +0x30
    YtImageInfo * _mouth_image; // +0x38
    YtDataPack_OC * _reflect_data; // +0x40
    NSString * _live_image; // +0x48
    NSString * _compare_image; // +0x50
    NSString * _session_id; // +0x58
    NSDictionary * _select_data; // +0x60
}
- (id)app_id;
- (void)setApp_id:(id)arg1;
- (id)business_id;
- (void)setBusiness_id:(id)arg1;
- (id)person_id;
- (void)setPerson_id:(id)arg1;
- (id)color_data;
- (void)setColor_data:(id)arg1;
- (int)platform;
- (void)setPlatform:(int)arg1;
- (id)eye_image;
- (void)setEye_image:(id)arg1;
- (id)mouth_image;
- (void)setMouth_image:(id)arg1;
- (id)reflect_data;
- (void)setReflect_data:(id)arg1;
- (id)live_image;
- (void)setLive_image:(id)arg1;
- (id)compare_image;
- (void)setCompare_image:(id)arg1;
- (id)session_id;
- (void)setSession_id:(id)arg1;
- (id)select_data;
- (void)setSelect_data:(id)arg1;
- (void).cxx_destruct;
@end

