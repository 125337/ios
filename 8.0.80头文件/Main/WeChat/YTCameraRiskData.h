@interface YTCameraRiskData : JSONModel <NSCopying>
{
    int _state; // +0x8
    NSString * _stage_name; // +0x10
    NSMutableArray * _image_list; // +0x18
    long long _ui_start_delay; // +0x20
    long long _ui_end_delay; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toNSDictionary;
- (int)state;
- (void)setState:(int)arg1;
- (id)stage_name;
- (void)setStage_name:(id)arg1;
- (id)image_list;
- (void)setImage_list:(id)arg1;
- (long long)ui_start_delay;
- (void)setUi_start_delay:(long long)arg1;
- (long long)ui_end_delay;
- (void)setUi_end_delay:(long long)arg1;
- (void).cxx_destruct;
@end
