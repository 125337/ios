@interface WCPayFreezeBalanceMsg : NSObject <PBCoding>
{
    NSString * _wording; // +0x8
    unsigned long long _wording_color; // +0x10
    unsigned long long _wording_size; // +0x18
    unsigned long long _bg_color; // +0x20
    NSString * _route_url; // +0x28
    NSString * _left_icon; // +0x30
    NSString * _right_icon; // +0x38
}
+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_wording_color;
+ (void)PBArrayAdd_wording_size;
+ (void)PBArrayAdd_bg_color;
+ (void)PBArrayAdd_route_url;
+ (void)PBArrayAdd_left_icon;
+ (void)PBArrayAdd_right_icon;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned long long)wording_color;
- (void)setWording_color:(unsigned long long)arg1;
- (unsigned long long)wording_size;
- (void)setWording_size:(unsigned long long)arg1;
- (unsigned long long)bg_color;
- (void)setBg_color:(unsigned long long)arg1;
- (id)route_url;
- (void)setRoute_url:(id)arg1;
- (id)left_icon;
- (void)setLeft_icon:(id)arg1;
- (id)right_icon;
- (void)setRight_icon:(id)arg1;
- (void).cxx_destruct;
@end

