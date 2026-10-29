@interface DeletedMsg : NSObject <PBCoding>
{
    unsigned int _createTime; // +0x8
    long long _msgSvrId; // +0x10
}
+ (void)PBArrayAdd_msgSvrId;
+ (void)PBArrayAdd_createTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
@end

