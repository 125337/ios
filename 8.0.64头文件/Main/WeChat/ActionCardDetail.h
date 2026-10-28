@interface ActionCardDetail : NSObject <NSCoding>
{
    NSString * _name; // +0x8
    NSString * _desc; // +0x10
    NSString * _digest; // +0x18
    NSString * _iconurl; // +0x20
    NSString * _cardid; // +0x28
    NSString * _cardext; // +0x30
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)iconurl;
- (void)setIconurl:(id)arg1;
- (id)cardid;
- (void)setCardid:(id)arg1;
- (id)cardext;
- (void)setCardext:(id)arg1;
- (void).cxx_destruct;
@end
