@interface DownloadResult : NSObject
{
    NSNumber * _code; // +0x8
    NSString * _path; // +0x10
}
+ (id)makeWithCode:(id)arg1 path:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)code;
- (void)setCode:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

