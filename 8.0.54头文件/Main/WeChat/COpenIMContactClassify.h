@interface COpenIMContactClassify : NSObject <NSCopying>
{
    unsigned int _openResSubType; // +0x8
    NSString * _openIMDescId; // +0x10
    NSString * _openIMAppid; // +0x18
    NSString * _openIMDesc; // +0x20
    NSString * _openimDescQuanPin; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithOpenIMDescId:(id)arg1 andOpenIMAppid:(id)arg2;
- (id)initWithOpenIMDescId:(id)arg1 andOpenIMAppid:(id)arg2 subType:(unsigned int)arg3;
- (BOOL)isEqualContactClassify:(id)arg1;
- (id)openIMDesc;
- (id)openimDescQuanPin;
- (long long)compare:(id)arg1;
- (id)openIMDescId;
- (void)setOpenIMDescId:(id)arg1;
- (id)openIMAppid;
- (void)setOpenIMAppid:(id)arg1;
- (void)setOpenIMDesc:(id)arg1;
- (void)setOpenimDescQuanPin:(id)arg1;
- (unsigned int)openResSubType;
- (void)setOpenResSubType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

