@interface WCFinderTemplateKVReportModel : NSObject
{
    BOOL _isCameraTemplate; // +0x8
    NSString * _templateId; // +0x10
    NSString * _musicId; // +0x18
    NSString * _feedId; // +0x20
    NSDictionary * _optionalUdfInfo; // +0x28
}
- (id)genUdfDict;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (BOOL)isCameraTemplate;
- (void)setIsCameraTemplate:(BOOL)arg1;
- (id)optionalUdfInfo;
- (void)setOptionalUdfInfo:(id)arg1;
- (void).cxx_destruct;
@end

