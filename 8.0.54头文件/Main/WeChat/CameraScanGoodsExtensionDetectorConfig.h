@interface CameraScanGoodsExtensionDetectorConfig : MMObject
{
    NSString * _svrConfigData; // +0x8
    long long _svrRequestInterval; // +0x10
    long long _svrRequestUploadTimeout; // +0x18
    long long _svrRequestExchangeTimeout; // +0x20
    CameraScanCombineModelInfo * _curModelInfo; // +0x28
    CameraScanCombineConfig * _combineConfig; // +0x30
}
- (id)svrConfigData;
- (void)setSvrConfigData:(id)arg1;
- (long long)svrRequestInterval;
- (void)setSvrRequestInterval:(long long)arg1;
- (long long)svrRequestUploadTimeout;
- (void)setSvrRequestUploadTimeout:(long long)arg1;
- (long long)svrRequestExchangeTimeout;
- (void)setSvrRequestExchangeTimeout:(long long)arg1;
- (id)curModelInfo;
- (void)setCurModelInfo:(id)arg1;
- (id)combineConfig;
- (void)setCombineConfig:(id)arg1;
- (void).cxx_destruct;
@end

