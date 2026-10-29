@interface FavSelectedItemData : NSObject
{
    NSString * _cdnUrl; // +0x8
    NSString * _cdnKey; // +0x10
    NSString * _localPath; // +0x18
}
+ (id)makeWithCdnUrl:(id)arg1 cdnKey:(id)arg2 localPath:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)cdnKey;
- (void)setCdnKey:(id)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (void).cxx_destruct;
@end
