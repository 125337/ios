@interface QBBeaconEventManager : NSObject
{
    BOOL _isEventUploadClose; // +0x8
    BOOL _isEventUpOnOff; // +0x9
    BOOL _isBizEventUpload; // +0xa
    BOOL _isAtsEnable; // +0xb
    NSDictionary * _detail; // +0x10
}
+ (id)shareManager;
+ (BOOL)isUploadBySampleEvent:(id)arg1;
+ (BOOL)isSample:(id)arg1;
+ (void)setEventUploadClose:(BOOL)arg1;
+ (BOOL)isEventUploadClose;
+ (void)setEventUpOnOff:(BOOL)arg1;
+ (BOOL)isEventUpOnOff;
+ (void)setBizEventUpload:(BOOL)arg1;
+ (BOOL)isBizEventUpload;
+ (void)setAtsEnable:(BOOL)arg1;
+ (BOOL)isAtsEnable;
- (id)init;
- (id)detail;
- (void).cxx_destruct;
- (void)setDetail:(id)arg1;
- (BOOL)isEventUploadClose;
- (void)setIsEventUploadClose:(BOOL)arg1;
- (BOOL)isEventUpOnOff;
- (void)setIsEventUpOnOff:(BOOL)arg1;
- (BOOL)isBizEventUpload;
- (void)setIsBizEventUpload:(BOOL)arg1;
- (BOOL)isAtsEnable;
- (void)setIsAtsEnable:(BOOL)arg1;
@end

