@interface YtCAPTCHA_OC : JSONModel
{
    int _fixed_interval; // +0x8
    int _unit; // +0xc
    int _rand_shift; // +0x10
    int _rand_inv; // +0x14
    NSArray * _intervals; // +0x18
    NSString * _seq_id; // +0x20
}
- (int)fixed_interval;
- (void)setFixed_interval:(int)arg1;
- (int)unit;
- (void)setUnit:(int)arg1;
- (int)rand_shift;
- (void)setRand_shift:(int)arg1;
- (int)rand_inv;
- (void)setRand_inv:(int)arg1;
- (id)intervals;
- (void)setIntervals:(id)arg1;
- (id)seq_id;
- (void)setSeq_id:(id)arg1;
- (void).cxx_destruct;
@end

