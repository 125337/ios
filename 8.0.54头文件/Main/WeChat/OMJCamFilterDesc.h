@interface OMJCamFilterDesc : NSObject
{
    BOOL _isEnabled; // +0x8
    float _intensity; // +0xc
    NSString * _filterID; // +0x10
    NSString * _lutImageFilePath; // +0x18
}
- (id)filterID;
- (void)setFilterID:(id)arg1;
- (id)lutImageFilePath;
- (void)setLutImageFilePath:(id)arg1;
- (float)intensity;
- (void)setIntensity:(float)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

