@interface YYWKGamePkgCachesStastics : NSObject
{
    NSMutableArray * _recordArray; // +0x8
    NSString * _mainUrl; // +0x10
}
- (id)init;
- (void)addRecord:(id)arg1 mainUrl:(id)arg2 data:(id)arg3;
- (id)description;
- (id)recordArray;
- (void)setRecordArray:(id)arg1;
- (id)mainUrl;
- (void)setMainUrl:(id)arg1;
- (void).cxx_destruct;
@end

