@interface MMHandOffAttributes : MMObject <NSCopying>
{
    NSString * _type; // +0x8
    NSString * _id; // +0x10
    NSString * _createtime; // +0x18
    NSString * _from; // +0x20
    NSString * _to; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)id;
- (void)setId:(id)arg1;
- (id)createtime;
- (void)setCreatetime:(id)arg1;
- (id)from;
- (void)setFrom:(id)arg1;
- (id)to;
- (void)setTo:(id)arg1;
- (void).cxx_destruct;
@end

