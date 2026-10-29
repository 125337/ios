@interface MMLiveSEIKTVSongItem : NSObject
{
    NSString * _uId; // +0x8
    NSString * _sId; // +0x10
    NSString * _sName; // +0x18
    unsigned long long _os; // +0x20
    NSString * _uiqId; // +0x28
}
- (id)uId;
- (void)setUId:(id)arg1;
- (id)sId;
- (void)setSId:(id)arg1;
- (id)sName;
- (void)setSName:(id)arg1;
- (unsigned long long)os;
- (void)setOs:(unsigned long long)arg1;
- (id)uiqId;
- (void)setUiqId:(id)arg1;
- (void).cxx_destruct;
@end

