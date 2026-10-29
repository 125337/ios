@interface QBJcePropertyInfo : NSObject
{
    BOOL flag; // +0x8
    long long tag; // +0x10
    NSString * name; // +0x18
    NSString * type; // +0x20
    QBJcePair * ext; // +0x28
}
+ (id)propertyInfo;
- (id)init;
- (long long)compareWithTag:(id)arg1;
- (id)description;
- (void).cxx_destruct;
- (long long)tag;
- (void)setTag:(long long)arg1;
- (BOOL)flag;
- (void)setFlag:(BOOL)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)ext;
- (void)setExt:(id)arg1;
@end
