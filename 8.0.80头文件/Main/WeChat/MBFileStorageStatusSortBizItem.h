@interface MBFileStorageStatusSortBizItem : NSObject
{
    NSString * _bizName; // +0x8
    MBFileSpaceStatusBizItem * _bizItem; // +0x10
}
- (id)description;
- (long long)compare:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)bizItem;
- (void)setBizItem:(id)arg1;
- (void).cxx_destruct;
@end
