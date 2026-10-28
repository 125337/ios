@interface TextStatePublishBrandInfo : NSObject
{
    unsigned int _createTime; // +0x8
    NSString * _ticket; // +0x10
    unsigned long long _brandId; // +0x18
    NSString * _activityId; // +0x20
    NSString * _qrCodeId; // +0x28
    NSString * _openId; // +0x30
    NSString * _base64BrandKeyInfo; // +0x38
}
- (id)initWithBase64BrandKeyInfo:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (unsigned long long)brandId;
- (void)setBrandId:(unsigned long long)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)qrCodeId;
- (void)setQrCodeId:(id)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)base64BrandKeyInfo;
- (void)setBase64BrandKeyInfo:(id)arg1;
- (void).cxx_destruct;
@end
