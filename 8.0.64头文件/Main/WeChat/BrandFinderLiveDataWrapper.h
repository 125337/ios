@interface BrandFinderLiveDataWrapper : NSObject <NSCopying>
{
    unsigned int _finderLiveReplayStatus; // +0x8
    unsigned int _liveFlag; // +0xc
    NSString * _finderUserName; // +0x10
    unsigned long long _liveID; // +0x18
    NSString * _feedID; // +0x20
    NSString * _nonceID; // +0x28
    NSString * _exportId; // +0x30
    NSString * _finderNickName; // +0x38
    NSString * _headUrl; // +0x40
    NSString * _desc; // +0x48
    unsigned long long _finderLiveStatus; // +0x50
    double _liveExtFlag; // +0x58
    NSString * _authIconUrl; // +0x60
    NSString * _authIconTypeStr; // +0x68
    BrandFinderLiveDataWrapperMedia * _media; // +0x70
    NSString * _category; // +0x78
    NSString * _recommendReason; // +0x80
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithBizProfileFinderLiveInfo:(id)arg1;
- (id)initFromXML:(XmlReaderNode_t *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (void)updateDetailDataFromDb;
- (void)fetchDetailDataWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)fetchLiveStatusWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (BOOL)isLive;
- (BOOL)isReplay;
- (BOOL)isValid;
- (BOOL)canForward;
- (id)liveStatusWording:(BOOL)arg1;
- (void)setFinderLiveStatus:(unsigned long long)arg1;
- (void)internalSetFinderLiveStatus:(unsigned long long)arg1 shouldCallExtension:(BOOL)arg2;
- (void)setRecommendReason:(id)arg1;
- (void)setFinderLiveReplayStatus:(unsigned int)arg1;
- (void)internalSetFinderReplayStatus:(unsigned int)arg1 shouldCallExtension:(BOOL)arg2;
- (id)description;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (unsigned long long)liveID;
- (void)setLiveID:(unsigned long long)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)finderNickName;
- (void)setFinderNickName:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned long long)finderLiveStatus;
- (unsigned int)finderLiveReplayStatus;
- (double)liveExtFlag;
- (void)setLiveExtFlag:(double)arg1;
- (id)authIconUrl;
- (void)setAuthIconUrl:(id)arg1;
- (id)authIconTypeStr;
- (void)setAuthIconTypeStr:(id)arg1;
- (id)media;
- (void)setMedia:(id)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (id)recommendReason;
- (unsigned int)liveFlag;
- (void)setLiveFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
