@interface WCGroup : NSObject <NSCoding>
{
    NSString * gid; // +0x8
    NSString * name; // +0x10
    NSMutableArray * memberList; // +0x18
}
+ (BOOL)isFixedGroup:(id)arg1;
- (id)init;
- (id)initWithSvrObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)compare:(id)arg1;
- (id)name;
- (id)description;
- (id)gid;
- (void)setGid:(id)arg1;
- (void)setName:(id)arg1;
- (id)memberList;
- (void)setMemberList:(id)arg1;
- (void).cxx_destruct;
@end

