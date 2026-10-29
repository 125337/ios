@interface YtPersonLive : JSONModel
{
    int _platform; // +0x8
    NSArray<YtFaceFrame_OC> * _frames; // +0x10
    NSString * _validate_data; // +0x18
    NSString * _voice; // +0x20
    NSString * _mouth_move; // +0x28
    NSString * _mouth_lip_reading; // +0x30
    YtDataPack_OC * _reflect_data; // +0x38
    NSString * _color_data; // +0x40
    NSString * _client_version; // +0x48
    NSDictionary * _select_data; // +0x50
}
- (id)frames;
- (void)setFrames:(id)arg1;
- (id)validate_data;
- (void)setValidate_data:(id)arg1;
- (id)voice;
- (void)setVoice:(id)arg1;
- (id)mouth_move;
- (void)setMouth_move:(id)arg1;
- (id)mouth_lip_reading;
- (void)setMouth_lip_reading:(id)arg1;
- (id)reflect_data;
- (void)setReflect_data:(id)arg1;
- (id)color_data;
- (void)setColor_data:(id)arg1;
- (int)platform;
- (void)setPlatform:(int)arg1;
- (id)client_version;
- (void)setClient_version:(id)arg1;
- (id)select_data;
- (void)setSelect_data:(id)arg1;
- (void).cxx_destruct;
@end

