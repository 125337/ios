@interface YtDataPack_OC : JSONModel
{
    float _offset_sys; // +0x8
    int _config_begin; // +0xc
    int _frame_num; // +0x10
    int _landmark_num; // +0x14
    int _width; // +0x18
    int _height; // +0x1c
    NSArray<YtRawImgData_OC> * _images_data; // +0x20
    NSArray<YtRefBigFrame_OC> * _big_images_data; // +0x28
    NSArray * _changepoint_time_list; // +0x30
    long long _begin_time; // +0x38
    long long _changepoint_time; // +0x40
    NSString * _log; // +0x48
    NSString * _version; // +0x50
}
- (id)images_data;
- (void)setImages_data:(id)arg1;
- (id)big_images_data;
- (void)setBig_images_data:(id)arg1;
- (id)changepoint_time_list;
- (void)setChangepoint_time_list:(id)arg1;
- (long long)begin_time;
- (void)setBegin_time:(long long)arg1;
- (long long)changepoint_time;
- (void)setChangepoint_time:(long long)arg1;
- (float)offset_sys;
- (void)setOffset_sys:(float)arg1;
- (int)config_begin;
- (void)setConfig_begin:(int)arg1;
- (int)frame_num;
- (void)setFrame_num:(int)arg1;
- (int)landmark_num;
- (void)setLandmark_num:(int)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (void).cxx_destruct;
@end
