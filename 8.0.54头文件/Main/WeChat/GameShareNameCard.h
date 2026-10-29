@interface GameShareNameCard : MMObject <NSCopying>
{
    NSString * _iconUrl; // +0x8
    NSString * _name; // +0x10
    NSString * _desc; // +0x18
    NSString * _tail; // +0x20
    NSString * _link; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)tail;
- (void)setTail:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (void).cxx_destruct;
@end

