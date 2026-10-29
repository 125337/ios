@interface AppSettingItem : NSObject <NSCoding>
{
    BOOL appAddedByUser; // +0x8
    unsigned int flag; // +0xc
    NSString * openID; // +0x10
    NSString * appID; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)openID;
- (void)setOpenID:(id)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (BOOL)appAddedByUser;
- (void)setAppAddedByUser:(BOOL)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (void).cxx_destruct;
@end
