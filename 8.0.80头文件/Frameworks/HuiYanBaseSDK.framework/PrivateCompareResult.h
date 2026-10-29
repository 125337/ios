@interface PrivateCompareResult : NSObject
{
    int _platform; // +0x8
    int _need_encrypted_best_img; // +0xc
    NSString * _extraInfo; // +0x10
    NSString * _sign; // +0x18
    NSString * _liveData; // +0x20
    NSString * _unEncryptLiveData; // +0x28
    NSString * _longCheckBestImage; // +0x30
    NSString * _token; // +0x38
}
- (int)platform;
- (void)setPlatform:(int)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (id)liveData;
- (void)setLiveData:(id)arg1;
- (id)unEncryptLiveData;
- (void)setUnEncryptLiveData:(id)arg1;
- (int)need_encrypted_best_img;
- (void)setNeed_encrypted_best_img:(int)arg1;
- (id)longCheckBestImage;
- (void)setLongCheckBestImage:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (void).cxx_destruct;
@end
