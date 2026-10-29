@interface WCFinderUniversalPlayerInfoModel : NSObject <YYModel>
{
    NSString * _feedID; // +0x8
    NSString * _nonceID; // +0x10
    NSString * _exportID; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)exportID;
- (void)setExportID:(id)arg1;
- (void).cxx_destruct;
@end
