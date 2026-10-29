@interface WalletLockInfo : NSObject
{
    BOOL _is_open_touch_pay; // +0x8
    NSString * _wallet_lock_title; // +0x10
    NSString * _wallet_lock_desc; // +0x18
    NSString * _wallet_lock_logo_url; // +0x20
    long long _wallet_lock_status; // +0x28
    NSString * _wallet_lock_status_name; // +0x30
    NSString * _fingerdata; // +0x38
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)wallet_lock_title;
- (void)setWallet_lock_title:(id)arg1;
- (id)wallet_lock_desc;
- (void)setWallet_lock_desc:(id)arg1;
- (id)wallet_lock_logo_url;
- (void)setWallet_lock_logo_url:(id)arg1;
- (long long)wallet_lock_status;
- (void)setWallet_lock_status:(long long)arg1;
- (id)wallet_lock_status_name;
- (void)setWallet_lock_status_name:(id)arg1;
- (BOOL)is_open_touch_pay;
- (void)setIs_open_touch_pay:(BOOL)arg1;
- (id)fingerdata;
- (void)setFingerdata:(id)arg1;
- (void).cxx_destruct;
@end

