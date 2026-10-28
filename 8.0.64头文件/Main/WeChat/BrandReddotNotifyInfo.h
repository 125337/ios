@interface BrandReddotNotifyInfo : NSObject
{
    unsigned int _notifyType; // +0x8
    NSString * _notifyWording; // +0x10
}
- (id)notifyWording;
- (void)setNotifyWording:(id)arg1;
- (unsigned int)notifyType;
- (void)setNotifyType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
