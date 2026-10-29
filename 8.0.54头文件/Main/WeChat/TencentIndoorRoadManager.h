@interface TencentIndoorRoadManager : NSObject
{
    NSString * _curBuildid; // +0x8
}
+ (id)sharedInstance;
- (void)resetBuildid;
- (BOOL)downloadIndoorRoadDataWithBuildid:(id)arg1 withBlock:(id /* block */)arg2;
- (id)curBuildid;
- (void)setCurBuildid:(id)arg1;
- (void).cxx_destruct;
@end

