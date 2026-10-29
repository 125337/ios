@interface MMLiveMultiAngleChannelInfo : NSObject
{
    unsigned int _retryCount; // +0x8
    unsigned long long _itemIndex; // +0x10
    MMLiveCDNPlayerItem * _cdnPlayerItem; // +0x18
    LiveSdkChannelParamsDesc * _channelParamsDesc; // +0x20
    MMLiveCdnStreamInfo * _audioModeCdnStreamInfo; // +0x28
    NSMutableDictionary * _cdnStreamInfoDict; // +0x30
    NSData * _qualityTagCacheBuf; // +0x38
    NSMutableArray * _displayedCdnStreamQualityTagList; // +0x40
    NSMutableArray * _allCdnStreamQualityTagList; // +0x48
    CGSize _videoSize; // +0x50
}
- (void)updateChannelParamsDesc:(id)arg1;
- (void)cleanData;
- (void)updateCdnStreamAndClarity;
- (void)cdnPlayUrlAddObjectWithKey:(long long)arg1 value:(id)arg2;
- (void)cdnPlayUrlRemoveObjectWithKey:(long long)arg1;
- (id)getCdnStreamInfoWithQualityTag:(unsigned int)arg1 isTryViewLive:(BOOL)arg2;
- (id)getCurrentDisplayedCdnStreamList;
- (unsigned long long)displayedCdnStreamCount;
- (id)cdnStreamInfoDict;
- (id)displayedCdnStreamQualityTagList;
- (BOOL)supportScreenRotate;
- (void)updateVideoSizeFromPlayerEvent:(CGSize)arg1;
- (void)updateVideoSizeFromChannelParamsDesc;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)arg1;
- (id)cdnPlayerItem;
- (void)setCdnPlayerItem:(id)arg1;
- (id)channelParamsDesc;
- (void)setChannelParamsDesc:(id)arg1;
- (id)audioModeCdnStreamInfo;
- (void)setAudioModeCdnStreamInfo:(id)arg1;
- (void)setCdnStreamInfoDict:(id)arg1;
- (id)qualityTagCacheBuf;
- (void)setQualityTagCacheBuf:(id)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (void)setDisplayedCdnStreamQualityTagList:(id)arg1;
- (id)allCdnStreamQualityTagList;
- (void)setAllCdnStreamQualityTagList:(id)arg1;
- (void).cxx_destruct;
@end

