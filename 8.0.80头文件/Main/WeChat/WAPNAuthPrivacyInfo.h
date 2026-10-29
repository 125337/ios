@interface WAPNAuthPrivacyInfo : NSObject
{
    BOOL _needShow; // +0x8
    NSString * _wording; // +0x10
    NSString * _title; // +0x18
}
- (BOOL)needShow;
- (void)setNeedShow:(BOOL)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end
