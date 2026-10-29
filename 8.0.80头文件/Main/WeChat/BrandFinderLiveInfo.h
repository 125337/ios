@interface BrandFinderLiveInfo : NSObject <NSCoding, NSCopying, PBCoding>
{
    BOOL _useWeapp; // +0x8
    unsigned int _lastRefreshTime; // +0xc
    unsigned int _refreshInterval; // +0x10
    unsigned int _liveSquareScene; // +0x14
    NSString * _username; // +0x18
    NSString * _finderFeedExportId; // +0x20
    NSString * _lastEndFeedExportedId; // +0x28
    NSString * _liveSquareTitle; // +0x30
    NSString * _coverUrl; // +0x38
    BrandLiveWeAppData * _weAppData; // +0x40
    NSString * _finderSessionBuffer; // +0x48
    NSData * _dataBuffer; // +0x50
    NSString * _fromSessionIdInfo; // +0x58
    NSString * _nonceId; // +0x60
    NSString * _reportInfo; // +0x68
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_finderFeedExportId;
+ (void)PBArrayAdd_lastRefreshTime;
+ (void)PBArrayAdd_refreshInterval;
+ (void)PBArrayAdd_lastEndFeedExportedId;
+ (void)PBArrayAdd_liveSquareTitle;
+ (void)PBArrayAdd_liveSquareScene;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_useWeapp;
+ (void)PBArrayAdd_weAppData;
+ (void)PBArrayAdd_fromSessionIdInfo;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_reportInfo;
+ (void)initialize;
+ (id)fromRespLiveInfo:(id)arg1;
- (id)toBizFinderLiveInfo;
- (id)toBizServiceFinderLiveInfo;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isLiving;
- (id)description;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)finderFeedExportId;
- (void)setFinderFeedExportId:(id)arg1;
- (unsigned int)lastRefreshTime;
- (void)setLastRefreshTime:(unsigned int)arg1;
- (unsigned int)refreshInterval;
- (void)setRefreshInterval:(unsigned int)arg1;
- (id)lastEndFeedExportedId;
- (void)setLastEndFeedExportedId:(id)arg1;
- (id)liveSquareTitle;
- (void)setLiveSquareTitle:(id)arg1;
- (unsigned int)liveSquareScene;
- (void)setLiveSquareScene:(unsigned int)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (BOOL)useWeapp;
- (void)setUseWeapp:(BOOL)arg1;
- (id)weAppData;
- (void)setWeAppData:(id)arg1;
- (id)finderSessionBuffer;
- (void)setFinderSessionBuffer:(id)arg1;
- (id)dataBuffer;
- (void)setDataBuffer:(id)arg1;
- (id)fromSessionIdInfo;
- (void)setFromSessionIdInfo:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
