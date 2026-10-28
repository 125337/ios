@interface WAAppBrandUpdateWxaUsageListNotify : NSObject
{
    unsigned int _type; // +0x8
    unsigned int _deleteCount; // +0xc
    NSMutableArray * _deleteAppInfos; // +0x10
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)deleteCount;
- (void)setDeleteCount:(unsigned int)arg1;
- (id)deleteAppInfos;
- (void)setDeleteAppInfos:(id)arg1;
- (void).cxx_destruct;
@end
