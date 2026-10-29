@interface QMCWeatherPrewarmSession : NSObject
{
    BOOL _ready; // +0x8
    BOOL _failed; // +0x9
    BOOL _inUse; // +0xa
    NSString * _h5Url; // +0x10
    NSString * _zipUrl; // +0x18
    NSString * _cacheDirectory; // +0x20
    QMCWeatherCardPanelView * _panel; // +0x28
    double _startTime; // +0x30
    double _createTime; // +0x38
    double _finishTime; // +0x40
}
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (id)zipUrl;
- (void)setZipUrl:(id)arg1;
- (id)cacheDirectory;
- (void)setCacheDirectory:(id)arg1;
- (id)panel;
- (void)setPanel:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (double)finishTime;
- (void)setFinishTime:(double)arg1;
- (BOOL)ready;
- (void)setReady:(BOOL)arg1;
- (BOOL)failed;
- (void)setFailed:(BOOL)arg1;
- (BOOL)inUse;
- (void)setInUse:(BOOL)arg1;
- (void).cxx_destruct;
@end
