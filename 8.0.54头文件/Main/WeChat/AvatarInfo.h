@interface AvatarInfo : NSObject
{
    NSString * _path; // +0x8
    ImageLoadPerformanceInfo * _loadInfo; // +0x10
}
+ (id)makeWithPath:(id)arg1 loadInfo:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)path;
- (void)setPath:(id)arg1;
- (id)loadInfo;
- (void)setLoadInfo:(id)arg1;
- (void).cxx_destruct;
@end

