@interface TemplateMsgControlInfo : NSObject
{
    NSString * _foldWording; // +0x8
    NSString * _foldActionWording; // +0x10
    NSString * _footerWording; // +0x18
    NSString * _footerActionWording; // +0x20
    unsigned long long _footerActionType; // +0x28
}
- (id)foldWording;
- (void)setFoldWording:(id)arg1;
- (id)foldActionWording;
- (void)setFoldActionWording:(id)arg1;
- (id)footerWording;
- (void)setFooterWording:(id)arg1;
- (id)footerActionWording;
- (void)setFooterActionWording:(id)arg1;
- (unsigned long long)footerActionType;
- (void)setFooterActionType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

