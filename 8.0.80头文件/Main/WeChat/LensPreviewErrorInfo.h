@interface LensPreviewErrorInfo : MMObject <YYModel>
{
    long long _errCode; // +0x8
    NSString * _errMessage; // +0x10
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)getErrorMessageForDisplay;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMessage;
- (void)setErrMessage:(id)arg1;
- (void).cxx_destruct;
@end
