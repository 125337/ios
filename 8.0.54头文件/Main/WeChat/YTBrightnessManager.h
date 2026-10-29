@interface YTBrightnessManager : NSObject
{
    vector<float, std::allocator<float>> vec; // +0x8
    int _recordCount; // +0x20
    id <YTOnGetBrightness> _onGetBrightnessDelegate; // +0x28
    BrightnessDevice * _brightnessDevice; // +0x30
    NSTimer * _timer; // +0x38
}
+ (id)getUploadDic:(float)arg1;
- (int)getBrightness:(id)arg1 overTime:(double)arg2;
- (void)stopBrightness;
- (void)onGetBrightnessInner:(float)arg1;
- (id)onGetBrightnessDelegate;
- (void)setOnGetBrightnessDelegate:(id)arg1;
- (id)brightnessDevice;
- (void)setBrightnessDevice:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (int)recordCount;
- (void)setRecordCount:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

