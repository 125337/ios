@interface MMLiveCdnStreamInfo : NSObject <NSCopying>
{
    BOOL _isDisplayedStream; // +0x8
    BOOL _isMainStreamInvalidFromServer; // +0x9
    BOOL _hasChangedToBackStream; // +0xa
    NSNumber * _streamKey; // +0x10
    CdnTransInfo * _cdnTransInfo; // +0x18
    NSString * _streamUrl; // +0x20
}
+ (id)liveCdnStreamInfoFromCdnTransInfo:(id)arg1 withKey:(id)arg2 andQualityTagItem:(id)arg3;
+ (id)liveCdnStreamInfoFromUrl:(id)arg1 withKey:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)resetAllData;
- (void)updateAndResetDataWithCdnTransInfo:(id)arg1 andQualityTagItem:(id)arg2;
- (void)updateAndResetDataWithUrl:(id)arg1;
- (BOOL)hasBackUrl;
- (id)getLiveUrl;
- (void)updateWithMainBlockFlag:(unsigned int)arg1;
- (BOOL)isSameLiveUrlWithStreamId:(id)arg1;
- (BOOL)isEqualToStreamInfo:(id)arg1;
- (id)streamKey;
- (void)setStreamKey:(id)arg1;
- (id)cdnTransInfo;
- (void)setCdnTransInfo:(id)arg1;
- (id)streamUrl;
- (void)setStreamUrl:(id)arg1;
- (BOOL)isDisplayedStream;
- (void)setIsDisplayedStream:(BOOL)arg1;
- (BOOL)isMainStreamInvalidFromServer;
- (void)setIsMainStreamInvalidFromServer:(BOOL)arg1;
- (BOOL)hasChangedToBackStream;
- (void)setHasChangedToBackStream:(BOOL)arg1;
- (void).cxx_destruct;
@end
