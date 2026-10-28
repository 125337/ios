@interface MJShootRedPacketResponseInfo : NSObject
{
    double _duration; // +0x8
    NSString * _filePath; // +0x10
    NSString * _fileMD5; // +0x18
    NSString * _templateID; // +0x20
    NSString * _cdnURLString; // +0x28
    NSArray * _auditFileURLStrings; // +0x30
    long long _mediaType; // +0x38
    unsigned long long _creationType; // +0x40
}
- (id)initWithCreationType:(unsigned long long)arg1 mediaType:(long long)arg2;
- (id)description;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)cdnURLString;
- (void)setCdnURLString:(id)arg1;
- (id)auditFileURLStrings;
- (void)setAuditFileURLStrings:(id)arg1;
- (long long)mediaType;
- (unsigned long long)creationType;
- (void).cxx_destruct;
@end
