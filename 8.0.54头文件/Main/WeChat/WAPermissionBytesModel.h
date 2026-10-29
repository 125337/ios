@interface WAPermissionBytesModel : NSObject
{
    NSString * _apiName; // +0x8
    unsigned long long _apiIndex; // +0x10
    long long _apiRunMode; // +0x18
    long long _mainThreadMode; // +0x20
}
- (id)apiName;
- (void)setApiName:(id)arg1;
- (unsigned long long)apiIndex;
- (void)setApiIndex:(unsigned long long)arg1;
- (long long)apiRunMode;
- (void)setApiRunMode:(long long)arg1;
- (long long)mainThreadMode;
- (void)setMainThreadMode:(long long)arg1;
- (void).cxx_destruct;
@end

