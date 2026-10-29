@interface WCVideoFlowInfo : NSObject <NSCoding, PBCoding, PBCoderNSCodingBridge>
{
    BOOL _isMiniVideo; // +0x8
    unsigned int _category; // +0xc
    unsigned int _playCount; // +0x10
    unsigned int _realShareCategory; // +0x14
    NSString * _vid; // +0x18
    NSString * _expand; // +0x20
    NSString * _searchId; // +0x28
    NSString * _openId; // +0x30
    NSString * _shareUrl; // +0x38
    NSString * _shareTitle; // +0x40
    NSString * _shareDesc; // +0x48
    NSString * _shareImgUrl; // +0x50
    NSString * _source; // +0x58
    NSString * _sourceImgUrl; // +0x60
    NSString * _sourceUrl; // +0x68
    NSString * _strPlayCount; // +0x70
    NSString * _titleUrl; // +0x78
    NSString * _nsTagInfoJSON; // +0x80
    NSString * _videoChannelTitle; // +0x88
    NSString * _bizUserName; // +0x90
    long long _sourceJumpType; // +0x98
    NSMutableArray * _extParams; // +0xa0
    NSData * _extParamsNSCodingData; // +0xa8
}
+ (void)PBArrayAdd_vid;
+ (void)PBArrayAdd_expand;
+ (void)PBArrayAdd_searchId;
+ (void)PBArrayAdd_openId;
+ (void)PBArrayAdd_category;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_shareTitle;
+ (void)PBArrayAdd_shareDesc;
+ (void)PBArrayAdd_shareImgUrl;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_sourceImgUrl;
+ (void)PBArrayAdd_sourceUrl;
+ (void)PBArrayAdd_strPlayCount;
+ (void)PBArrayAdd_playCount;
+ (void)PBArrayAdd_titleUrl;
+ (void)PBArrayAdd_extParamsNSCodingData;
+ (void)PBArrayAdd_nsTagInfoJSON;
+ (void)PBArrayAdd_isMiniVideo;
+ (void)PBArrayAdd_realShareCategory;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)beforePBCoderProcess;
- (void)afterPBCoderProcess;
- (id)vid;
- (void)setVid:(id)arg1;
- (id)expand;
- (void)setExpand:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (unsigned int)category;
- (void)setCategory:(unsigned int)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)shareDesc;
- (void)setShareDesc:(id)arg1;
- (id)shareImgUrl;
- (void)setShareImgUrl:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)sourceImgUrl;
- (void)setSourceImgUrl:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (id)strPlayCount;
- (void)setStrPlayCount:(id)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (id)titleUrl;
- (void)setTitleUrl:(id)arg1;
- (id)nsTagInfoJSON;
- (void)setNsTagInfoJSON:(id)arg1;
- (BOOL)isMiniVideo;
- (void)setIsMiniVideo:(BOOL)arg1;
- (unsigned int)realShareCategory;
- (void)setRealShareCategory:(unsigned int)arg1;
- (id)videoChannelTitle;
- (void)setVideoChannelTitle:(id)arg1;
- (id)bizUserName;
- (void)setBizUserName:(id)arg1;
- (long long)sourceJumpType;
- (void)setSourceJumpType:(long long)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (id)extParamsNSCodingData;
- (void)setExtParamsNSCodingData:(id)arg1;
- (void).cxx_destruct;
@end

