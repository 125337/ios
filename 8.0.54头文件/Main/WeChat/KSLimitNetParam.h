@interface KSLimitNetParam : NSObject
{
    unsigned int _firstLimitTime; // +0x8
    unsigned int _triggleTime; // +0xc
    unsigned int _downloadTime; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)firstLimitTime;
- (void)setFirstLimitTime:(unsigned int)arg1;
- (unsigned int)triggleTime;
- (void)setTriggleTime:(unsigned int)arg1;
- (unsigned int)downloadTime;
- (void)setDownloadTime:(unsigned int)arg1;
@end

