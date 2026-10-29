@interface NewVoiceDetectResult : NSObject
{
    BOOL isSilient_; // +0x8
    BOOL isNoisy_; // +0x9
    BOOL isToLoudly_; // +0xa
    BOOL _isSilient; // +0xb
    BOOL _isNoisy; // +0xc
    BOOL _isToLoudly; // +0xd
}
- (id)init;
- (void)dealloc;
- (BOOL)isSilient;
- (void)setIsSilient:(BOOL)arg1;
- (BOOL)isNoisy;
- (void)setIsNoisy:(BOOL)arg1;
- (BOOL)isToLoudly;
- (void)setIsToLoudly:(BOOL)arg1;
@end
