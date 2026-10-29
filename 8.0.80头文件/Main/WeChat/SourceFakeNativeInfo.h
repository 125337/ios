@interface SourceFakeNativeInfo : NSObject <PBCoding>
{
    NSString * _enterPath; // +0x8
}
+ (void)PBArrayAdd_enterPath;
+ (void)initialize;
+ (BOOL)isFakeNativeAllowShowTail:(id)arg1;
+ (id)appIdForSourceImgBizType:(unsigned long long)arg1;
+ (id)tailIconForSourceImgBizType:(unsigned long long)arg1;
+ (id)tailTitleForSourceImgBizType:(unsigned long long)arg1;
+ (id)imgSourceUrlForFakeNativeInfo:(id)arg1;
+ (id)fakeNativeInfoFromImgSourceUrl:(id)arg1;
- (id)getPBPropertyTable;
- (id)description;
- (id)enterPath;
- (void)setEnterPath:(id)arg1;
- (void).cxx_destruct;
@end
