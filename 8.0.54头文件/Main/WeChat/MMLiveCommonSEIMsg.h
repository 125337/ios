@interface MMLiveCommonSEIMsg : NSObject
{
    unsigned long long _wxT; // +0x8
    NSString * _d; // +0x10
    NSString * _m; // +0x18
    NSString * _mt; // +0x20
    NSString * _am; // +0x28
    NSString * _lm; // +0x30
    NSString * _ks; // +0x38
    NSString * _rs; // +0x40
}
- (unsigned long long)wxT;
- (void)setWxT:(unsigned long long)arg1;
- (id)d;
- (void)setD:(id)arg1;
- (id)m;
- (void)setM:(id)arg1;
- (id)mt;
- (void)setMt:(id)arg1;
- (id)am;
- (void)setAm:(id)arg1;
- (id)lm;
- (void)setLm:(id)arg1;
- (id)ks;
- (void)setKs:(id)arg1;
- (id)rs;
- (void)setRs:(id)arg1;
- (void).cxx_destruct;
@end

