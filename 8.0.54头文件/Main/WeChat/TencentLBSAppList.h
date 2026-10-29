@interface TencentLBSAppList : NSObject
{
    NSString * _docPath; // +0x8
    NSString * _path; // +0x10
    NSDate * _last; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)postAppList;
- (id)docPath;
- (void)setDocPath:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)last;
- (void)setLast:(id)arg1;
- (void).cxx_destruct;
@end

