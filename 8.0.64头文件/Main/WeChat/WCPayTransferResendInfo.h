@interface WCPayTransferResendInfo : NSObject
{
    NSString * _title; // +0x8
    NSString * _pic; // +0x10
    NSString * _desc; // +0x18
    NSString * _leftBtnWording; // +0x20
    NSString * _rightBtnWording; // +0x28
}
+ (id)genFromDict:(id)arg1;
+ (id)genFromUnion:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)pic;
- (void)setPic:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)leftBtnWording;
- (void)setLeftBtnWording:(id)arg1;
- (id)rightBtnWording;
- (void)setRightBtnWording:(id)arg1;
- (void).cxx_destruct;
@end
