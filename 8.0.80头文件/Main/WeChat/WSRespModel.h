@interface WSRespModel : NSObject
{
    long long _action; // +0x8
    NSString * _data; // +0x10
}
- (id)initWithJson:(id)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
