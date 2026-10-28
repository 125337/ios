@interface ACAppChannelResponse : NSObject
{
    NSString * _name; // +0x8
    NSData * _data; // +0x10
    NSDictionary * _extraInfo; // +0x18
}
- (id)initWithName:(id)arg1;
- (id)name;
- (id)data;
- (void)setData:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
