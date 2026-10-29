@interface EcsImageMessageModel : NSObject
{
    BOOL _needShowEntrance; // +0x8
    NSString * _imagePath; // +0x10
    NSString * _qrcodeContent; // +0x18
    NSString * _appId; // +0x20
    NSString * _pagePath; // +0x28
    NSString * _bizReportData; // +0x30
    NSString * _sourceUsername; // +0x38
    NSString * _sourceBrandIconUrl; // +0x40
    NSString * _sourceAppName; // +0x48
}
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (BOOL)isHttpImagePath;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)qrcodeContent;
- (void)setQrcodeContent:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (BOOL)needShowEntrance;
- (void)setNeedShowEntrance:(BOOL)arg1;
- (id)bizReportData;
- (void)setBizReportData:(id)arg1;
- (id)sourceUsername;
- (void)setSourceUsername:(id)arg1;
- (id)sourceBrandIconUrl;
- (void)setSourceBrandIconUrl:(id)arg1;
- (id)sourceAppName;
- (void)setSourceAppName:(id)arg1;
- (void).cxx_destruct;
@end
