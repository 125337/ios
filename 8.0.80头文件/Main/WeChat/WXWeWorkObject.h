@interface WXWeWorkObject : NSObject
{
    int _subType; // +0x8
    NSData * _data; // +0x10
    NSString * _extInfo; // +0x18
}
+ (id)object;
- (id)data;
- (void)setData:(id)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
